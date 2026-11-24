// main file for creating the board
// CSCE A201 Group Project
// ConnectFour
// string groupName

#include <iostream>
#include "board.h"
using namespace std;

void initBoard(char board[ROWS][COLS]) {
    for (int r = 0; r < ROWS; r++)
        for (int c = 0; c < COLS; c++)
            board[r][c] = ' ';
}

void printBoard(const char board[ROWS][COLS]) {
    cout << "  1   2   3   4   5   6   7\n";
    for (int r = 0; r < ROWS; r++) {
        cout << "|";
        for (int c = 0; c < COLS; c++)
            cout << " " << board[r][c] << " |";
        cout << "\n";
        if (r < ROWS - 1)
            cout << "|---+---+---+---+---+---+---|\n";
    }
    cout << "=============================\n";
}

bool isValidMove(const char board[ROWS][COLS], int col) {
    return col >= 0 && col < COLS && board[0][col] == ' ';
}

int dropPiece(char board[ROWS][COLS], int col, char piece) {
    for (int r = ROWS - 1; r >= 0; r--) {   // start at the bottom
        if (board[r][col] == ' ') {
            board[r][col] = piece;
            return r;
        }
    }
    return -1;  // column was full
}

bool isBoardFull(const char board[ROWS][COLS]) {
    for (int c = 0; c < COLS; c++)
        if (board[0][c] == ' ')
            return false;
    return true;
}

}
