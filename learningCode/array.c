//
// Created by Rances Colon on 1/9/24.
//
#include "stdio.h"

int main() {
    int count = 0;
    int input;
    int array[10] = {1, 2, 4, 5, 3, 4, 5, 4, 3, 5};
    while ((input = getchar() - '0') != EOF) {
        for (int i = 0; i < 10; i++) {
            if (array[i] == input) { count++; }
        }
        printf("count: %d\n", count);
        count = 0;
    }
}


