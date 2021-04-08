#include "widget.h"
#include "ui_widget.h"
#include <QButtonGroup>
#include<QDebug>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QButtonGroup *buttongroup=new QButtonGroup(this);
        buttongroup->addButton(ui->WindowscheckBox);
        buttongroup->addButton(ui->MaccheckBox);
        buttongroup->addButton(ui->LinuxcheckBox);
        buttongroup->setExclusive(true);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_WindowscheckBox_toggled(bool checked)
{
    if(checked)
    {
        qDebug()<<"Windows Checkbox is checked!";
    }
    else
    {
        qDebug()<<"Windows Checkbox is Unchecked!";
    }
}

void Widget::on_pushButton_1_clicked()
{
    if(ui->WindowscheckBox->isChecked())
        {
            qDebug()<<"Windows Checkbox is checked!";
        }
        else
        {
            qDebug()<<"Windows Checkbox is Unchecked!";
        }
        if(ui->MaccheckBox->isChecked())
        {
            qDebug()<<"Mac Checkbox is checked!";
        }
        else
        {
            qDebug()<<"Mac Checkbox is Unchecked!";
        }
        if(ui->LinuxcheckBox->isChecked())
        {
            qDebug()<<"Linux Checkbox is checked!";
        }
        else
        {
            qDebug()<<"Linux Checkbox is Unchecked!";
        }
}

void Widget::on_pushButton_2_clicked()
//Exclusive
{
    if(ui->WindowscheckBox->isChecked())
        {
            ui->WindowscheckBox->setChecked(false);
        }
        else
        {
            ui->WindowscheckBox->setChecked(true);
        }
}


void Widget::on_checkBox_1_clicked()
//Non-Exclusive
{
    if(ui->checkBox_1->isChecked())
        {
            ui->checkBox_1->setChecked(false);
        }
        else
        {
            ui->checkBox_1->setChecked(true);
        }
}
