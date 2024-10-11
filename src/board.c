#include <stdio.h>
#include <stdlib.h>
#include "../include/board.h"

char **generateBoard(int difficulty) {
    char **board = (char **)malloc((difficulty * 2) * sizeof(char *));
    for (int i = 0; i < (difficulty * 2); i++) {
        board[i] = (char *)malloc(7 * sizeof(char));
    }

    for (int i = 0; i < (difficulty * 2); i++) {
        for (int k = 0; k < 7; k++) {
            board[i][k] = ' ';
        }
    }
    return board;
}

void printBoard(char **board, int difficulty) {
    for (int i = 0; i < (difficulty * 2); i++) {
        if (i % 2 == 0) {
            for (int k = 0; k < 3; k++) {
                if (k == 2) {
                    printf("  |  ");
                } else {
                    printf("[%c]", board[i][k]);
                }
            }
        } else {
            for (int k = 0; k < 7; k++) {
                if (k == 2) {
                    printf("  |  ");
                } else {
                    printf("[%c]", board[i][k]);
                }
            }
            printf("\n--------------------------");
        }
        printf("\n");
    }
    printf("\n");
}

char **setPeg(char **board, int moveCount, const char *pegs, int difficulty) {
    if (moveCount % 4 == 0) {
        for (int i = 0; i < 2; i++) {
            board[(difficulty * 2) - 1 + 2 - moveCount][i] = pegs[i];
        }
        for (int i = 0; i < 2; i++) {
            board[(difficulty * 2) - 2 + 2 - moveCount][i] = pegs[i + 2];
        }
    } else {
        for (int i = 0; i < 2; i++) {
            board[(difficulty * 2) - 2 + 2 - moveCount][i] = pegs[i];
        }
        for (int i = 0; i < 2; i++) {
            board[(difficulty * 2) - 1 + 2 - moveCount][i] = pegs[i + 2];
        }
    }
    return board;
}

char **chooseCode(char **board, int difficulty, int *moveCount) {
    char color;
    for (int i = 0; i < 4; i++) {
        do {
            getchar();
            printf("Please choose your code! Enter color number %d (The colors are Red(R), Green(G), Blue(B), Purple(P), Yellow(Y), White(W): \n", i + 1);
            scanf("%c", &color);
        } while (color != 'R' && color != 'G' && color != 'B' && color != 'P' && color != 'Y' && color != 'W');
        board[(difficulty * 2) - 1 - *moveCount][i + 3] = color;
    }
    *moveCount = *moveCount + 2;
    return board;
}
