//
// Created by Rances Colon on 1/9/24.
//

#include "stdio.h"


char getUserInput();

int validChar(char out);

int main(){
    printf("Enter a number:");
    int size = getchar() - '0';
    getchar();// clear buffer
    char array[size];
    for (int i = 0; i < size; i++ ){
        array[i] = getUserInput();
    }
    printf("The elements in the array are [");
    for (int i = 0; i < size; i++){
        if(array[i] == ','){
            printf("%c,",array[i+1]);
        }
        else {
            printf("%c,", array[i]);
        }
    }
    printf("]");
}

char getUserInput(){
    printf("Enter a character:");
    char out = getchar();
    getchar();
    int check = validChar(out);
    if (check == 1){
        printf("invalid character\n");
        getUserInput();
        out = ',';
    }
    return out;
}

int validChar(char out) {
    if (out == '\n'||out == ' '|| out == '\t'){return 1;}

    else{return 0;}
}

