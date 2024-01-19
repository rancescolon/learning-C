//
// Created by Rances Colon on 1/16/24.
//

#include "stdio.h"

void monthPrinter(int month);
void dayPrinter(int day);
int inputGetter();

int main(){

    int array[1][3];//array[number of arrays][size of each array]
    printf("enter in MM/DD/YYYY format\n");

    printf("Enter you birth month: \n");
    array[0][0] = inputGetter();


    printf("Enter what day that month:\n");
    array[0][1] = inputGetter();

    printf("Enter what year:\n");
    array[0][2] = inputGetter();

    printf("Your were born on ");
    monthPrinter(array[0][0]);
    dayPrinter(array[0][1]);
    printf(" on the year %d", array[0][2]);

}

void monthPrinter(int month){
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
            printf("Invalid month");
            break;
    }
}

void dayPrinter(int day){
    int i = day;
    if (day >= 10){i = i % 10;}
    if (day >= 10 && day <= 13){i = 0;}
    switch (i) {
        case 1:
            printf(" %dst,",day);
            break;
        case 2:
            printf(" %dnd,",day);
            break;
        case 3:
            printf(" %drd,",day);
            break;
        default:
            printf(" %dth,",day);
            break;
    }
    if (i > 1) {printf(" Invalid day,");}
}

int inputGetter() {//
    int input = 0 , i;// i is set to the right most char each loop
    while (((i = getchar()) != EOF) && (i != '\n')) {
        i -= '0';// Convert character to integer
        input = (input * 10) + i;
    }
    return input;
}
