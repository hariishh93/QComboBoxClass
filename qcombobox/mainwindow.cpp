#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QIcon>
#include<QStringList>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     QStringList list;

     list <<"Fruits"<<"Apple"<<"Orange"<<"papaya"<<"JackFruit";

     ui->comboBox->setStyleSheet("background-color: rgb(0, 0, 0) ; color: rgb(0, 255, 255);");

        ui->comboBox->setEditable(true);

        for(int i=0;i<list.size();i++)

        {

        ui->comboBox->addItem(QIcon("C:/Users/Harish/Documents/qcombobox/icon.png"),list.at(i));

    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    qDebug()<<"Your Choice: "<<ui->comboBox->currentText();
           qDebug()<<"\nThe index is "<<QString::number(ui->comboBox->currentIndex());
}

void MainWindow::on_pushButton_2_clicked()
{
 ui->comboBox->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked()
{
    qDebug()<<"The combo box currently has"<<QString::number(ui->comboBox->count())<<"Items.They are";

   for(int i=0;i<ui->comboBox->count();i++)

   {

       qDebug()<<"Index"<<QString::number(i)<<":"<<ui->comboBox->itemText(i);

   }
}
