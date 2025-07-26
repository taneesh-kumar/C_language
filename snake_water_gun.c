// Welcome to Snake, Water, Gun! 🐍💧🔫
// A fun and fast-paced twist on the classic Rock, Paper, Scissors! In this game:
// Snake drinks Water 🐍 > 💧
// Water damages Gun 💧 > 🔫
// Gun shoots Snake 🔫 > 🐍
// Choose wisely and test your luck and strategy against the computer. Let the game begin!
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(){
    /*
    0 ---> Snake 🐍
    1 ---> Water 💧
    2 ---> Gun 🔫
    */
    srand(time(NULL));

    int player;
    printf("Choose '0' for Snake, '1' for Water, '2' for Gun : ");
    scanf("%d", &player);

    if (player < 0 || player > 2) {
        printf("Invalid input. Please enter 0, 1, or 2.\n");
        return 1;
    }

    int computer = rand() % 3;

    const char *choices[] = {"Snake", "Water", "Gun"};
    printf("You chose: %s\n", choices[player]);
    printf("Computer chose: %s\n", choices[computer]);

    if (player == computer) {
        printf("It's a draw :-/\n");
    } else if ((player == 0 && computer == 1) || 
               (player == 1 && computer == 2) || 
               (player == 2 && computer == 0)) {
        printf("You win! :-)\n");
    } else {
        printf("Computer wins :-/\n");
    }

    return 0;
}
