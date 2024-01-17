//
// Created by Rances Colon on 1/16/24.
//

#include "stdio.h"

char monthChecker(int month);


int main(){

    int array[1][3];

    printf("Enter you birth month:\n");

    int month =  getchar() - '0';
    array[0][0] = month;
    getchar();

    printf("Enter what day that month:\n");

    int day = getchar() - '0';
    array[0][1] = day;
    getchar();

    printf("Enter what year:\n");

    int year = getchar() - '0';
    array[0][2] = year;

    printf("Your were born on ");
    monthChecker(array[0][0]);
    printf(" %d, 200%d", array[0][1], array[0][2]);
}



char monthChecker(int month){
    switch (month) {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("September");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        default:
            printf("Invalid month\n");
            break;
    }
}