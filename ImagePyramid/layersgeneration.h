#ifndef LAYERSGENERATION_H
#define LAYERSGENERATION_H

#include <QDialog>

namespace Ui {
class LayersGeneration;
}

class LayersGeneration : public QDialog
{
    Q_OBJECT

public:
    explicit LayersGeneration(int maxLayers, QWidget *parent = nullptr);
    ~LayersGeneration();

private slots:
    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

private:
    Ui::LayersGeneration *ui;
};

#endif // LAYERSGENERATION_H
