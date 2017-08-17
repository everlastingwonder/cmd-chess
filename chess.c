/*
*  PROGRAM_TITLE
*  By Gus Wiedey
*  v0.1.0
*/


/***************
* PREPROCESSOR *
*     CRAP     *
***************/
#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
// #include <ctype.h>
// #include <math.h>

// #define BLAH 69


/**************
* CUSTOM TYPE *
* DEFINITIONS *
**************/
enum PIECE_TYPE { pawn, knight, bishop, rook, queen, king };
typedef enum PIECE_TYPE Piece;

enum COLOR { blank = 0, white = 1, black = 2 };
typedef enum COLOR Color;

struct SPACE {
  Piece piece;
  Color color;
  struct SPACE *up, *down, *left, *right, *ur, *ul, *dr, *dl;
}


/****************
* BOARD DIAGRAM *
****************/
/*
* h []
* g []
* f []
* e []
* d []
* c []
* b []
* a []
*/


/************
* FUNCTIONS *
************/
int main() {
  // Variable definitions
  int i, j;
}
