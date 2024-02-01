#include "mainwidget.h"
#include "./src/scene/sceneController/scenecontroller.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWidget w;
    //w.show();
    scenecontroller* i = new scenecontroller;
    return a.exec();
}
