#include <stdio.h>

/* print fahr to celsius table */

int main(){

    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("print celc to fahr table\n");
    
    while(celsius <= upper){

        fahr = celsius * (9.0/5.0) + 32.0;

        printf("%3.1f %3.1f\n", celsius, fahr);
        
        celsius = celsius+step;

    }


}