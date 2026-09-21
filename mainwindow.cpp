#include "mainwindow.h"
#include <QFormLayout>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QWidget>
#include "calcwindow.h"
#include "menuwindow.h"

#define n 40

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setWindowTitle("Авторизация в калькулятор");
    this->resize(600, 200);

    QWidget *central = new QWidget(this);
    this->setCentralWidget(central);

    login = new QLineEdit(this);
    login->setPlaceholderText("Введите логин");
    password = new QLineEdit(this);
    password->setPlaceholderText("Введите пароль");
    password->setEchoMode(QLineEdit::Password);

    logIn = new QPushButton("Авторизоваться", this);
    logIn->setMinimumHeight(50);
    QFormLayout *formLayout = new QFormLayout;
    formLayout->addRow(tr("&Login:"), login);
    formLayout->addRow(tr("&Password:"), password);

    QVBoxLayout *mainLayout = new QVBoxLayout(central);
    mainLayout->setContentsMargins(n, n, n, n);
    mainLayout->setSpacing(25);
    mainLayout->addLayout(formLayout);
    mainLayout->addWidget(logIn, 0, Qt::AlignVCenter);

    connect(logIn, &QPushButton::clicked, this, &MainWindow::logInClicked);
}

MainWindow::~MainWindow() {}

void MainWindow::logInClicked()
{
    menuWindow = new MenuWindow();
    menuWindow->show();
    hide();
}
