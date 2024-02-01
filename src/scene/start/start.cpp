#include "start.h"
#include "ui_start.h"

Start::Start(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Start)
{
    ui->setupUi(this);
}

Start::~Start()
{
    delete ui;
}

void Start::on_pushButton_clicked()
{

}

