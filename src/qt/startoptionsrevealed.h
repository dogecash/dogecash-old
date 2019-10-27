//
// Created by Kolby on 9/4/2019.
//

#include <QLabel>
#include <QWidget>
#include "bip39.h"

namespace Ui {
    class StartOptionsRevealed;
}

/** Dialog to ask for passphrases. Used for encryption only
 */
class StartOptionsRevealed : public QWidget {
    Q_OBJECT

public:
    explicit StartOptionsRevealed(std::vector<std::string>& Words, int rows, QWidget *parent = nullptr);
    ~StartOptionsRevealed();


private:
    Ui::StartOptionsRevealed *ui;
    std::list<QLabel*> labelsList;

};
