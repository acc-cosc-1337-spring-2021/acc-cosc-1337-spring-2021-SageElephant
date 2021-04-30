//cpp
#include "tic_tac_toe_manager.h"

#include <iostream>
using std::cin; using std::cout;

#include<vector>
using std::vector;

//Public Constructor
TicTacToeManager::TicTacToeManager(TicTacToeData d) : data{d}   //CHECK FIX
{
  games = data.get_games();  //sets manager's games vector to the data's vector of games (that it fetches from dat file)

  for(auto& game : games)
  {
    update_winner_count(game->get_winner());
  }
}

//Public Destructor:
TicTacToeManager::~TicTacToeManager()
{
  cout<<"\n Saving games... \n";
  data.save_games(games);  //Check. It should be able to pass in the manager's private vector games.
}

//Public fcns
void TicTacToeManager::save_game(unique_ptr<TicTacToe>& b)
{
  update_winner_count(b->get_winner());
  
  games.push_back(std::move(b));  //FIX Add the move statement to game variable; check notes on how to execute that
  
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager) //Friend fcn
{
  //Usage of this fcn will look like:  cout<<manager
  for(auto& game: manager.games)
  {
    out<<*game;  //either out<<*game  or out<<&game  or out<<game
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

