#include <stdio.h>  

int main()
{
    int s1 , s2 , s3 , s4 , s5;
    float percent;
    printf("Enter marks of five subjects: ");
    scanf("%d %d %d %d %d", &s1 , &s2 , &s3 , &s4 , &s5);
    percent = (s1 + s2 + s3 + s4 + s5) / 5.0;
    
    if(percent >= 90)
    {
        printf("Grade A\n");
    }
    else if(percent >= 80 && percent < 90)
    {
        printf("Grade B\n");
    }
    else if(percent >= 60 && percent < 80)
    {
        printf("Grade C\n");
    }
    else if(percent < 60)
    {
        printf("Grade D\n");
    }
    return 0;
}
