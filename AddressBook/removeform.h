#ifndef REMOVEFORM_H
#define REMOVEFORM_H

#include <QDialog>

namespace Ui {
class RemoveForm;
}

class RemoveForm : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveForm(QWidget *parent = nullptr);
    ~RemoveForm();
    int IDGet();

private:
    Ui::RemoveForm *ui;
};

#endif // REMOVEFORM_H
