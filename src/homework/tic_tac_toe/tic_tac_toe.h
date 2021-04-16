//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

#include <string>
using std::string;

#include <vector>
using std::vector;


class TicTacToe
{
public: //Access Specifier
  bool game_over(); //Account for someone winning on the 9th mark.
  void start_game(string first_player);
  void mark_board(int position);
  string get_player() const; //const means fcn can only read; it cannot write
  // Removed void display_board() const; & replaced w/ ostream aperator <<(cout)  
  string get_winner() const;

  //Friend FCNS:
  // New operator overloading FCNs (overloading cout & cin)
  friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
  friend std::istream& operator>>(std::istream& in, TicTacToe& game);


private:

  bool check_column_win();
  bool check_row_win();
  bool check_diagonal_win();
  void set_winner();
  
  void set_next_player();
  bool check_board_full();
  void clear_board();

 //Class private data
  string player;
  vector<string> pegs{9, " "};  //Creates 9 spaces in vector
  string winner;

};

#endif