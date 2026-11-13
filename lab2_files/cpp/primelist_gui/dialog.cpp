#include <QMessageBox>
#include "dialog.h"
#include "ui_dialog.h"
#include "../primelist/primelist.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::calculate()
{
    ui->listWidget->clear();

    QString textA = ui->lineEditA->text().trimmed();
    QString textB = ui->lineEditB->text().trimmed();

    bool okA = false;
    bool okB = false;
    int a = textA.toInt(&okA, 10);
    int b = textB.toInt(&okB, 10);

    if (!okA) {
        QString reason = textA.isEmpty()
        ? "поле пустое"
        : "значение не является десятичным целым числом";
        QMessageBox::critical(this, "Ошибка",
                              "Параметр A введён неверно: " + reason + ".");
        return;
    }
    if (!okB) {
        QString reason = textB.isEmpty()
        ? "поле пустое"
        : "значение не является десятичным целым числом";
        QMessageBox::critical(this, "Ошибка",
                              "Параметр B введён неверно: " + reason + ".");
        return;
    }

    for (int n : primelist(a, b)) {
        ui->listWidget->addItem(QString::number(n));
    }
}
