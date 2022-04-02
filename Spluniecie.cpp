#include "Spluniecie.h"
#include "Akcja.h"
#include "Pojazd.h"
#include "Szansa.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <QObject>

extern Akcja * akcja;
Spluniecie::Spluniecie(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent)  {
    setPixmap(QPixmap(":/dodatki/zielona_plama.png"));

    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(plucie()));

        // wlaczenie timera
        timer->start(50);
}

void Spluniecie::plucie() {
    // lista obiektow uderzonych przes spluniecie
     QList<QGraphicsItem *> uderzony_samochod = collidingItems();

     for (int i = 0, n = uderzony_samochod.size(); i < n; ++i)  {
         if (typeid (*(uderzony_samochod[i])) == typeid(Lewy) || typeid (*(uderzony_samochod[i])) == typeid(Prawy))  {
            //  zwieksz ilosc szans
             akcja->szansa->zwieksz();

             scene()->removeItem(uderzony_samochod[i]);
             scene()->removeItem(this);

             delete uderzony_samochod[i];
             delete this;
             return;
         }
     }
     setPos(x(),y()-20);
         //niszczenie spluniecia gdy wyjdzie poza scene
         if (pos().y() < 0){
             scene()->removeItem(this);
             delete this;
         }
}
