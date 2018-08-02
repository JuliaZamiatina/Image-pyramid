#include "imagepyramidui.h"
#include "ui_imagepyramidui.h"

#include "pyramid.h"
#include "qmath.h"

#include <QStack>
#include <QPixmap>
#include <QImage>
#include <QScrollArea>
#include <QTextStream>
#include <QFileDialog>

#define PATH ":/res/img/"

ImagePyramidUI::ImagePyramidUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ImagePyramidUI)
{
    ui->setupUi(this);
}

ImagePyramidUI::~ImagePyramidUI()
{
    delete ui;
}

void ImagePyramidUI::on_layerNumb_currentIndexChanged(int index)
{
    if (index == -1)
        index = 0;
    QPixmap currentImage = pictureP->ShowLayer(index);
    ui->lable_image->setPixmap(currentImage);
    ui->image->setWidget(ui->lable_image);

    QString q;
    QTextStream(&q) << pictureP->GetLayerWidht(index) << " : " << pictureP->GetLayerHeight(index);
    ui->sizeLabel->setText(q);
}

void ImagePyramidUI::on_action_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Открыть изображение", "", "Файлы изображений (*.png *.jpg)");

    QPixmap image(fileName);
    if (openedPixMaps->size() == 0)
    {
        openedPixMaps->append(image);
        ui->fileName->addItem(fileName.right(fileName.length() - fileName.lastIndexOf("/")-1));
    }
    else
    {
        for (int i = 0 ;i<openedPixMaps->size();i++)
        {
            if(diagIsBigger(openedPixMaps->at(i),image))
            {
                openedPixMaps->insert(i,image);
                ui->fileName->insertItem(i,fileName.right(fileName.length() - fileName.lastIndexOf("/")-1));
                ui->fileName->setCurrentIndex(i);
                break;
            }

            if (i == openedPixMaps->size()-1)
            {
                openedPixMaps->append(image);
                ui->fileName->addItem(fileName.right(fileName.length() - fileName.lastIndexOf("/")-1));
                ui->fileName->setCurrentIndex(i+1);
                break;
            }
        }
    }

    if (!fileName.isNull())
    {
        addPictureOnForm(image);
    }
}
bool ImagePyramidUI::diagIsBigger(QPixmap first, QPixmap second)
{
    double firstDiag = qSqrt(first.width()*first.width()+first.height()*first.height());
    double secondDiag = qSqrt(second.width()*second.width()+second.height()*second.height());
    if (firstDiag>secondDiag)
        return true;
    else
        return false;
}

void ImagePyramidUI::on_fileName_currentIndexChanged(int index)
{
    addPictureOnForm(QPixmap(openedPixMaps->at(index)));
}

void ImagePyramidUI::addPictureOnForm(QPixmap mainImage)
{
    pictureP = new Pyramid(mainImage);

    QLabel *image = new QLabel;
    image->resize(mainImage.width(),mainImage.height());
    image->setPixmap(mainImage);

    ui->lable_image = image;
    ui->image->setWidget(ui->lable_image);

    QString q;
    QTextStream(&q) << mainImage.width() << " : " << mainImage.height();
    ui->sizeLabel->setText(q);

    ui->layerNumb->clear();
    ui->layerNumb->setCurrentIndex(0);


    for (int i = 0; i<pictureP->GetPyramidSize();i++)
    {
        ui->layerNumb->addItem(QString::number(i));
    }
}
