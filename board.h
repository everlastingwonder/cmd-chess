#ifndef _CMD_CHESS_BOARD_H_
#define _CMD_CHESS_BOARD_H_

#define up_left(sp) ( sp->up != NULL ? sp->up->left : NULL )
#define up_right(sp) ( sp->up != NULL ? sp->up->right : NULL )
#define down_left(sp) ( sp->down != NULL ? sp->down->left : NULL )
#define down_right(sp) ( sp->down != NULL ? sp->down->right : NULL )

enum PIECE_TYPE { pawn, knight, bishop, rook, queen, king };
typedef enum PIECE_TYPE Piece;

enum PIECE_COLOR { empty, white, black };
typedef enum COLOR Color;

struct SPACE {
  Piece piece;
  Color color;
  struct SPACE *up, *down, *left, *right;
};

#endif /* _CMD_CHESS_BOARD_H_ */
