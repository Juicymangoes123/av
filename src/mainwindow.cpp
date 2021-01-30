#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // ui->gridLayout->addWidget(new QLabel("hello world"), 10, 5);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.setBrush(Qt::red`);

    QPen pen;
    pen.setColor(Qt::green);
    pen.setWidth(5);

    painter.setPen(pen);
    painter.drawRect(QRect(80, 120, 200, 100));
}
