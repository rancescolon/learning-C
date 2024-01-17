//
// Created by Rances Colon on 1/15/24.
//
#include <stdio.h>

int main() {
    printf("oh you want some apple do you want\n");
    int num = getchar() - '0';
    switch (num) {
        case 1:
            printf("that will be $3\n");
            break;
        case 2:
            printf("that will be $6\n");
            break;
        case 3:
            printf("that will be $8\n");
            break;
        case 4:
            printf("that will be $10\n");
            break;
        default:
            printf("we have no more apples\n");

    }
}
/*
 * switch(whats being checked){
 * case(a case you want to check){
 * code;}
 * break;
 * }
 * default{
 * code;}
 * }
 */
