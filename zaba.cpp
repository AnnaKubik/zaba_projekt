#include "Zaba.h"
#include "Samochod.h"
#include "Drugi_samochod.h"
#include <QGraphicsScene>
#include <QKeyEvent>

void Zaba::keyPressEvent(QKeyEvent *event)  {
    if (event->key() == Qt::Key_Left || event->key() == 'A'){
        if (pos().x() > 0)
           setPos(x()-10,y());
    }
    else if (event->key() == Qt::Key_Right || event->key() == 'D')  {
        if(pos().x() + 50 < 600)
            setPos(x()+10,y());
    }
    else if (event->key() == Qt::Key_Up  || event->key() == 'W')  {
        if(pos().y() > 0)
             setPos(x(),y()-10);
    }
    else if (event->key() == Qt::Key_Down || event->key() == 'S')  {
        if(pos().y() + 50 < 400 )
        setPos(x(),y()+10);
    }
}

void Zaba::spawn() {
        //tworzenie samochodu
    Samochod *samochod = new Samochod();
    scene()->addItem(samochod);
    Drugi_samochod *lewy = new Drugi_samochod();
    scene()->addItem(lewy);

}
