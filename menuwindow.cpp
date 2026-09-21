#include "menuwindow.h"
//#include <QFormLayout>
//#include <QHBoxLayout>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QWidget>

MenuWindow::MenuWindow(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("Меню");
    this->resize(600, 200);

    label1 = new QLabel(this);
    label1->setText("<h2>Выберите мини-программу</h2>");

    catRadioButton = new QPushButton("Кот Пушин", this);
    catRadioButton->setMinimumHeight(50);
    checkBox = new QPushButton("Выбор", this);
    checkBox->setMinimumHeight(50);
    calculator = new QPushButton("Калькулятор", this);
    calculator->setMinimumHeight(50);
    game = new QPushButton("Игра - стрелярка", this);
    game->setMinimumHeight(50);

    QVBoxLayout *layout = new QVBoxLayout(this); // layout сразу на this
    layout->addWidget(label1);
    layout->addWidget(game);
    layout->addWidget(calculator);
    layout->addWidget(catRadioButton);
    layout->addWidget(checkBox);
}
MenuWindow::~MenuWindow() {}
