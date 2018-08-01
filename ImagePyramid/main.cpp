#include "imagepyramidui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImagePyramidUI w;
    w.show();

    return a.exec();
}
