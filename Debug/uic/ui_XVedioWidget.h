/********************************************************************************
** Form generated from reading UI file 'XVedioWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XVEDIOWIDGET_H
#define UI_XVEDIOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XVedioWidgetClass
{
public:

    void setupUi(QWidget *XVedioWidgetClass)
    {
        if (XVedioWidgetClass->objectName().isEmpty())
            XVedioWidgetClass->setObjectName(QStringLiteral("XVedioWidgetClass"));
        XVedioWidgetClass->resize(600, 400);

        retranslateUi(XVedioWidgetClass);

        QMetaObject::connectSlotsByName(XVedioWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *XVedioWidgetClass)
    {
        XVedioWidgetClass->setWindowTitle(QApplication::translate("XVedioWidgetClass", "XVedioWidget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class XVedioWidgetClass: public Ui_XVedioWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XVEDIOWIDGET_H
