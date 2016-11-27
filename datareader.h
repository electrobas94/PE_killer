#ifndef DATAREADER_H
#define DATAREADER_H

#include <QFile>
#include <QDebug>

class DataReader
{
private:
    QFile file;
    int size;
    uchar *data;
public:
    bool OpenFile(QString fname);
    DataReader();
};

#endif // DATAREADER_H
