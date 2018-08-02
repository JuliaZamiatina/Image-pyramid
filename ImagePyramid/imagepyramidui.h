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

private slots:

    void on_layerNumb_currentIndexChanged(int index);

    void on_action_triggered();

    void on_fileName_currentIndexChanged(int index);

private:
    Ui::ImagePyramidUI *ui;    
    void addPictureOnForm(QPixmap);

    Pyramid *pictureP;
    QList<QPixmap> *openedPixMaps = new QList<QPixmap>;
    bool diagIsBigger(QPixmap, QPixmap);
};

#endif // IMAGEPYRAMIDUI_H
