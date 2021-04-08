#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "tic_tac_toe.h"

#include <iostream>
using std::cout; using std::cin;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test TicTacToe start_game, mark_board, and game_over fcns", "Game ends in tie")
{
  TicTacToe test_game;

  test_game.start_game("X");  //X is first player

  test_game.mark_board(1);
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(2);
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(3);
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(5);
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(4);
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(6);
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(8);
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(7);
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(9);
  REQUIRE(test_game.game_over() == true);

  //After all 9 slots are selected:
  REQUIRE(test_game.get_winner() == "C"); //Check string winner is C by running public get_winner fcn
}

TEST_CASE("Test first player set to X")
{
  TicTacToe test_game;
  test_game.start_game("X");  //X is first player

  REQUIRE(test_game.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
  TicTacToe test_game;
  test_game.start_game("O");  //O is first player

  REQUIRE(test_game.get_player() == "O");
}

TEST_CASE("Test win by first column")
{
  TicTacToe test_game;
  test_game.start_game("X");  //X is first player

  test_game.mark_board(1);  //X move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(2);  //O move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(4);  //X move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(3);
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(7);
  REQUIRE(test_game.game_over() == true);
  REQUIRE(test_game.get_winner() == "X");

}

TEST_CASE("Test win by second column")
{
  TicTacToe test_game;
  test_game.start_game("X");  //X is first player

  test_game.mark_board(2);  //X move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(1);  //O move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(6);  //X move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(3);
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(5);
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(9);
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(8);
  REQUIRE(test_game.game_over() == true);
  REQUIRE(test_game.get_winner() == "X");
}
TEST_CASE("Test win by third column")
{
  TicTacToe test_game;
  test_game.start_game("X");  //X is first player

  test_game.mark_board(3);  //X move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(2);  //O move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(6);  //X move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(5);
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(9);
  REQUIRE(test_game.game_over() == true);
  REQUIRE(test_game.get_winner() == "X");
}

TEST_CASE("Test win by first row")
{
  TicTacToe test_game;
  test_game.start_game("X");  //X is first player

  test_game.mark_board(1);  //X move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(7);  //O move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(2);  //X move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(9);
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(3);
  REQUIRE(test_game.game_over() == true);
  REQUIRE(test_game.get_winner() == "X");
}

TEST_CASE("Test win by second row")
{
  TicTacToe test_game;
  test_game.start_game("X");  //X is first player

  test_game.mark_board(4);  //X move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(2);  //O move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(5);  //X move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(3);
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(6);
  REQUIRE(test_game.game_over() == true);
  REQUIRE(test_game.get_winner() == "X");
}

TEST_CASE("Test win by third row")
{
  TicTacToe test_game;
  test_game.start_game("X");  //X is first player

  test_game.mark_board(7);  //X move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(5);  //O move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(8);  //X move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(3);
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(9);
  REQUIRE(test_game.game_over() == true);
  REQUIRE(test_game.get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left")
{
  TicTacToe test_game;
  test_game.start_game("X");  //X is first player

  test_game.mark_board(1);  //X move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(2);  //O move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(5);  //X move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(3);
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(9);
  REQUIRE(test_game.game_over() == true);
  REQUIRE(test_game.get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left")
{
  TicTacToe test_game;
  test_game.start_game("X");  //X is first player

  test_game.mark_board(7);  //X move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(2);  //O move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(5);  //X move
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(9);
  REQUIRE(test_game.game_over() == false);
  test_game.mark_board(3);
  REQUIRE(test_game.game_over() == true);
  REQUIRE(test_game.get_winner() == "X");
}