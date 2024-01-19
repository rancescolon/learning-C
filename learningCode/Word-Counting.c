#include <stdio.h>

int main(){
    const int INWORD = 1,OUTWORD = 0;
    
    int input ,wordCount,state;
    wordCount = 0;
    state = OUTWORD;
    while((input = getchar()) != EOF){
        if (input == ' '||input == '\n'||input =='\t'){
            state = OUTWORD;
        } else if(state == OUTWORD) {
            state = INWORD;
            wordCount++;
        }printf("word count is %d\n",wordCount);
    }
}