#include <iostream>
using std::cout;   using std::cin;

#include "tic_tac_toe.h"

char go_again;

int main() 
{
  TicTacToe game;
  string first_player;

  do
  {
    cout<<"Please enter first player. (Enter X or O): \n";
    cin>> first_player;

    if (first_player == "x")
    {
      first_player = "X";
    }
    else if (first_player == "o")
    {
      first_player = "O";
    }
  }
  while(!(first_player == "X" || first_player == "O")); //Validates first_player input to be X or O

  game.start_game(first_player);

  do
  {
    int position;

    do
    {
      cout<<"Enter a position (1-9): \n";
      cin>> position;
    }
    while(!(position < 10 && position > 0)); //Validates position input to be 1-9

    game.mark_board(position);
    
    cout<<"Displaying board: \n";
    game.display_board();
  }
  while(!(game.game_over()));

  cout<<"GAME OVER. Thanks for playing! \n";

	return 0;
}