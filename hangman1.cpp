#include "hangman1.h"
#include "ui_hangman1.h"

hangman1::hangman1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::hangman1)
{
    ui->setupUi(this);
}

hangman1::~hangman1()
{
    delete ui;
}


void hangman1::on_A_clicked()
{
    checkLetter(ui->A->text());
    // if return false, then call animation part
}

void hangman1::on_B_clicked()
{
    checkLetter(ui->B->text());
}

void hangman1::on_C_clicked()
{
checkLetter(ui->C->text());
}

void hangman1::on_D_clicked()
{
checkLetter(ui->D->text());
}

void hangman1::on_E_clicked()
{
checkLetter(ui->E->text());
}

void hangman1::on_F_clicked()
{
checkLetter(ui->F->text());
}

void hangman1::on_G_clicked()
{
checkLetter(ui->G->text());
}

void hangman1::on_H_clicked()
{
checkLetter(ui->H->text());
}

void hangman1::on_I_clicked()
{
checkLetter(ui->I->text());
}

void hangman1::on_J_clicked()
{
    checkLetter(ui->J->text());
}

void hangman1::on_K_clicked()
{
    checkLetter(ui->K->text());
}

void hangman1::on_L_clicked()
{
    checkLetter(ui->L->text());
}

void hangman1::on_M_clicked()
{
    checkLetter(ui->M->text());
}

void hangman1::on_N_clicked()
{
    checkLetter(ui->N->text());
}

void hangman1::on_O_clicked()
{
    checkLetter(ui->O->text());
}

void hangman1::on_P_clicked()
{
checkLetter(ui->P->text());
}

void hangman1::on_Q_clicked()
{
checkLetter(ui->Q->text());
}

void hangman1::on_R_clicked()
{
checkLetter(ui->R->text());
}

void hangman1::on_S_clicked()
{
checkLetter(ui->S->text());
}

void hangman1::on_T_clicked()
{
checkLetter(ui->T->text());
}

void hangman1::on_U_clicked()
{
checkLetter(ui->U->text());
}

void hangman1::on_V_clicked()
{
checkLetter(ui->V->text());
}

void hangman1::on_W_clicked()
{
checkLetter(ui->W->text());
}

void hangman1::on_X_clicked()
{
checkLetter(ui->X->text());
}

void hangman1::on_Y_clicked()
{
checkLetter(ui->Y->text());
}

void hangman1::on_Z_clicked()
{
checkLetter(ui->Z->text());
}

bool  hangman1::checkLetter(QString letter)
{
    bool x = false;
    QString line = "";
    for (int i = 0; i < 6; i++)
    {
        if(letter == word[i])
        {
            x = true;
            //line[i] = letter;
            //call to a write on the screen
            //ui->lineEdit->setText(ui->lineEdit->text()+line);
        }
    }
    if (x == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
