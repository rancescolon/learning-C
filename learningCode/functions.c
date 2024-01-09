//
// Created by Rances Colon on 1/9/24.
//

#include "stdio.h"


char arrayMaker();
int main(){
    printf("Enter a number:");
    int size = getchar() - '0';
    getchar();// take in enterKey
    char array[size];
    for (int i = 0; i < size; i++ ){
        printf("Enter a character:");
        array[i] = arrayMaker();

    }
    printf("The elements in the array are [");
    for (int i = 0; i < size; i++){
        printf("%c,",array[i]);
    }
    printf("]");
}

char arrayMaker(){
    char out;
    out = getchar();

    if (out != '\n'){
        arrayMaker();
    }

    return out;
}
