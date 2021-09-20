#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSound>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::on_SendButton_released()
{

    ui->Chat->append(ui->NickName->text() + ">>" + ui->InputText->toPlainText());
    ui->InputText->clear();
}


void MainWindow::on_BillyAssistant_clicked()
{

}

