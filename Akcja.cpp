#include <QApplication>
#include "Zaba.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include "Akcja.h"
#include "Pojazd.h"
#include <QImage>
#include "Prawy.h"
#include "Lewy.h"
#include <QObject>
#include <stdlib.h>

void Zaba::spawn(){
     //tworzenie i dodawanie samochodow na scene
     Prawy *prawy = new Prawy();
     scene()->addItem(prawy);
     Lewy *lewy = new Lewy();
     scene()->addItem(lewy);
}
Akcja::Akcja(QWidget *parent)  {
    // tworzenie sceny
     QGraphicsScene * scene = new QGraphicsScene();
     //ust wielkosc sceny
     scene->setSceneRect(0,0,600,400);
     //dodawanie tla
     setBackgroundBrush(QBrush(QImage(":/dodatki/tlo.png")));
     // tworzenie sceny
     setScene(scene);

     //dod widoku zbey zobaczyc nasza scene
     QGraphicsView * view = new QGraphicsView(scene);
    //ustawiam wielkosc widoku
     view->setFixedSize(600,400);
    //tworzenie i dodanie zaby do sceny
    show();
     Zaba * uzytkownik = new Zaba();
    //dodawanie przedmiotu do sceny
    scene->addItem(uzytkownik);

    // dodawanie zycia do sceny
    szansa = new Szansa();
    scene->addItem(szansa);

    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),uzytkownik,SLOT(spawn()));
    timer->start(2000);


}


