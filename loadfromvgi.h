#ifndef LOADFROMVGI_H
#define LOADFROMVGI_H

#include <QObject>
#include <QGraphicsScene>

class loadFromvgi : public QObject
{
public:
    loadFromvgi(QString filename, QGraphicsScene *scene,bool sel = 0);
};

#endif // LOADFROMVGI_H
