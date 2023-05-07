#include "mbed.h"
//#include "mbed2/299/drivers/InterruptIn.h"

int nth_term = 9;                                 // give the limit to the amount of numbers to be outputed
int term_1;                                       // the variables being used
int term_2;
int next_term = 0;

 
int main() {

    term_1 = 0;
    term_2 = 1;
    printf("\n nth term is %d \r\n", nth_term);
    printf("0,1,");                                // print the first two numbers of the Fibonacci number sequence 
    
    for(int i = 2; i<nth_term; i++){               // for loop, starting at value 2 and incrementing each time
        next_term = term_1 + term_2;               // calculating the next term by adding the two previous terms
        printf("%d,",next_term);                   // printing the next term
        term_1 = term_2;
        term_2 = next_term;
         
}
}
