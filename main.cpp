#include "mainwindow.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile styleFile(":/style.qss");
    if (styleFile.open(QFile::ReadOnly | QFile::Text)) {
        a.setStyleSheet(styleFile.readAll());
        styleFile.close();
        qDebug() << "Стиль загружен";
    } else {
        qDebug() << "Не удалось открыть style.qss:" << styleFile.errorString();
    }

    MainWindow w;
    w.show();
    return a.exec();
}
