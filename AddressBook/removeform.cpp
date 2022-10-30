#include "removeform.h"
#include "ui_removeform.h"

RemoveForm::RemoveForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveForm)
{
    ui->setupUi(this);
    connect(ui->SubmitButton,&QPushButton::clicked,this,[&](){QWidget::close();});
}

RemoveForm::~RemoveForm()
{
    delete ui;
}
int RemoveForm::IDGet()
{
    int GottenID = ui->ID->text().toInt();
    return GottenID;

}
