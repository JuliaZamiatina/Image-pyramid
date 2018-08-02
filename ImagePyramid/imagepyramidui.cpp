#include "imagepyramidui.h"
#include "ui_imagepyramidui.h"
#include "layersgeneration.h"

#include "pyramid.h"
#include "qmath.h"

#include <QStack>
#include <QPixmap>
#include <QImage>
#include <QScrollArea>
#include <QTextStream>
#include <QFileDialog>
#include <QMessageBox>

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
    ui->layerNumb->addItem(QString::number(0));
}
void ImagePyramidUI::AddLayers(int number)
{
    pictureP->PushLayers(number, ui->doubleSpinBox->value());
    for (int i = ui->layerNumb->count(); i<=pictureP->GetPyramidSize();i++)
    {
        ui->layerNumb->addItem(QString::number(i));
    }
}

void ImagePyramidUI::on_action_3_triggered()
{
    if (ui->fileName->count()==0)
        return;
    LayersGeneration *window = new LayersGeneration(pictureP->GetMaxPyramidSize(ui->doubleSpinBox->value())-pictureP->GetPyramidSize(),this);
    window->setModal(true);
    window->exec();
}

void ImagePyramidUI::on_doubleSpinBox_valueChanged(const QString &arg1)
{
    if (ui->fileName->count()==0)
        return;
    if ((pictureP->GetPyramidSize()>0)&&(ui->doubleSpinBox->value()!=pictureP->coef))
    {
        QMessageBox messageBox;
        messageBox.critical(nullptr,"Ошибка","Невозможно изменить коэфициент при добавлении слоев!");
        ui->doubleSpinBox->setValue(pictureP->coef);
    }
}

void ImagePyramidUI::on_pushButton_clicked()
{
    if (ui->fileName->count()==0)
        return;
    pictureP = new Pyramid(pictureP->ShowLayer(0));
    ui->layerNumb->clear();
    ui->layerNumb->setCurrentIndex(0);
    ui->layerNumb->addItem(QString::number(0));
    QMessageBox messageBox;
    messageBox.information(nullptr,"Готово","Пирамида очищена!");
}
