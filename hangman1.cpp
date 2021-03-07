#include "hangman1.h"
#include "ui_hangman1.h"
int hangman1::count=0;
hangman1::hangman1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::hangman1)
{
    ui->setupUi(this);
    for (int i = 0; i < 26; i++)
        CheckLetter[i] = 1;
    for(int i = 0; i < word.length(); i++)
        displayedWord += "_";
    ui->label->setText(displayedWord);
    s_word = word.toStdString();
    ui->label_A->setVisible(0);
    ui->label_B->setVisible(0);
    ui->label_C->setVisible(0);
    ui->label_D->setVisible(0);
    ui->label_E->setVisible(0);
    ui->label_F->setVisible(0);
    ui->label_G->setVisible(0);
    ui->label_H->setVisible(0);
    ui->label_I->setVisible(0);
    ui->label_J->setVisible(0);
    ui->label_K->setVisible(0);
    ui->label_L->setVisible(0);
    ui->label_M->setVisible(0);
    ui->label_N->setVisible(0);
    ui->label_O->setVisible(0);
    ui->label_P->setVisible(0);
    ui->label_Q->setVisible(0);
    ui->label_R->setVisible(0);
    ui->label_S->setVisible(0);
    ui->label_T->setVisible(0);
    ui->label_U->setVisible(0);
    ui->label_V->setVisible(0);
    ui->label_W->setVisible(0);
    ui->label_X->setVisible(0);
    ui->label_Y->setVisible(0);
    ui->label_Z->setVisible(0);

}

hangman1::~hangman1()
{
    delete ui;
}


void hangman1::on_A_clicked()
{
    checkLetter(ui->A->text());
    ui->A->setVisible(0);
    ui->label_A->setVisible(1);
    // if return false, then call animation part
}

void hangman1::on_B_clicked()
{
    checkLetter(ui->B->text());
    ui->B->setVisible(0);
    ui->label_B->setVisible(1);
}

void hangman1::on_C_clicked()
{
    checkLetter(ui->C->text());
    ui->C->setVisible(0);
    ui->label_C->setVisible(1);
}

void hangman1::on_D_clicked()
{
    checkLetter(ui->D->text());
    ui->D->setVisible(0);
    ui->label_D->setVisible(1);
}

void hangman1::on_E_clicked()
{
    checkLetter(ui->E->text());
    ui->E->setVisible(0);
    ui->label_E->setVisible(1);
}

void hangman1::on_F_clicked()
{
    checkLetter(ui->F->text());
    ui->F->setVisible(0);
    ui->label_F->setVisible(1);
}

void hangman1::on_G_clicked()
{
    checkLetter(ui->G->text());
    ui->G->setVisible(0);
    ui->label_G->setVisible(1);
}

void hangman1::on_H_clicked()
{
    checkLetter(ui->H->text());
    ui->H->setVisible(0);
    ui->label_H->setVisible(1);
}

void hangman1::on_I_clicked()
{
    checkLetter(ui->I->text());
    ui->I->setVisible(0);
    ui->label_I->setVisible(1);
}

void hangman1::on_J_clicked()
{
    checkLetter(ui->J->text());
    ui->J->setVisible(0);
    ui->label_J->setVisible(1);
}

void hangman1::on_K_clicked()
{
    checkLetter(ui->K->text());
    ui->K->setVisible(0);
    ui->label_K->setVisible(1);
}

void hangman1::on_L_clicked()
{
    checkLetter(ui->L->text());
    ui->L->setVisible(0);
    ui->label_L->setVisible(1);
}

void hangman1::on_M_clicked()
{
    checkLetter(ui->M->text());
    ui->M->setVisible(0);
    ui->label_M->setVisible(1);
}

void hangman1::on_N_clicked()
{
    checkLetter(ui->N->text());
    ui->N->setVisible(0);
    ui->label_N->setVisible(1);
}

