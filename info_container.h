#ifndef INFO_CONTAINER_H
#define INFO_CONTAINER_H

#include "pe_item.h"
#include <QString>
#include <QVector>


class info_container
{
    QVector<pe_item> items;

public:
    info_container();
    bool openStructFile(QString fname);
};

#endif // INFO_CONTAINER_H
