// Copyright (c) 2019 The DogeCash developers
// Copyright (c) 2019 The DogeCash developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLDOGECWIDGET_H
#define COINCONTROLDOGECWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlDogeCWidget;
}

class CoinControlDogeCWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlDogeCWidget(QWidget *parent = nullptr);
    ~CoinControlDogeCWidget();

private:
    Ui::CoinControlDogeCWidget *ui;
};

#endif // COINCONTROLDOGECWIDGET_H
