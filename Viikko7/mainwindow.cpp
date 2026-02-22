#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_N1_clicked()
{
    numberClickHandler("1");
}


void MainWindow::on_N2_clicked()
{
    numberClickHandler("2");
}


void MainWindow::on_N3_clicked()
{
    numberClickHandler("3");
}


void MainWindow::on_N4_clicked()
{
    numberClickHandler("4");
}


void MainWindow::on_N5_clicked()
{
    numberClickHandler("5");
}


void MainWindow::on_N6_clicked()
{
    numberClickHandler("6");
}


void MainWindow::on_N7_clicked()
{
    numberClickHandler("7");
}


void MainWindow::on_N8_clicked()
{
    numberClickHandler("8");
}


void MainWindow::on_N9_clicked()
{
    numberClickHandler("9");
}


void MainWindow::on_N0_clicked()
{
    numberClickHandler("0");
}

void MainWindow::numberClickHandler(const QString &num)
{
    if(state == 1){
        number1 += num;
        ui->num1->setText(number1);
    } else {
        number2 += num;
        ui->num2->setText(number2);
    }
}

void MainWindow::on_add_clicked()
{
    operand = 0; state = 2;
}


void MainWindow::on_sub_clicked()
{
    operand = 1; state = 2;
}


void MainWindow::on_mul_clicked()
{
    operand = 2; state = 2;
}


void MainWindow::on_div_clicked()
{
    operand = 3; state = 2;
}


void MainWindow::on_enter_clicked()
{
    float n1 = number1.toFloat();
    float n2 = number2.toFloat();
    float res = 0.0f;

    if (operand == 0) res = n1 + n2;
    else if (operand == 1) res = n1 - n2;
    else if (operand == 2) res = n1 * n2;
    else if (operand == 3) res = n1 / n2;

    ui->result->setText(QString::number(res));
}


void MainWindow::on_clear_clicked()
{
    number1 = "";
    number2 = "";
    state = 1;
    operand = 0;

    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();

}

