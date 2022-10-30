#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inputform.h"
#include "removeform.h"
#include "QDebug"
#include "QJsonDocument"
#include "QJsonArray"
#include "QJsonObject"
#include "QFile"
#include "QFileDialog"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->AddButton,&QPushButton::clicked,this,&MainWindow::AddButtonPress);
    connect(ui->RemoveButton,&QPushButton::clicked,this,&MainWindow::RemoveButtonPress);
    connect(ui->CopyButton,&QPushButton::clicked,this,&MainWindow::CopyButtonPress);
    connect(ui->SaveButton,&QPushButton::clicked,this,&MainWindow::SaveButtonPress);
    connect(ui->LoadButton,&QPushButton::clicked,this,&MainWindow::LoadButtonPress);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::AddButtonPress()
{
    InputForm Window;
    Window.setModal(true);
    Window.exec();
    QMap<QString,QString> Data = Window.DataGet();
    ui->DataBase->insertRow(ui->DataBase->rowCount());
    QTableWidgetItem *Item = new QTableWidgetItem(Data["Surname"]);
    ui->DataBase->setItem(ui->DataBase->rowCount()-1,0,Item);

    Item = new QTableWidgetItem(Data["Name"]);
    ui->DataBase->setItem(ui->DataBase->rowCount()-1,1,Item);

    Item = new QTableWidgetItem(Data["Patronymic"]);
    ui->DataBase->setItem(ui->DataBase->rowCount()-1,2,Item);

    Item = new QTableWidgetItem(Data["PhoneNumber"]);
    ui->DataBase->setItem(ui->DataBase->rowCount()-1,3,Item);

    Item = new QTableWidgetItem(Data["Address"]);
    ui->DataBase->setItem(ui->DataBase->rowCount()-1,4,Item);
}
void MainWindow::RemoveButtonPress()
{
    QList<QTableWidgetSelectionRange> DeletingObject = ui->DataBase->selectedRanges();

    for(const QTableWidgetSelectionRange &CurrentRange:DeletingObject)
    {
        for(int Iter = CurrentRange.bottomRow();Iter >= CurrentRange.topRow();--Iter)
        {
            ui->DataBase->removeRow(Iter);
        }
    }
}
void MainWindow::CopyButtonPress()
{
    QList<QTableWidgetSelectionRange> DeletingObject = ui->DataBase->selectedRanges();

    for(const QTableWidgetSelectionRange &CurrentRange:DeletingObject)
    {


        for(int IterRow = CurrentRange.topRow(), BotRow = CurrentRange.bottomRow();IterRow <= BotRow;++IterRow)
        {
            ui->DataBase->insertRow(BotRow + 1);
            for (int IterColumn = ui->DataBase->columnCount() - 1;IterColumn >= 0; --IterColumn )
            {
               ui->DataBase->setItem(BotRow + 1,IterColumn, ui->DataBase->item(IterRow,IterColumn)->clone());
            }
        }
    }
}
void MainWindow::SaveButtonPress()
{
    if (!ui->DataBase->rowCount())
    {
        QMessageBox::warning(this,"Warning","Нечего сохранять");
        return;
    }
    QString fileName = QFileDialog::getSaveFileName(this, "Save File", "DataBase.json", "JSON files (*.json)");
    if (fileName.isEmpty()) return;
    QJsonArray AboutToSerialize;
    for(int IterRow = 0, BotRow = ui->DataBase->rowCount() - 1;IterRow <= BotRow;++IterRow)
    {
        QJsonObject Object;
        for (int IterColumn = ui->DataBase->columnCount() - 1;IterColumn >= 0; --IterColumn )
        {
            Object[ui->DataBase->horizontalHeaderItem(IterColumn)->text()] = ui->DataBase->item(IterRow,IterColumn)->text();
        }
        AboutToSerialize.append(Object);
    }
    QFile JsonFile(fileName);
    JsonFile.open(QFile::WriteOnly);
    JsonFile.write(QJsonDocument(AboutToSerialize).toJson(QJsonDocument::Indented));
    JsonFile.close();
}
void MainWindow::LoadButtonPress()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Save File", "DataBase.json", "JSON files (*.json)");
    if (fileName.isEmpty()) return;

    QFile JsonFile(fileName);
    JsonFile.open(QFile::ReadOnly);
    QJsonArray AboutToDeserialize = QJsonDocument::fromJson(JsonFile.readAll()).array();

    JsonFile.close();
    while (ui->DataBase->rowCount())
    {
        ui->DataBase->removeRow(0);
    }
    for(const QJsonValueRef& Iter: AboutToDeserialize)
    {
        QJsonObject Object(Iter.toObject());
        ui->DataBase->insertRow(ui->DataBase->rowCount());
        for (int IterColumn = ui->DataBase->columnCount() - 1;IterColumn >= 0; --IterColumn )
        {

           QTableWidgetItem* Item = new QTableWidgetItem(Object[ui->DataBase->horizontalHeaderItem(IterColumn)->text()].toString());
           ui->DataBase->setItem(ui->DataBase->rowCount()-1,IterColumn,Item);
        }
    }

}


