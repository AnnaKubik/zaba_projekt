#include <QApplication>
#include "Zaba.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include "Akcja.h"
#include <QImage>


Akcja::Akcja(QWidget *parent)  {
    // tworzenie sceny
     QGraphicsScene * scene = new QGraphicsScene();
     //ust wielkosc sceny
     scene->setSceneRect(0,0,600,400);
     //dodawanie tla
     setBackgroundBrush(QBrush(QImage(":/dodatki/tlo.png")));

     setScene(scene);
    //tworzenie przedmiotu w scenie - poznieij bedzie to zaba
    Zaba * uzytkownik = new Zaba();
    //ustawianie wielkosci kwadratu - pozniej zaby
    // pierwsze dwa -lolalizacja lewego gornego rogu x,y, kolejne dwa szerokosc i wysokosc
    uzytkownik->setPixmap(QPixmap(":/dodatki/zaba.png"));;
    //dodawanie przedmiotu do sceny
    scene->addItem(uzytkownik);
    //dod widoku zbey zobaczyc nasza scene
    QGraphicsView * view = new QGraphicsView(scene);

    uzytkownik->setPos(300,300);
    // skupienie na obiekcie- zaba
    uzytkownik->setFlag(QGraphicsItem::ItemIsFocusable);
    uzytkownik->setFocus();

    //ustawiam wielkosc widoku
    view->setFixedSize(600,400);


    // dodawania zycia do sceny
    szansa = new Szansa();
    scene->addItem(szansa);

    // widget wizualizujacy scene (oraz jej zawartość)
//   view->show();



    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),uzytkownik,SLOT(spawn()));
    timer->start(3000 );


    show();
}
