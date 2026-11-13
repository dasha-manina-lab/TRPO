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

    bool okA = false;
    bool okB = false;
    int a = ui->lineEditA->text().toInt(&okA);
    int b = ui->lineEditB->text().toInt(&okB);
    if (!okA || !okB) {
        return;
    }

    for (int n : primelist(a, b)) {
        ui->listWidget->addItem(QString::number(n));
    }
}
