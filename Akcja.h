#ifndef AKCJA_H
#define AKCJA_H

#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include "Zaba.h"
#include "Szansa.h"
#include <QGraphicsItem>
#include <QObject>
#include "Pojazd.h"
#include "Prawy.h"
#include "Lewy.h"
// Klasa sterujaca "serce" programu
class Akcja : public QGraphicsView {
    Q_OBJECT

public:
    Akcja(QWidget *parent = 0);
    QGraphicsScene *scene;
    Zaba *uzytkownik;
    Szansa *szansa;
};

#endif // AKCJA_H
