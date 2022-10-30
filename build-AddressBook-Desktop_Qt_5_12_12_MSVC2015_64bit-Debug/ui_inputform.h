/********************************************************************************
** Form generated from reading UI file 'inputform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTFORM_H
#define UI_INPUTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InputForm
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *SurnameInput;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *NameInput;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *PatronymicInput;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *PhoneNumberInput;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *AddressInput;
    QPushButton *SubmitButton;

    void setupUi(QDialog *InputForm)
    {
        if (InputForm->objectName().isEmpty())
            InputForm->setObjectName(QString::fromUtf8("InputForm"));
        InputForm->resize(400, 300);
        verticalLayout = new QVBoxLayout(InputForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(InputForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(InputForm);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        SurnameInput = new QLineEdit(InputForm);
        SurnameInput->setObjectName(QString::fromUtf8("SurnameInput"));
        SurnameInput->setMaxLength(100);

        horizontalLayout->addWidget(SurnameInput);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(InputForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        NameInput = new QLineEdit(InputForm);
        NameInput->setObjectName(QString::fromUtf8("NameInput"));
        NameInput->setMaxLength(100);

        horizontalLayout_2->addWidget(NameInput);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(InputForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        PatronymicInput = new QLineEdit(InputForm);
        PatronymicInput->setObjectName(QString::fromUtf8("PatronymicInput"));
        PatronymicInput->setMaxLength(100);

        horizontalLayout_3->addWidget(PatronymicInput);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(InputForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        PhoneNumberInput = new QLineEdit(InputForm);
        PhoneNumberInput->setObjectName(QString::fromUtf8("PhoneNumberInput"));
        PhoneNumberInput->setMaxLength(17);

        horizontalLayout_4->addWidget(PhoneNumberInput);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(InputForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        AddressInput = new QLineEdit(InputForm);
        AddressInput->setObjectName(QString::fromUtf8("AddressInput"));
        AddressInput->setMaxLength(32767);

        horizontalLayout_5->addWidget(AddressInput);


        verticalLayout->addLayout(horizontalLayout_5);

        SubmitButton = new QPushButton(InputForm);
        SubmitButton->setObjectName(QString::fromUtf8("SubmitButton"));

        verticalLayout->addWidget(SubmitButton);


        retranslateUi(InputForm);

        QMetaObject::connectSlotsByName(InputForm);
    } // setupUi

    void retranslateUi(QDialog *InputForm)
    {
        InputForm->setWindowTitle(QApplication::translate("InputForm", "\320\227\320\260\320\277\321\200\320\276\321\201 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270", nullptr));
        label_6->setText(QApplication::translate("InputForm", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("InputForm", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        SurnameInput->setInputMask(QApplication::translate("InputForm", ">A!<aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", nullptr));
        SurnameInput->setText(QString());
        SurnameInput->setPlaceholderText(QApplication::translate("InputForm", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\204\320\260\320\274\320\270\320\273\320\270\321\216", nullptr));
        label_2->setText(QApplication::translate("InputForm", "\320\230\320\274\321\217", nullptr));
        NameInput->setInputMask(QApplication::translate("InputForm", ">A!<aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", nullptr));
        NameInput->setText(QString());
        NameInput->setPlaceholderText(QApplication::translate("InputForm", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217", nullptr));
        label_3->setText(QApplication::translate("InputForm", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        PatronymicInput->setInputMask(QApplication::translate("InputForm", ">A!<aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", nullptr));
        PatronymicInput->setText(QString());
        PatronymicInput->setPlaceholderText(QApplication::translate("InputForm", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\276\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_4->setText(QApplication::translate("InputForm", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        PhoneNumberInput->setInputMask(QApplication::translate("InputForm", "9-(999)-999-99-99", nullptr));
        PhoneNumberInput->setText(QApplication::translate("InputForm", "-()---", nullptr));
        PhoneNumberInput->setPlaceholderText(QApplication::translate("InputForm", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        label_5->setText(QApplication::translate("InputForm", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        AddressInput->setInputMask(QString());
        AddressInput->setText(QString());
        AddressInput->setPlaceholderText(QApplication::translate("InputForm", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\260\320\264\321\200\320\265\321\201", nullptr));
        SubmitButton->setText(QApplication::translate("InputForm", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputForm: public Ui_InputForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTFORM_H
