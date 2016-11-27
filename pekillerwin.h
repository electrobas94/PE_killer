#ifndef PEKILLERWIN_H
#define PEKILLERWIN_H

#include <QMainWindow>

namespace Ui {
class PeKillerWin;
}

class PeKillerWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit PeKillerWin(QWidget *parent = 0);
    ~PeKillerWin();

private slots:
    void on_pb_open_file_clicked();

private:
    Ui::PeKillerWin *ui;
};

#endif // PEKILLERWIN_H
