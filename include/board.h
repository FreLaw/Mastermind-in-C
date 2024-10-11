#ifndef BOARD_H
#define BOARD_H

char **generateBoard(int difficulty);
void printBoard(char **board, int difficulty);
char **setPeg(char **board, int moveCount, const char *pegs, int difficulty);
char **chooseCode(char **board, int difficulty, int *moveCount);

#endif