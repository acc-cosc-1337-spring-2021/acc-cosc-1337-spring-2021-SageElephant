//cpp (implementation)
#include "tic_tac_toe.h"
#include <iostream>
using std::cout; using std::cin;

//Public functions of class TicTacToe
bool TicTacToe::game_over()
{
  return check_board_full();
}

void TicTacToe::start_game(string first_player)
{
  //Ensure function argument is X or O 
  if(first_player == "X" || first_player == "O")
  {
    player = first_player;  //player is a private string in the class

    clear_board(); 
  }
  else
  {
    cout<<"Error starting game. void start_game fcn error \n"; 
  }
}

void TicTacToe::mark_board(int position)
{
  //"Mark vector w position -1 equal to player"
  pegs.at(position-1) = player;  //Writes over position with X or O in vector

  set_next_player();
}

string TicTacToe::get_player() const
{
  return player; //Player is always X or O
}

void TicTacToe::display_board() const
{
  //Iterate through vector to display board in 3x3 format
  for(int i = 0; i < 9; i++)
    {
      cout<<pegs[i];
      
      if(i == 2 || i == 5 || i== 8)  //Line break after first, second, and third row are printed out
      {
        cout<<"\n";
      }
    }
}

//Private functions of class TicTacToe

void TicTacToe::set_next_player()
{
  //Switches string player from X to O; or from O to X. It flip-flops.
  if(player == "X")
  {
    player = "O";
  }
  else if(player == "O")
  {
    player = "X";
  }
  else
  {
    cout<<"Error running set_next_player function. Input was not X or O";
  }
}

bool TicTacToe::check_board_full()
{
  //Check for " " (space) in board string vector
  for(auto i = 0; i < 9; i++)    //Iterate through vector values
  {
    if(pegs[i] == " ")
    {
      return false;
    }
  }
  return true; //This only trips if the program goes through the for loop loop without triggering the return false (in if statement)
}

void TicTacToe::clear_board()
{
  for(auto& peg: pegs)
  {
    peg = " ";
  }
  
  //for(std::size_t i = 0; i < pegs.size(); i++) Old loop
}
