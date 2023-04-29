#include<stdio.h>

int main(void) {
    int stroka, count;
    while ((stroka=getchar()) != '\n') {
        if(stroka != ' ' && stroka != '\t'){
            putchar(stroka);
            count = 0;
        }
        else {
            count+=1; 
            if(count<=1) { 
            putchar('\n');
            }
        }
    }
    
}
