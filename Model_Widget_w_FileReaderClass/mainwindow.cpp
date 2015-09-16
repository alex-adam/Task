#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <filereader.h>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    filereader_ = new FileReader();

    ui->listView->setModel(filereader_->model_);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_clicked()
{
    filereader_->fill_model("/Users/adaalex/Pictures/");
}
