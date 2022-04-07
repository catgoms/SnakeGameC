#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>

int i, j, height=20, width=20, gameover, score;
int x, y, fruitx, fruity, flag;

// Function to draw a boundary
void draw() {
    // system("cls");
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            if (i == 0 || i == width - 1 || j == 0 || j == height - 1) {
                printf("#");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// Main
int main() {
    // Function Call
    draw();

    return 0;
}