//
// Created by Kolby on 9/4/2019.
//

#include <startoptions.h>
#include <ui_startoptions.h>




StartOptions::StartOptions(QWidget *parent)
        : QWidget(parent), ui(new Ui::StartOptions)
{
    ui->setupUi(this);


}

int StartOptions::getRows() {
    rows = 2;
    if (ui->Words12->isChecked()) {
        return 2;
    } else if (ui->Words24->isChecked()) {
        return 4;
    }
    return rows;
};


StartOptions::~StartOptions() {
    delete ui;
}