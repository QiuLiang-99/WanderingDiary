#ifndef START_H
#define START_H

#include <QWidget>

namespace Ui {
class Start;
}

class Start : public QWidget
{
    Q_OBJECT

public:
    explicit Start(QWidget *parent = nullptr);
    ~Start();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Start *ui;
};

#endif // START_H
