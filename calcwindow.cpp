#include "calcwindow.h"

CalcWindow::CalcWindow(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("Calculator");
    this->resize(600, 200);
}
CalcWindow::~CalcWindow() {}
