#include <stdio.h>

void main() {
    float radius , area , circumference ;
    float pi = 3.14;
    printf("enter the radius of the circle:");
    scanf("%f" , &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("area of the circle = %f\n" ,area);
    printf("curcumference oh circle = %f\n" , circumference);

  
    


}




