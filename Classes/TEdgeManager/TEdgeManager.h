//
// Created by neo on 2019-08-15.
//
#pragma once
#include "pinball.h"

/* 96 */
struct TEdgeManager {
TEdgeManager(float a2, float a3, float a4, float a5);
~TEdgeManager();
    
signed long box_x(float a2);
signed long box_y(float a2);
int increment_box_x(int); // idb
int increment_box_y(int); // idb
void FieldEffects(struct TBall*, struct vector_type*); // idb
// int TEdgeManager::TestGridBox(TEdgeManager *this, double a2@<st0>, int a3, int a4, float *a5, struct TEdgeSegment **a6, struct ray_type *a7, struct TBall *a8, int a9);
double FindCollisionDistance(struct ray_type* a2, struct TBall* a3, struct TEdgeSegment** a4);
void add_edge_to_box(int, int, struct TEdgeSegment*); // idb
void add_field_to_box(int, int, struct field_effect_type*); // idb
TEdgeManager* destroy(char a2);
};
