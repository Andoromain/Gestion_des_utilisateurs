#include "dialog.h"
#include "ui_dialog.h"

dialog::dialog(QWidget *fille):
    QMainWindow(fille),
    ui (new Ui::dialog)
{

}
dialog::~dialog(){
    delete ui;
}
