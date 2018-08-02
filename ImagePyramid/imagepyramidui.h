#ifndef IMAGEPYRAMIDUI_H
#define IMAGEPYRAMIDUI_H

#include <QMainWindow>
#include "pyramid.h"

namespace Ui {
class ImagePyramidUI;
}

class ImagePyramidUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit ImagePyramidUI(QWidget *parent = nullptr);
    ~ImagePyramidUI();    
    void AddLayers(int);

private slots:

    void on_layerNumb_currentIndexChanged(int index);

    void on_action_triggered();

    void on_fileName_currentIndexChanged(int index);

    void on_action_3_triggered();

    void on_doubleSpinBox_valueChanged(const QString &arg1);

    void on_pushButton_clicked();

private:
    Ui::ImagePyramidUI *ui;    
    void addPictureOnForm(QPixmap);

    Pyramid *pictureP;
    QList<QPixmap> *openedPixMaps = new QList<QPixmap>;
    bool diagIsBigger(QPixmap, QPixmap);
};

#endif // IMAGEPYRAMIDUI_H
