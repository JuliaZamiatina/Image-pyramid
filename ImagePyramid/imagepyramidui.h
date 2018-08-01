#ifndef IMAGEPYRAMIDUI_H
#define IMAGEPYRAMIDUI_H

#include <QMainWindow>

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
    void on_fileName_currentTextChanged(const QString &arg1);

    void on_layerNumb_currentIndexChanged(int index);

private:
    Ui::ImagePyramidUI *ui;
};

#endif // IMAGEPYRAMIDUI_H
