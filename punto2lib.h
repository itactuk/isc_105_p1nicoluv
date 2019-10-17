//
// Created by admin on 16/10/2019.
//

#ifndef UNTITLED13_PUNTO2LIB_H
#define UNTITLED13_PUNTO2LIB_H

#include <stdio.h>
#include <math.h>
typedef struct vectores{

    int iunitario;
    int junitario;

    float productos;


}vector;
vector suma( vector n1, vector n2 );
vector resta( vector n1, vector n2 );
vector escalar( vector n1, vector n2 );
vector vectorial( vector n1, vector n2 );
vector punto( vector n1, vector n2 );


#endif //UNTITLED13_PUNTO2LIB_H
