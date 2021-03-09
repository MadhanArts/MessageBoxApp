#include "dialog.h"
#include "ui_dialog.h"
#include<QMessageBox>
#include<QDebug>

dialog::dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog)
{
    ui->setupUi(this);
}

dialog::~dialog()
{
    delete ui;
}

void dialog::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::information(this, "SWEDHA 212218104104", "THIS IS INFORMATION BOX");
}

void dialog::on_pushButton_2_clicked()
{

    QMessageBox::StandardButton reply = QMessageBox::question(this, "SWEDHA", "Do you like apples?", QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QMessageBox::information(this, "APPLE", "YES");
      } else {
        QMessageBox::information(this, "APPLE", "NO");
      }

}

void dialog::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::critical(this, "Custom message", "This is custom message", QMessageBox::Yes|QMessageBox::YesToAll|QMessageBox::No|QMessageBox::NoToAll);
    if(reply == QMessageBox::YesToAll)
    {
        QMessageBox::warning(this, "Message Display", "Display the message with warning as YesToAll");
    }
    else if(reply == QMessageBox::NoToAll)
    {
        QMessageBox::warning(this, "Message Display", "Dont the message with warning as NoToAll");
    }
    else
    {
        qDebug() <<"Nothing to Display";
    }

}

void dialog::on_pushButton_4_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::warning(this, "Critical Message", "This is warning message");
}
