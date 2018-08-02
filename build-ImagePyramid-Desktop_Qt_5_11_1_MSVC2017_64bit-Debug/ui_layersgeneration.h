/********************************************************************************
** Form generated from reading UI file 'layersgeneration.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAYERSGENERATION_H
#define UI_LAYERSGENERATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_LayersGeneration
{
public:
    QDialogButtonBox *buttonBox;
    QSpinBox *LayersNumber;
    QLabel *label;

    void setupUi(QDialog *LayersGeneration)
    {
        if (LayersGeneration->objectName().isEmpty())
            LayersGeneration->setObjectName(QStringLiteral("LayersGeneration"));
        LayersGeneration->resize(288, 179);
        buttonBox = new QDialogButtonBox(LayersGeneration);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(-60, 140, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        LayersNumber = new QSpinBox(LayersGeneration);
        LayersNumber->setObjectName(QStringLiteral("LayersNumber"));
        LayersNumber->setGeometry(QRect(120, 110, 42, 22));
        LayersNumber->setMinimum(1);
        label = new QLabel(LayersGeneration);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, -10, 251, 121));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(LayersGeneration);
        QObject::connect(buttonBox, SIGNAL(accepted()), LayersGeneration, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LayersGeneration, SLOT(reject()));

        QMetaObject::connectSlotsByName(LayersGeneration);
    } // setupUi

    void retranslateUi(QDialog *LayersGeneration)
    {
        LayersGeneration->setWindowTitle(QApplication::translate("LayersGeneration", "Dialog", nullptr));
        label->setText(QApplication::translate("LayersGeneration", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\320\273\320\276\320\265\320\262,\n"
"\320\272\320\276\321\202\320\276\321\200\320\276\320\265 \321\205\320\276\321\202\320\270\321\202\320\265\n"
"\321\201\320\263\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LayersGeneration: public Ui_LayersGeneration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAYERSGENERATION_H
