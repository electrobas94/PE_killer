#ifndef PE_ITEM_H
#define PE_ITEM_H
#include <QString>

class pe_item
{
public:
    int level;
    QString name;
    QString size;
    QString type;
    QString offset;
    pe_item();
};

#endif // PE_ITEM_H
