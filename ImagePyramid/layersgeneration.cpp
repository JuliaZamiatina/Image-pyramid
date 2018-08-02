#include "layersgeneration.h"
#include "imagepyramidui.h"
#include "ui_layersgeneration.h"

LayersGeneration::LayersGeneration(int maxLayers, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LayersGeneration)
{
    ui->setupUi(this);
    ui->LayersNumber->setMaximum(maxLayers);
}

LayersGeneration::~LayersGeneration()
{
    delete ui;
}

void LayersGeneration::on_buttonBox_rejected()
{
    this->close();
}

void LayersGeneration::on_buttonBox_accepted()
{
    ImagePyramidUI *mdiparent = qobject_cast<ImagePyramidUI*>(this->parentWidget());
    mdiparent->AddLayers(ui->LayersNumber->value());
}
