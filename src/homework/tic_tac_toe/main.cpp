#include <iostream>
using std::cout;   using std::cin;

#include <string>
using std::string;

#include "tic_tac_toe.h"

string go_again;

int main() 
{
  do  //Each game
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
    while(!(first_player == "X" || first_player == "O")); //Input validation: first_player input to be X or O

    game.start_game(first_player);

    do
    {
      int position;

      do
      {
        cout<<"It is " << game.get_player() << "'s turn. \n"; //Use string get_player() const function to say who's turn it is.
        cout<<"Enter an integer position (1-9): \n";  
        cin>> position;
      }
      while(!(position <= 9 && position >= 1)); //Validates input position to be 1-9

      game.mark_board(position);
      
      cout<<"Displaying board: \n";
      game.display_board();
    }
    while(!(game.game_over()));

    cout<<"GAME OVER. The winner was: " << game.get_winner() << "\n";
    cout<<"Thanks for playing! \n";

    cout<<"Would you like to play again? Type 'Y' or 'y' to play again. \n";
    cin>>go_again;
  }
  while(go_again == "Y" || go_again == "y");
	
  return 0;
}