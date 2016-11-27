#include "pekillerwin.h"
#include "ui_pekillerwin.h"

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
