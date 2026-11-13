/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelA;
    QLineEdit *lineEditA;
    QLabel *labelB;
    QLineEdit *lineEditB;
    QPushButton *pushButton;
    QListWidget *listWidget;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        labelA = new QLabel(Dialog);
        labelA->setObjectName("labelA");

        horizontalLayout->addWidget(labelA);

        lineEditA = new QLineEdit(Dialog);
        lineEditA->setObjectName("lineEditA");

        horizontalLayout->addWidget(lineEditA);

        labelB = new QLabel(Dialog);
        labelB->setObjectName("labelB");

        horizontalLayout->addWidget(labelB);

        lineEditB = new QLineEdit(Dialog);
        lineEditB->setObjectName("lineEditB");

        horizontalLayout->addWidget(lineEditB);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        listWidget = new QListWidget(Dialog);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);


        retranslateUi(Dialog);
        QObject::connect(pushButton, SIGNAL(clicked()), Dialog, SLOT(calculate()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        labelA->setText(QCoreApplication::translate("Dialog", "A:", nullptr));
        labelB->setText(QCoreApplication::translate("Dialog", "B:", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
