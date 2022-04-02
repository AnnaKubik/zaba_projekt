#ifndef SPLUNIECIE_H
#define SPLUNIECIE_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <QGraphicsItem>
//klasa odpowiedzialna za metode "plucie" wraz jej nastepstwami
class Spluniecie : public QObject, public QGraphicsPixmapItem  {
    Q_OBJECT
public:
    Spluniecie(QGraphicsItem * parent=0);
public slots:
    void plucie();
};
#endif // SPLUNIECIE_H
