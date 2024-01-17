#include <stdio.h>

#define TAB '\t'
#define BSP '\b'
#define BSL '\\'

int main(){

    int c;
    
    while((c = getchar()) != EOF){

        if(c == TAB){
            putchar(BSL);
            putchar('t');
        } else if(c == BSP){
            putchar(BSL);
            putchar('b');
        } else if(c == '\\'){
            putchar(BSL);
            putchar(BSL);
        } else {
            putchar(c);
        }
    }


}