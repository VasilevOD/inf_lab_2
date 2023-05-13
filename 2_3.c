#include<stdio.h>

int main(void) {
    char mas[50];
    int stroka, i, j, len, count = 1;
    for(i = 0; i<50 && (stroka=getchar())!='\n'; ++i) 
        mas[i]=stroka;
    len = i;
    for(i = 0; i<len; ++i){
        if (mas[i] == mas[i+1])
            ++count;
        else {
            if(count>=3){
                for(j=0; j<count; ++j)
                putchar(mas[i]); 
                putchar('\n');
            }
            count = 1;
        }
    }
    return 0;
    
}
