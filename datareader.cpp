#include "datareader.h"

DataReader::DataReader()
{

}

bool DataReader::OpenFile(QString fname)
{
    file.setFileName(fname);
    file.open(QFile::ReadOnly);

    size = file.size();

    data = file.map(0, size);

    if ( data )
    {
        qDebug()<< "File " + fname + "is opened";
        return true;
    }
    else
        return false;
}
//file.unmap();
