#include "menuwindow.h"
//#include <QFormLayout>
//#include <QHBoxLayout>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QWidget>
#include "calcwindow.h"
#include "catwindow.h"

#define n 40
#define h 40

MenuWindow::MenuWindow(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("Menu");
    this->resize(600, 200);

    label1 = new QLabel(this);
    label1->setText("<h3>Choose a mini-app</h3>");

    catRadioButton = new QPushButton("Cat Pushin", this);
    catRadioButton->setMinimumHeight(h);
    checkBox = new QPushButton("Choice", this);
    checkBox->setMinimumHeight(h);
    calculator = new QPushButton("Calculator", this);
    calculator->setMinimumHeight(h);
    game = new QPushButton("Game - Shooter", this);
    game->setMinimumHeight(h);

    QVBoxLayout *layout = new QVBoxLayout(this); // layout сразу на this
    layout->setContentsMargins(n, n, n, n);
    layout->setSpacing(15);
    layout->addWidget(label1);
    layout->addWidget(game);
    layout->addWidget(calculator);
    layout->addWidget(catRadioButton);
    layout->addWidget(checkBox);

    connect(calculator, &QPushButton::clicked, this, &MenuWindow::calculatorClicked);
    connect(catRadioButton, &QPushButton::clicked, this, &MenuWindow::catClicked);
}
MenuWindow::~MenuWindow() {}

void MenuWindow::calculatorClicked()
{
    calcWindow = new CalcWindow();
    calcWindow->show();
}
void MenuWindow::catClicked()
{
    catWindow = new CatWindow();
    catWindow->show();
}
