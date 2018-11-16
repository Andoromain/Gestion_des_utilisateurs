#include "mainwindow.h"
#include "dialog.h"
#include <QApplication>
#include<QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    dialog p;
    p.show();
    return a.exec();
}
