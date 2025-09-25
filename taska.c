#include <stdio.h>
int main()
{
    int s1 , s2 , s3 , s4 , s5;
    int sum;
    float percent;

    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &s1 , &s2 , &s3 , &s4 ,&s5);
    
    sum = s1 + s2 + s3 + s4 + s5;
    printf("Sum: %d\n", sum);
    
    percent = (sum) / 5.0;
    printf("Percentage: %f\n", percent);    
    return 0;
}