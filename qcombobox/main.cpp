#include "mainwindow.h"

#include <QApplication>

#include<QFile>

#include<QTextStream>

QString readTextFile(QString path)

{

    QFile file(path);

    if(file.open(QIODevice::ReadOnly|QIODevice::Text))

    {

        QTextStream in(&file);

        return in.readAll();

    }

    return " ";

}

int main(int argc, char *argv[])



{

    QApplication a(argc, argv);



    QString css=readTextFile(":/resources/style/sheet.txt");//Copy the path of text document[shown in steps video]



    if(css.length()>0)



    {

      a.setStyleSheet(css);

}

     MainWindow w;

      w.show();

     return a.exec();

}
