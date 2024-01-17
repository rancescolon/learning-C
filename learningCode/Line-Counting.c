#include <stdio.h>

int main(){
    int input, i = 0;
    while(getchar() != EOF){
        input = getchar();
        if (input != '\n'){
            i++;
        }
        printf("%d\n",i);
    }
}