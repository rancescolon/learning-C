#include <stdio.h>

int main() {
    int num;
    printf("enter a number:\n");
    num = getchar();
    putchar(num);
    printf(" + 1 = ");
    putchar(num+1);
}
