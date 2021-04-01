#include <iostream>
using std::cout;   using std::cin;

#include "tic_tac_toe.h"

char go_again;

int main() 
{
  TicTacToe game;
  string first_player;

  cout<<"Please enter first player. (Enter X or O): \n";
  cin>> first_player;

  game.start_game(first_player);

  do
  {
    int position;
    cout<<"Enter a position (1-9): \n";
    cin>> position;

    game.mark_board(position);
    
    /* The directions don't ask for display. I used it to double check main program.
    cout<<"Displaying board: \n";
    game.display_board();
    */

    cout<<"Would you like to make another move? Type 'Y' or 'y' to move again: \n";
    cin >> go_again;
  }
  while(go_again == 'Y' || go_again == 'y');

  cout<<"Thanks for playing!";

	return 0;
}