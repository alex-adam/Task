#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringList>
#include <QDir>
#include <filemodel.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),model_(new FileModel(this)),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listView->setModel(model_);
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_pushButton_clicked()
{

    QStringList fileNames;
    QDir dir("/Users/adaalex/Pictures/");
    dir.setFilter(QDir::Files | QDir::NoSymLinks);

    fileNames = dir.entryList();


    model_->set_data(fileNames);
}
