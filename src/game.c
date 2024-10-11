#include <stdio.h>
#include "../include/game.h"
#include "../include/board.h"
#include "../include/code.h"

void printRules() {
    printf("███╗   ███╗ █████╗ ███████╗████████╗███████╗██████╗ ███╗   ███╗██╗███╗   ██╗██████╗ \n"
           "████╗ ████║██╔══██╗██╔════╝╚══██╔══╝██╔════╝██╔══██╗████╗ ████║██║████╗  ██║██╔══██╗\n"
           "██╔████╔██║███████║███████╗   ██║   █████╗  ██████╔╝██╔████╔██║██║██╔██╗ ██║██║  ██║\n"
           "██║╚██╔╝██║██╔══██║╚════██║   ██║   ██╔══╝  ██╔══██╗██║╚██╔╝██║██║██║╚██╗██║██║  ██║\n"
           "██║ ╚═╝ ██║██║  ██║███████║   ██║   ███████╗██║  ██║██║ ╚═╝ ██║██║██║ ╚████║██████╔╝\n"
           "╚═╝     ╚═╝╚═╝  ╚═╝╚══════╝   ╚═╝   ╚══════╝╚═╝  ╚═╝╚═╝     ╚═╝╚═╝╚═╝  ╚═══╝╚═════╝ \n \n");

    printf("                            Welcome to Mastermind Game!\n \n");
    printf("-----------------------------------RULES----------------------------------------\n");
    printf("The object of MASTERMIND is to guess a secret code consisting of a series of 4\n"
           "colored pegs. Each guest results in feedback narrowing down the possibilities of the\n"
           "code. The winner is the player who solves his opponent's secret code with fewer\n"
           "guesses\n\n"
           "The play of the game goes as follows:\n\n"
           "1) One player, known as the Codemaker, secretly places the 4 Code Pegs in the 4\n"
           "holes, which are then covered by flipping over the plastic shield to conceal them from\n"
           "the opponent's sight. The Codemaker can use any combination of the 6 colors he\n"
           "chooses. He can also use 2 or more Code Pegs of the same color if he wishes.\n\n"
           "2) The other player, known as the Codebreaker, sits opposite the Codemaker and\n"
           "places Code Pegs in the 1st row of the Code Peg holes (closest to him). The\n"
           "Codebreaker is attempting to duplicate the exact colors and positions of the secret\n"
           "code.\n\n"
           "3) The Codemaker responds by placing 0, 1, 2, 3, and 4 Key Pegs in the Key Peg holes\n"
           "on the 1st row as follows:\n\n"
           "(a) A black Key Peg to indicate a Code Peg of the right color and in the right position\n"
           "(b) A white Key Peg to indicate a Code Peg of the right color but in the wrong position.\n"
           "(c) No Key Peg to indicate a wrong color that does not appear in the secret code.\n"
           "There is nothing about the placement of the Key Pegs to indicate which particular Code\n"
           "Pegs are meant. It is part of the challenge of the game for the Codebreaker to figure out\n"
           "which Code Pegs correspond to particular Key Pegs.\n\n"
           "4) The Codebreaker places another set of Code Pegs in the 2nd row and the\n"
           "Codemaker places the Key Pegs in the 2nd row as appropriate. They pegs played in\n"
           "each row are left in position until the secret code is broken.\n\n"
           "5) The Codebreaker keeps placing rows of Code Pegs and receiving feedback from the\n"
           "Codemaker until either the code is correctly guessed or all 10 rows are used.\n");
}

int setDifficulty() {
    int difficulty;
    printf("\nPlease set the difficulty level (choose 1, 2, or 3): ");
    scanf("%d", &difficulty);
    return difficulty;
}

int checkWin(const char *pegs, int moveCount, int difficulty) {
    for (int i = 0; i < 4; i++) {
        if (pegs[i] != 'b') {
            return 0;
        }
    }
    return 1;
}
