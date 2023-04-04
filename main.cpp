#include <QApplication>
#include "ver1gui.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow MainWindow;
    Ui_MainWindow ui;
    ui.setupUi(&MainWindow);
    MainWindow.show();
    return a.exec();
}

