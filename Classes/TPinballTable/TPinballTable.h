//
// Created by neo on 2019-08-15.
//

#include "pinball.h"

#ifndef PINBALL_TPINBALLTABLE_H
#define PINBALL_TPINBALLTABLE_H

#define DWORD int

struct TPinballComponent;

/* 117 */
struct TPinballTable {
TPinballTable();
~TPinballTable();

void LightShow_timeout(int, void*); // idb
void EndGame_timeout(int, void*); // idb
int AddScore(int); // idb
// void TPinballTable::ChangeBallCount(TPinballTable *this, int a2, int a3);
void replay_timer_callback(int, void*); // idb
void port_draw(); // idb
void tilt_timeout(int, void*); // idb
void tilt(int a2, float a3);
// int TPinballTable::Message(TPinballTable *this, int a2, int a3, float a4);
TPinballTable* destroy(char a2);
TPinballComponent* find_component(char*); // idb
TPinballComponent* find_component(int); // idb

// void* TPinballTable::vftable = &TPinballTable::Message; // weak
};

#endif //PINBALL_TPINBALLTABLE_H
