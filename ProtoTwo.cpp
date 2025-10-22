#include "ProtoTwo.h"

ProtoTwo::ProtoTwo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ProtoTwoClass())
{
    ui->setupUi(this);
}

ProtoTwo::~ProtoTwo()
{
    delete ui;
}

