/********************************************************************************
** Form generated from reading UI file 'removeform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEFORM_H
#define UI_REMOVEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoveForm
{
public:
    QPushButton *SubmitButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLineEdit *ID;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *RemoveForm)
    {
        if (RemoveForm->objectName().isEmpty())
            RemoveForm->setObjectName(QString::fromUtf8("RemoveForm"));
        RemoveForm->resize(298, 179);
        SubmitButton = new QPushButton(RemoveForm);
        SubmitButton->setObjectName(QString::fromUtf8("SubmitButton"));
        SubmitButton->setGeometry(QRect(100, 150, 91, 23));
        widget = new QWidget(RemoveForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 40, 231, 61));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ID = new QLineEdit(widget);
        ID->setObjectName(QString::fromUtf8("ID"));

        horizontalLayout->addWidget(ID);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(RemoveForm);

        QMetaObject::connectSlotsByName(RemoveForm);
    } // setupUi

    void retranslateUi(QDialog *RemoveForm)
    {
        RemoveForm->setWindowTitle(QApplication::translate("RemoveForm", "Dialog", nullptr));
        SubmitButton->setText(QApplication::translate("RemoveForm", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        label->setText(QApplication::translate("RemoveForm", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \321\203\320\264\320\260\320\273\321\217\320\265\320\274\320\276\320\271 \321\201\321\202\321\200\320\276\320\272\320\270</span></p></body></html>", nullptr));
        ID->setInputMask(QApplication::translate("RemoveForm", "9000000000000000000000000000000000000000", nullptr));
        ID->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RemoveForm: public Ui_RemoveForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEFORM_H
