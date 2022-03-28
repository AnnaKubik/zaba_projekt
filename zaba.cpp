#include "Zaba.h"
#include "Pojazd.h"
#include "Lewy.h"
#include "Prawy.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QGraphicsView>



Zaba::Zaba (QGraphicsItem *parent): QGraphicsPixmapItem(parent) {

}
void Zaba::keyPressEvent(QKeyEvent *event)  {
    if (event->key() == Qt::Key_Left || event->key() == 'A'){
        if (pos().x() > 0)
           setPos(x()-15,y());
    }
    else if (event->key() == Qt::Key_Right || event->key() == 'D')  {
        if(pos().x() + 50 < 600)
            setPos(x()+15,y());
    }
    else if (event->key() == Qt::Key_Up  || event->key() == 'W')  {
        if(pos().y() > 0)
             setPos(x(),y()-15);
//        else if (pos().y() < 0) {
//            setBackgroundBrush(QBrush(QImage(":/dodatki/wygrana.png")));
//        }
    }
    else if (event->key() == Qt::Key_Down || event->key() == 'S')  {
        if(pos().y() + 50 < 400 )
        setPos(x(),y()+15);
    }
//    if (pos().y() < 0)  {
//        setBackgroundBrush(QBrush(QImage(":/dodatki/wygrana.png")));
//        delete this;
//    }

}

void Zaba::spawn() {
        //tworzenie samochodu
    Prawy *prawy = new Prawy();
    scene()->addItem(prawy);
    Lewy *lewy = new Lewy();
    scene()->addItem(lewy);

}
