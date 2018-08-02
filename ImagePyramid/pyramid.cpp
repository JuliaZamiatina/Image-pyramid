#include "pyramid.h"
#include "qmath.h"
#include <QPixmap>

Pyramid::Pyramid(QPixmap image, QObject *parent) : QObject(parent)
{
    stackOfImages.push(image);
}

void Pyramid::PushLayers(int numberOfLayers)
{
    QPixmap image = stackOfImages.at(stackOfImages.size()-1);
    for (int i = 0; i<numberOfLayers; i++)
    {
        image = image.scaled(image.width()/2,image.height()/2,Qt::IgnoreAspectRatio);
        stackOfImages.push(image);
    }
}

int Pyramid::GetMaxPyramidSize()
{
    double counter = (qLn(stackOfImages.at(0).width())/qLn(2));
    double counterHight = (qLn(stackOfImages.at(0).height())/qLn(2));
    if (counterHight<counter)
        counter = counterHight;
    counter = qFloor(counter);
    return qFloor(counter);
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
