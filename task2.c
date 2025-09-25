#include <stdio.h>
#include <math.h>

int main () {
    float principal , rate , time , simple_interest , compound_interest ,  amount;

    printf("enter principal  amount: ");
    scanf("%f" , &principal);

    printf("enter rate:");
    scanf("%f" , &rate);

    printf("enter time in years:");
    scanf("%f" , &time);

    simple_interest = (principal * rate * time) / 100 ;

    amount = principal * pow((1 + rate/100) , time);

    compound_interest = amount - simple_interest;

    printf("simple interest = %f\n" , simple_interest);
    printf("compound interest = %f\n" , compound_interest);

    return 0;
}

    