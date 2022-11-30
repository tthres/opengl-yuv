/********************************************************************************
** Form generated from reading UI file 'TestQTOpengl.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTQTOPENGL_H
#define UI_TESTQTOPENGL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "XVedioWidget.h"

QT_BEGIN_NAMESPACE

class Ui_TestQTOpenglClass
{
public:
    XVedioWidget *openGLWidget;

    void setupUi(QWidget *TestQTOpenglClass)
    {
        if (TestQTOpenglClass->objectName().isEmpty())
            TestQTOpenglClass->setObjectName(QStringLiteral("TestQTOpenglClass"));
        TestQTOpenglClass->resize(968, 754);
        openGLWidget = new XVedioWidget(TestQTOpenglClass);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setGeometry(QRect(140, 100, 800, 600));

        retranslateUi(TestQTOpenglClass);

        QMetaObject::connectSlotsByName(TestQTOpenglClass);
    } // setupUi

    void retranslateUi(QWidget *TestQTOpenglClass)
    {
        TestQTOpenglClass->setWindowTitle(QApplication::translate("TestQTOpenglClass", "TestQTOpengl", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TestQTOpenglClass: public Ui_TestQTOpenglClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTQTOPENGL_H
