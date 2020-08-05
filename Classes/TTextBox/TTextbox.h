//
// Created by neo on 2019-08-15.
//
#pragma once
#include "pinball.h"

/* 119 */
struct TTextBox {
    TTextBox(TPinballTable* a2, int a3);
    void Clear(int a2);
    void TimerExpired(int a1, int a2, TTextBox *a3);
    ~TTextBox();
    void Draw(int a2);
    void Display(int a2, char *a3, float a4);
    TTextBox* destroy(char a2);
    int Message(int a2, float a3);

//     void* TTextBox::vftable = &TTextBox::Message; // weak

};
