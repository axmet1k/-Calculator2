#include "calcwindow.h"
#include <QHBoxLayout>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QWidget>

#define HEIGHT 60

#define n 20

CalcWindow::CalcWindow(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("Calculator");
    this->resize(550, 200);
    //QWidget *central = new QWidget(this);
    //this->setCentralWidget(central);

    input1 = new QLineEdit(this);
    input1->setPlaceholderText("Enter first addend");

    input2 = new QLineEdit(this);
    input2->setPlaceholderText("Enter second addend");

    equalsButton = new QPushButton("=", this);

    resultLabel = new QLabel("Result will be here", this);
    resultLabel->setAlignment(Qt::AlignCenter);

    input1->setFixedHeight(HEIGHT);
    input2->setFixedHeight(HEIGHT);
    equalsButton->setFixedSize(HEIGHT * 2, HEIGHT);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    QHBoxLayout *inputLayout = new QHBoxLayout();
    mainLayout->setContentsMargins(n, n, n, n);
    mainLayout->setSpacing(15);

    inputLayout->addWidget(input1);
    inputLayout->addWidget(new QLabel("+", this));
    inputLayout->addWidget(input2);
    inputLayout->addWidget(equalsButton);

    mainLayout->addLayout(inputLayout);
    mainLayout->addWidget(resultLabel);

    //
    connect(equalsButton, &QPushButton::clicked, this, &CalcWindow ::onEqualsClicked);
}
CalcWindow::~CalcWindow() {}

void CalcWindow::onEqualsClicked()
{
    if (input1->text().isEmpty() || input2->text().isEmpty()) {
        QMessageBox::warning(this, "Error!", "Fill in both fields");
        return;
    }

    bool ok1, ok2;
    double num1 = input1->text().toDouble(&ok1);
    double num2 = input2->text().toDouble(&ok2);

    if (!ok1 || !ok2) {
        QMessageBox::warning(this, "Error", "Enter valid numbers");
        return;
    }

    double sum = num1 + num2;
    resultLabel->setText("Result: " + QString::number(sum));
}
