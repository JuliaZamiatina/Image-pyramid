/********************************************************************************
** Form generated from reading UI file 'imagepyramidui.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEPYRAMIDUI_H
#define UI_IMAGEPYRAMIDUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImagePyramidUI
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QComboBox *fileName;
    QComboBox *layerNumb;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *sizeLabel;
    QScrollArea *image;
    QWidget *scrollAreaWidgetContents;
    QLabel *lable_image;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImagePyramidUI)
    {
        if (ImagePyramidUI->objectName().isEmpty())
            ImagePyramidUI->setObjectName(QStringLiteral("ImagePyramidUI"));
        ImagePyramidUI->resize(379, 378);
        centralWidget = new QWidget(ImagePyramidUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 47, 13));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        fileName = new QComboBox(centralWidget);
        fileName->addItem(QString());
        fileName->addItem(QString());
        fileName->addItem(QString());
        fileName->addItem(QString());
        fileName->addItem(QString());
        fileName->setObjectName(QStringLiteral("fileName"));
        fileName->setGeometry(QRect(40, 8, 111, 22));
        layerNumb = new QComboBox(centralWidget);
        layerNumb->setObjectName(QStringLiteral("layerNumb"));
        layerNumb->setGeometry(QRect(194, 8, 69, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(152, 10, 36, 16));
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 10, 29, 16));
        label_3->setFont(font);
        sizeLabel = new QLabel(centralWidget);
        sizeLabel->setObjectName(QStringLiteral("sizeLabel"));
        sizeLabel->setGeometry(QRect(300, 10, 71, 16));
        sizeLabel->setFont(font);
        image = new QScrollArea(centralWidget);
        image->setObjectName(QStringLiteral("image"));
        image->setGeometry(QRect(50, 50, 291, 251));
        image->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 289, 249));
        lable_image = new QLabel(scrollAreaWidgetContents);
        lable_image->setObjectName(QStringLiteral("lable_image"));
        lable_image->setGeometry(QRect(120, 100, 47, 13));
        image->setWidget(scrollAreaWidgetContents);
        ImagePyramidUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImagePyramidUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 379, 21));
        ImagePyramidUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ImagePyramidUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ImagePyramidUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ImagePyramidUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ImagePyramidUI->setStatusBar(statusBar);

        retranslateUi(ImagePyramidUI);

        QMetaObject::connectSlotsByName(ImagePyramidUI);
    } // setupUi

    void retranslateUi(QMainWindow *ImagePyramidUI)
    {
        ImagePyramidUI->setWindowTitle(QApplication::translate("ImagePyramidUI", "ImagePyramidUI", nullptr));
        label->setText(QApplication::translate("ImagePyramidUI", "File:", nullptr));
        fileName->setItemText(0, QApplication::translate("ImagePyramidUI", "\320\276\320\261\320\276\320\270Horizon.png", nullptr));
        fileName->setItemText(1, QApplication::translate("ImagePyramidUI", "\320\276\320\261\320\276\320\270\320\242\321\200\320\270\320\272\321\203.jpg", nullptr));
        fileName->setItemText(2, QApplication::translate("ImagePyramidUI", "\320\276\320\261\320\276\320\270\320\227\320\265\320\273\321\214\320\264\320\260.jpg", nullptr));
        fileName->setItemText(3, QApplication::translate("ImagePyramidUI", "\320\276\320\261\320\276\320\270RE7.jpg", nullptr));
        fileName->setItemText(4, QApplication::translate("ImagePyramidUI", "\320\276\320\261\320\276\320\270TheRoom.jpg", nullptr));

        label_2->setText(QApplication::translate("ImagePyramidUI", "Layer:", nullptr));
        label_3->setText(QApplication::translate("ImagePyramidUI", "Size:", nullptr));
        sizeLabel->setText(QApplication::translate("ImagePyramidUI", "?", nullptr));
        lable_image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ImagePyramidUI: public Ui_ImagePyramidUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEPYRAMIDUI_H
