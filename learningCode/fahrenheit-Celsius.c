#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr =0, 20, ..., 30 */

int main(){
    double F , C ;
    int min, max, step;

    min = 0, max = 300; // range of the F value
    step = 20; //increase in F per loop
    F = min;
    printf("F\t\tC\n");
    while (F <= max){
        C = (5.0/9.0)*(F-32.0);
        printf("%3.0f %6.1f\n",F,C);
        F += step;
    }
}
