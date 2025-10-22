#pragma once

#include <QtWidgets/QWidget>
#include "ui_ProtoTwo.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ProtoTwoClass; };
QT_END_NAMESPACE

class ProtoTwo : public QWidget
{
    Q_OBJECT

public:
    ProtoTwo(QWidget *parent = nullptr);
    ~ProtoTwo();

private:
    Ui::ProtoTwoClass *ui;
};

