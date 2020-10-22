#ifndef RYZENMOBILETUNING_H
#define RYZENMOBILETUNING_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class RyzenMobileTuning; }
QT_END_NAMESPACE

class RyzenMobileTuning : public QMainWindow
{
    Q_OBJECT

public:
    RyzenMobileTuning(QWidget *parent = nullptr);
    ~RyzenMobileTuning();

private:
    Ui::RyzenMobileTuning *ui;
};
#endif // RYZENMOBILETUNING_H
