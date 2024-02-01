#ifndef SCENECONTROLLER_H
#define SCENECONTROLLER_H

#include <QString>
#include "../start/start.h"
enum sence{start};
class scenecontroller
{
public:
    scenecontroller();
    void setSence(sence target);
    QString getSence();
public:
};

#endif // SCENECONTROLLER_H
