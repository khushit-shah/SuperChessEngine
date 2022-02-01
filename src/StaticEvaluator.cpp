#include<map>
#include<string>
#include<list>

#include "StaticEvaluator.h"
#include "constant.h"

using namespace std;

// board
int StaticEvaluator::evaluate(int board[])
{
    int move = 1; // 1 : white's move;  
                  // -1 : black's move;

    for(int i=0;i<64;i++)
    {
        // pieces identified as per FEN notation
        if(board[i] == 'P')
        {
            score += PAWN_VALUE + PAWN_WHITE_INC[i];
        }
        else if(board[i] == 'p')
        {
            score -= (PAWN_VALUE + PAWN_BLACK_INC[i]);
        }
        else if(board[i] == 'N')
        {
            score += (KNIGHT_VALUE + KNIGHT_WHITE_INC[i]);
        }
        else if(board[i] == 'n')
        {
            score -= (KNIGHT_VALUE + KNIGHT_BLACK_INC[i]);
        }
        else if(board[i] == 'B')
        {
            score += (BISHOP_VALUE + BISHOP_WHITE_INC[i]);
        }
        else if(board[i] == 'b')
        {
            score -= (BISHOP_VALUE + BISHOP_BLACK_INC[i]);
        }
        else if(board[i] == 'Q')
        {
            score += (QUEEN_VALUE + QUEEN_WHITE_INC[i]);
        }
        else if(board[i] == 'q')
        {
            score -= (QUEEN_VALUE + QUEEN_BLACK_INC[i]);
        }
        else if(board[i] == 'K')
        {
            score += (KING_VALUE + KING_WHITE_INC[i]);
        }
        else if(board[i] == 'k')
        {
            score -= (KING_VALUE + KING_BLACK_INC[i]);
        }
    }
    
    score = score*move;
    return score;
}