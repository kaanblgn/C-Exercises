#include <stdio.h>

int main(){

    int c;
    int lastCharacter = EOF;

    while((c = getchar()) != EOF){

        if(c == ' '){
            if(lastCharacter != ' ')
                putchar(c);
        } else {
            putchar(c);
        }
        lastCharacter = c;
    }
}