void hangman1::on_O_clicked()
{
    checkLetter(ui->O->text());
    ui->O->setVisible(0);
    ui->label_O->setVisible(1);
}

void hangman1::on_P_clicked()
{
    checkLetter(ui->P->text());
    ui->P->setVisible(0);
    ui->label_P->setVisible(1);
}

void hangman1::on_Q_clicked()
{
    checkLetter(ui->Q->text());
    ui->Q->setVisible(0);
    ui->label_Q->setVisible(1);
}

void hangman1::on_R_clicked()
{
    checkLetter(ui->R->text());
    ui->R->setVisible(0);
    ui->label_R->setVisible(1);
}

void hangman1::on_S_clicked()
{
    checkLetter(ui->S->text());
    ui->S->setVisible(0);
    ui->label_S->setVisible(1);
}

void hangman1::on_T_clicked()
{
    checkLetter(ui->T->text());
    ui->T->setVisible(0);
    ui->label_T->setVisible(1);
}

void hangman1::on_U_clicked()
{
    checkLetter(ui->U->text());
    ui->U->setVisible(0);
    ui->label_U->setVisible(1);
}

void hangman1::on_V_clicked()
{
    checkLetter(ui->V->text());
    ui->V->setVisible(0);
    ui->label_V->setVisible(1);
}

void hangman1::on_W_clicked()
{
    checkLetter(ui->W->text());
    ui->W->setVisible(0);
    ui->label_W->setVisible(1);
}

void hangman1::on_X_clicked()
{
    checkLetter(ui->X->text());
    ui->X->setVisible(0);
    ui->label_X->setVisible(1);
}

void hangman1::on_Y_clicked()
{
    checkLetter(ui->Y->text());
    ui->Y->setVisible(0);
    ui->label_Y->setVisible(1);
}

void hangman1::on_Z_clicked()
{
    checkLetter(ui->Z->text());
    ui->Z->setVisible(0);
    ui->label_Z->setVisible(1);
}

void hangman1::checkLetter(QString letter)
{
    std::string s_letter = letter.toStdString();
    char letter1 = s_letter[0];
    char letter2;
    int tempo;
    bool flag = false;
    if (CheckLetter[letter1 - 'A']) {
        for (int i = 0; i < word.length(); i++)
        {
            letter2 = s_word[i];
            if (letter2 >= 'a' && letter2 <= 'z') {
                tempo = letter2;
                tempo += 'A';
                tempo -= 'a';
                letter2 = tempo;
            }
            if(letter1 == letter2)
            {
                displayedWord[i] = word[i];
                flag = true;
            }
        }
        CheckLetter[letter1 - 'A'] = 0;
        ui->label->setText(displayedWord);
        if (!flag)
            {
            shape();
            inc();
        }} //call graphics function
}
void hangman1::inc()
{
    count++;
}
int hangman1:: getcount()
{
    return count;
}
void hangman1::shape()
{
    QBrush RedBrush(Qt::red);
    QPen Blackpen(Qt::black);
    Blackpen.setWidth(6);
    switch (count)
    {
    case 0:
            ellipse = scene->addEllipse(-50, -50, 100, 100, Blackpen, RedBrush);
        break;
    case 1:
                Line = scene->addLine(0, 55, 0, 250, Blackpen);
    break;
    case 2:
                Line = scene->addLine(0, 100, 100, 150, Blackpen);
                break;
    case 3:
    Line = scene->addLine(0, 100, -100, 150, Blackpen);
    break;
    case 4:
    Line = scene->addLine(0, 250,-100, 300, Blackpen);
        break;
    case 5:
    Line = scene->addLine(0, 250, 100, 300, Blackpen);
        break;
    case 6:
    Line = scene->addLine(-200, -100, -200, 300, Blackpen);
        break;
    case 7:
    Line = scene->addLine(-200, -100, 0, -100, Blackpen);
        break;
    case 8:
    Line = scene->addLine(0, -100, 0, -50, Blackpen);
        break;
}
}
