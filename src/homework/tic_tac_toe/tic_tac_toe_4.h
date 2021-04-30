//h
#ifndef TIC_TAC_TOE_4_H
#define TIC_TAC_TOE_4_H

#include "tic_tac_toe.h"

class TicTacToe4 : public TicTacToe
{
  public:
    TicTacToe4() : TicTacToe(4){}  //When TTT3 instace in created w/o params, it runs TTT's constructor w/ 3 as param
    TicTacToe4(vector <string>  p, string winner) : TicTacToe(p, winner){} //NEW. Check ability to pass to TTT constructor

  private:
    // These fcn should also check if board is full. Check UML directions
    bool check_column_win();  //These 3 fcns are "protected virtual functions" in parent class
    bool check_row_win();
    bool check_diagonal_win();
};

#endif