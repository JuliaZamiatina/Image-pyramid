#include "pyramid.h"
#include "qmath.h"
#include <QPixmap>

Pyramid::Pyramid(QPixmap image, QObject *parent) : QObject(parent)
{
    stackOfImages.push(image);

    double counter = (qLn(image.width())/qLn(2));
    double counterHight = (qLn(image.height())/qLn(2));
    if (counterHight<counter)
        counter = counterHight;
    counter = qFloor(counter);

    for (int i = 0; i<counter; i++)
    {
        image = image.scaled(image.width()/2,image.height()/2,Qt::IgnoreAspectRatio);
        stackOfImages.push(image);
    }
}

QPixmap Pyramid::ShowLayer(int layer)
{
    QPixmap mainImg =  stackOfImages.at(0);
    QPixmap returnImg = stackOfImages.at(layer);
    returnImg = returnImg.scaled(mainImg.width(),mainImg.height(),Qt::KeepAspectRatioByExpanding,Qt::SmoothTransformation);
    return returnImg;
}
int Pyramid::GetLayerWidht(int layer)
{
    return stackOfImages.at(layer).width();
}

int Pyramid::GetLayerHeight(int layer)
{
    return stackOfImages.at(layer).height();
}

int Pyramid::GetPyramidSize()
{
    return stackOfImages.size()-1;
}
