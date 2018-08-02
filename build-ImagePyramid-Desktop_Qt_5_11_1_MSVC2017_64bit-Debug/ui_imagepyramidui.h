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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImagePyramidUI
{
public:
    QAction *action;
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
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImagePyramidUI)
    {
        if (ImagePyramidUI->objectName().isEmpty())
            ImagePyramidUI->setObjectName(QStringLiteral("ImagePyramidUI"));
        ImagePyramidUI->resize(379, 378);
        action = new QAction(ImagePyramidUI);
        action->setObjectName(QStringLiteral("action"));
        centralWidget = new QWidget(ImagePyramidUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 47, 13));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        fileName = new QComboBox(centralWidget);
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
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        ImagePyramidUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ImagePyramidUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ImagePyramidUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ImagePyramidUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ImagePyramidUI->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(action);

        retranslateUi(ImagePyramidUI);

        QMetaObject::connectSlotsByName(ImagePyramidUI);
    } // setupUi

    void retranslateUi(QMainWindow *ImagePyramidUI)
    {
        ImagePyramidUI->setWindowTitle(QApplication::translate("ImagePyramidUI", "ImagePyramidUI", nullptr));
        action->setText(QApplication::translate("ImagePyramidUI", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        label->setText(QApplication::translate("ImagePyramidUI", "File:", nullptr));
        label_2->setText(QApplication::translate("ImagePyramidUI", "Layer:", nullptr));
        label_3->setText(QApplication::translate("ImagePyramidUI", "Size:", nullptr));
        sizeLabel->setText(QApplication::translate("ImagePyramidUI", "?", nullptr));
        lable_image->setText(QString());
        menuFile->setTitle(QApplication::translate("ImagePyramidUI", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImagePyramidUI: public Ui_ImagePyramidUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEPYRAMIDUI_H
