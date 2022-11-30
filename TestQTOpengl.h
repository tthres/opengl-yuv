#pragma once

#include <QtWidgets/QWidget>
#include "ui_TestQTOpengl.h"

class TestQTOpengl : public QWidget
{
    Q_OBJECT

public:
    TestQTOpengl(QWidget *parent = nullptr);
    ~TestQTOpengl();

private:
    Ui::TestQTOpenglClass ui;
};
