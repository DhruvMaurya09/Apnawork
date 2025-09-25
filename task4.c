#include <stdio.h>

int main() 
{
    
    float celsius, fahrenheit;

   printf("Enter the temperature in Centigrade: ");
   scanf("%f", &celsius);
   
   fahrenheit = (9 * celsius / 5) + 32;
   printf("%.2f centigrade is equal to %.2f fahrenhiet. \n" , celsius , fahrenheit);
   return 0;
   
}


    




