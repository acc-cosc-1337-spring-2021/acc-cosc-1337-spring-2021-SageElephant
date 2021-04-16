//cpp
#include "tic_tac_toe_manager.h"

#include <iostream>
using std::cin; using std::cout;

#include<vector>
using std::vector;

//Public fcns
void TicTacToeManager::save_game(TicTacToe b)
{
  games.push_back(b); 

  update_winner_count(b.get_winner());
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager) //Friend fcn
{
  //Usage of this fcn will look like:  cout<<manager
  for(auto& game: manager.games)
  {
    out<<game;
    out<<"\n";
  }

  return out;
}
  
void TicTacToeManager::get_winner_total(int& o, int& x, int&t) 
{
  //It changes the values of o, x and t in main fcn
  //We write over with the private data variables (using refs to main variables)
  o = o_win;
  x = x_win;
  t = ties;
}


//Private fcns

void TicTacToeManager::update_winner_count(string winner)
{
  if(winner == "X")
  {
    x_win += 1;
  }
  else if(winner == "O")
  {
    o_win += 1;
  }
  else
  {
    ties += 1;
  }
}

