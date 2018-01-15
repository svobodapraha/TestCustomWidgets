#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_pushButton_clicked()
{
  ui->myLED->setDiameter(5);
  ui->myLED->setState(false);
}

void MainWindow::on_pushButton_2_clicked()
{
  ui->myLED->setDiameter(3);
  ui->myLED->setState(true);
  ui->myLED->setFlashRate(500);
  ui->myLED->setFlashing(true);
  ui->myLED_4->setFlashRate(2000);
  ui->myLED_4->setFlashing(true);
}
