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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImagePyramidUI
{
public:
    QAction *action;
    QAction *action_3;
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
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImagePyramidUI)
    {
        if (ImagePyramidUI->objectName().isEmpty())
            ImagePyramidUI->setObjectName(QStringLiteral("ImagePyramidUI"));
        ImagePyramidUI->setEnabled(true);
        ImagePyramidUI->resize(523, 422);
        action = new QAction(ImagePyramidUI);
        action->setObjectName(QStringLiteral("action"));
        action_3 = new QAction(ImagePyramidUI);
        action_3->setObjectName(QStringLiteral("action_3"));
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
        image->setGeometry(QRect(10, 40, 501, 281));
        image->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 499, 279));
        lable_image = new QLabel(scrollAreaWidgetContents);
        lable_image->setObjectName(QStringLiteral("lable_image"));
        lable_image->setGeometry(QRect(120, 100, 47, 13));
        image->setWidget(scrollAreaWidgetContents);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(380, 8, 101, 20));
        label_4->setFont(font);
        doubleSpinBox = new QDoubleSpinBox(centralWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(480, 8, 41, 22));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMinimum(1.1);
        doubleSpinBox->setMaximum(3);
        doubleSpinBox->setSingleStep(0.1);
        doubleSpinBox->setValue(2);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 330, 111, 23));
        ImagePyramidUI->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImagePyramidUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 523, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        ImagePyramidUI->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ImagePyramidUI);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ImagePyramidUI->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ImagePyramidUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setEnabled(false);
        ImagePyramidUI->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(action);
        menuFile->addSeparator();
        menuFile->addAction(action_3);

        retranslateUi(ImagePyramidUI);

        QMetaObject::connectSlotsByName(ImagePyramidUI);
    } // setupUi

    void retranslateUi(QMainWindow *ImagePyramidUI)
    {
        ImagePyramidUI->setWindowTitle(QApplication::translate("ImagePyramidUI", "ImagePyramidUI", nullptr));
        action->setText(QApplication::translate("ImagePyramidUI", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        action_3->setText(QApplication::translate("ImagePyramidUI", "\320\223\320\265\320\275\320\265\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\201\320\273\320\276\320\270", nullptr));
        label->setText(QApplication::translate("ImagePyramidUI", "File:", nullptr));
        label_2->setText(QApplication::translate("ImagePyramidUI", "Layer:", nullptr));
        label_3->setText(QApplication::translate("ImagePyramidUI", "Size:", nullptr));
        sizeLabel->setText(QApplication::translate("ImagePyramidUI", "?", nullptr));
        lable_image->setText(QString());
        label_4->setText(QApplication::translate("ImagePyramidUI", "Layer coefficient:", nullptr));
        pushButton->setText(QApplication::translate("ImagePyramidUI", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\277\320\270\321\200\320\260\320\274\320\270\320\264\321\203", nullptr));
        menuFile->setTitle(QApplication::translate("ImagePyramidUI", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImagePyramidUI: public Ui_ImagePyramidUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEPYRAMIDUI_H
