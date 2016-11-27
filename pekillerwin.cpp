#include "pekillerwin.h"
#include "ui_pekillerwin.h"
#include "QFileDialog"

PeKillerWin::PeKillerWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PeKillerWin)
{
    ui->setupUi(this);
}

PeKillerWin::~PeKillerWin()
{
    delete ui;
}

void PeKillerWin::on_pb_open_file_clicked()
{
    QFileDialog::getOpenFileName();
}
