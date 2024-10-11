#include <stdio.h>
#include "../include/board.h"
#include "../include/code.h"
#include "../include/game.h"

int main() {
    printRules();
    int difficulty = setDifficulty();
    int moveCount = 0;
    char *code = randomCode();
    char **board = generateBoard(difficulty);

    while (moveCount < 10) {
        board = chooseCode(board, difficulty, &moveCount);
        char *pegs = checkCode(board, code, difficulty, moveCount);
        printf("Feedback from Codemaker: ");
        for (int i = 0; i < 4; i++) {
            printf("%c ", pegs[i]);
        }
        printf("\n");

        if (checkWin(pegs, moveCount, difficulty)) {
            printf("You Win!\n");
            break;
        }
    }

    printf("Game Over!\n");
    return 0;
}
