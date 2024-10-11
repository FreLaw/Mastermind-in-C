#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "../include/code.h"

char *randomCode() {
    char colors[6] = {'R', 'G', 'B', 'P', 'Y', 'W'};
    char *code = malloc(sizeof(char) * 4);

    srand(time(NULL));
    for (int i = 0; i < 4; i++) {
        code[i] = colors[rand() % 6];
    }
    return code;
}

char *checkCode(char **board, char *code, int difficulty, int moveCount) {
    char *pegs = malloc(sizeof(char) * 4);
    char auxCode[4];

    for (int i = 0; i < 4; i++) {
        auxCode[i] = code[i];
    }

    for (int i = 0; i < 4; i++) {
        if (board[(difficulty * 2) - 1 + 2 - moveCount][i + 3] == auxCode[i]) {
            pegs[i] = 'b';
            auxCode[i] = ' ';
        } else {
            int count = 0;
            for (int j = 0; j < 4 && count == 0; j++) {
                if (board[(difficulty * 2) - 1 + 2 - moveCount][i + 3] == auxCode[j]) {
                    pegs[i] = 'w';
                    auxCode[j] = ' ';
                    count++;
                }
            }
            if (count == 0) {
                pegs[i] = ' ';
            }
        }
    }

    return pegs;
}
