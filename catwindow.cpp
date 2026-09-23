#include "catwindow.h"
#include <QHBoxLayout>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QWidget>

CatWindow::CatWindow(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("Cat Pushin");
    this->resize(550, 200);
}
CatWindow::~CatWindow() {}
