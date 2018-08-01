#include "imagepyramidui.h"
#include "ui_imagepyramidui.h"
#include <QPixmap>
#include <QImage>
#include <QScrollArea>
#define PATH ":/res/img/"

ImagePyramidUI::ImagePyramidUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ImagePyramidUI)
{
    ui->setupUi(this);

    QString imagePath(PATH);
    imagePath += ui->fileName->currentText();
    QPixmap mainImage(imagePath);

    QLabel *imageLabel = new QLabel();
    imageLabel->resize(mainImage.width(),mainImage.height());
    imageLabel->setPixmap(mainImage);

    ui->lable_image = imageLabel;

    ui->image->setWidget(ui->lable_image);
    ui->image->setWidgetResizable(false);
}

ImagePyramidUI::~ImagePyramidUI()
{
    delete ui;
}

void ImagePyramidUI::on_fileName_currentTextChanged(const QString &arg1)
{
    QString imagePath(PATH);
    imagePath += ui->fileName->currentText();
    QPixmap mainImage(imagePath);

    ui->lable_image->resize(mainImage.width(),mainImage.height());
    ui->lable_image->setPixmap(mainImage);

    ui->image->setWidget(ui->lable_image);
}
