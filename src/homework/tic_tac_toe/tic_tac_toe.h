//h
#include <string>
using std::string;

#include <vector>
using std::vector;


class TicTacToe
{
public: //Access Specifier
  bool game_over();
  void start_game(string first_player);
  void mark_board(int position);
  string get_player() const;   //Const in instructions? What does that mean?
  void display_board() const;  //Also says const in directions. Figure out meaning

private:
  void set_next_player();
  bool check_board_full();
  void clear_board();

//Class private data
  string player;
  vector<string> pegs{9, " "};  //Creates 9 spaces in vector
  
  //vector<string> pegs{" ", " ", " ", " ", " ", " ", " ", " ", " "};

};