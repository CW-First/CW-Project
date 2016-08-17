#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->textEdit->append("welcome github!");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btn_show_clicked()
{
    if (ui->lineEdit->text() != "")
    {
        int num = ui->lineEdit->text().toInt();

        if (0 == num % 3 && 0 == num % 5)
        {
            ui->textEdit->append("fizzbuzz");
            return;
        }

        if (0 == num % 3)
        {
            ui->textEdit->append("fizz");
            return;
        }

        if (0 == num % 5)
        {
            ui->textEdit->append("buzz");
            return;
        }

        if (0 == num % 7)
        {
            ui->textEdit->append("GitHub");
            return;
        }
    }
}
