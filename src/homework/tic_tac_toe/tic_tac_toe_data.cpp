//cpp
#include "tic_tac_toe_data.h"


//use fcn get_pegs()

void TicTacToeData::save_games(const vector <unique_ptr<TicTacToe>>& games)
{
  //Open file for writing
  ofstream out_file;
  out_file.open(file_name);

  if(out_file.is_open())
  {
    for(auto& game : games)  //For every game instance in the vector of TTC game instances
    {
      for(auto& peg: game->get_pegs())  //For the number of slots in the pegs vector (size):
      {
        out_file << peg;  //Write the peg char data to file
      }

      out_file << game->get_winner(); //Write winner
      out_file << "\n";
    }
  }

  out_file.close();
}


vector <unique_ptr <TicTacToe>> TicTacToeData::get_games()
{
  vector <unique_ptr <TicTacToe>> games;  //I chose the name games
  
  ifstream read_file;
  read_file.open(file_name);  //FIX Maybe file_name() or file_name w/o parenthesis

  string line;

  if(read_file.is_open())  //Makes sure file is open
  {
    while (std::getline(read_file, line))  // NEW Check: get a line from file; This should read data from file object and put it into the string
    {
      vector<string> pegs;
      for(std::size_t i=0; i < line.size()-1; ++i)  //For each character in the line/string (except the last one)
      {
        //string s1(1, ch);  //FIX! Name needed? This is his example. Not sure how to use it
        
        string ch(1, line[i]);
        pegs.push_back(ch);  //Put in name
      }
      
      string winner{line[line.size()-1]};  //FIX
    
      unique_ptr<TicTacToe> game;

      if(pegs.size() == 9)
      {
        //Make 3x3 board.
        game = make_unique<TicTacToe3>(pegs, winner);  //FIX initialization. Use MAKE UNIQUE. Maybe edit this constructor in TTT.h first. 
      }
      else if(pegs.size() == 16)
      {
        //Make 4x4 board.
        game = make_unique<TicTacToe4>(pegs, winner);
      }
      else
      {
        cout<<"Error initializing board in TTT data class \n";
      }

      //Add vector (from if/else statement) to games vector
      games.push_back(std::move(game));  //IMPORTANT! This needs move
    
    }
    
    read_file.close();
  }
  
  return games;
}