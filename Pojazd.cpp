#include "Pojazd.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
#include "Zaba.h"
#include "Akcja.h"
extern Akcja * akcja;
Pojazd::Pojazd() : QObject(), QGraphicsPixmapItem()  {
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), this, SLOT(ruch()));

    timer->start(20);

}
void Pojazd::po_uderzeniu() {
    QList<QGraphicsItem *> Zaba_po_zderzeniu = collidingItems();

    // jezeli samochod zderzy sie z zaba zniszcz oba
    for (int i = 0, n = Zaba_po_zderzeniu.size(); i < n; ++i)  {
        if (typeid(*(Zaba_po_zderzeniu[i])) == typeid(Zaba))  {
            //zmniejsz zycie
            akcja->szansa->zmniejsz();
            // usun ze scey(pozostaje na stercie
            scene()->removeItem(Zaba_po_zderzeniu[i]);

            Zaba_po_zderzeniu[i]->setPos(300,300);
            //ponowne dodanie zaby na start
            scene()->addItem(Zaba_po_zderzeniu[i]);

            Zaba_po_zderzeniu[i]->setFlag(QGraphicsItem::ItemIsFocusable);
            Zaba_po_zderzeniu[i]->setFocus();

            return;
        }
    }
}
