#include "mainwindow.h"
#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsScene>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene scene;
    int i,j;
    for (i=0;i<8;i++){
        for (j=0;j<8;j++){
    scene.addRect(QRectF(i*70,j*70,70,70));
        }
    }



    QGraphicsView view(&scene);

    view.show();


    return a.exec();
}
