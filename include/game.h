#ifndef GAME_H
#define GAME_H

void printRules();
int setDifficulty();
int checkWin(const char *pegs, int moveCount, int difficulty);
void playGame(int *moveCount);

#endif