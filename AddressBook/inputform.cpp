#include "inputform.h"
#include "ui_inputform.h"

InputForm::InputForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InputForm)
{
    ui->setupUi(this);
    connect(ui->SubmitButton,&QPushButton::clicked,this,[&](){QWidget::close();});
}

InputForm::~InputForm()
{
    delete ui;
}

QMap<QString,QString> InputForm::DataGet()
{
    QString Surname = ui->SurnameInput->text();
    QString Name = ui->NameInput->text();
    QString Patronymic = ui->PatronymicInput->text();
    QString PhoneNumber = ui->PhoneNumberInput->text();
    QString Address = ui->AddressInput->text();
    QMap<QString,QString> Data;
    Data["Surname"] = Surname;
    Data["Name"] = Name;
    Data["Patronymic"] = Patronymic;
    Data["PhoneNumber"] = PhoneNumber;
    Data["Address"] = Address;
    return Data;
}
