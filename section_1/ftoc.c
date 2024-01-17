#include <stdio.h>

/* print fahr to celcius table */

int main(){

    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("print fahr to celc table\n");
    
    while(fahr <= upper){

        celsius = (5.0/9.0) * (fahr-32.0);

        printf("%3.1f %6.1f\n", fahr, celsius);
        
        fahr = fahr+step;

    }


}