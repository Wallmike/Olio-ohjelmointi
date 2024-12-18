#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , counter(0)
{
    ui->setupUi(this);

    connect(ui->btnCount, &QPushButton::clicked, this, &MainWindow::onCountButtonClicked);
    connect(ui->btnReset, &QPushButton::clicked, this, &MainWindow::onResetButtonClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onCountButtonClicked()
{
    counter++;
    ui->txtResult->setText(QString::number(counter));
    ui->label->setText("Painiketta Count painettu " + QString::number(counter) + " kertaa");
}

void MainWindow::onResetButtonClicked()
{
    counter = 0;
    ui->txtResult->setText(QString::number(counter));
    ui->label->setText("Painiketta Count painettu 0 kertaa");
}
