//
// Created by neo on 2019-08-15.
//
#pragma once

#include "pinball.h"

/* 95 */
struct TBall {

// bool __thiscall TBall::already_hit(TBall* this, struct TEdgeSegment* a2);
// void __thiscall TBall::not_again(TBall* this, struct TEdgeSegment*); // idb
// int __thiscall TBall::Message(TBall* this, int, float); // idb
// void __thiscall TBall::Repaint(TBall* __hidden this); // idb
TBall(struct TPinballTable* a2);
// 
// void* TBall::vftable = &TBall::Message; // weak
};
