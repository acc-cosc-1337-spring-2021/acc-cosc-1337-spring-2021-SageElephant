//h
#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H

#include "tic_tac_toe.h"

class TicTacToe3 : public TicTacToe
{
  public:
    TicTacToe3() : TicTacToe(3){}  //When TTT3 instace in created w/o params, it runs TTT's constructor w/ 3 as param
    TicTacToe3(vector <string>  p, string winner) : TicTacToe(p, winner){} //NEW. Check ability to pass to TTT constructor

  private:
    bool check_column_win();  //Make these 3 fcn "protected virtual functions in parent class
    bool check_row_win();
    bool check_diagonal_win();
};

#endif