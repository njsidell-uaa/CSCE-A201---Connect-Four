// Header file for creating the ConnectFour board
// string groupName

#ifndef BOARD_H
#define BOARD_H

const int ROWS = 6;
const int COLS = 7;

void initBoard(char board[ROWS][COLS]);              // fill with empty spaces
void printBoard(const char board[ROWS][COLS]);       // draw the ASCII board
bool isValidMove(const char board[ROWS][COLS], int col);  // column in range and not full?
int  dropPiece(char board[ROWS][COLS], int col, char piece); // returns row it landed in
bool checkWin(const char board[ROWS][COLS], char piece);     // four in a row?
bool isBoardFull(const char board[ROWS][COLS]);      // draw check

#endif
