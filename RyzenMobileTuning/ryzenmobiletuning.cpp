#include "ryzenmobiletuning.h"
#include "./ui_ryzenmobiletuning.h"

RyzenMobileTuning::RyzenMobileTuning(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RyzenMobileTuning)
{
    ui->setupUi(this);
}

RyzenMobileTuning::~RyzenMobileTuning()
{
    delete ui;
}

