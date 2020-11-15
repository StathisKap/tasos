#include <stdio.h>

void main()
{
    float Grade = 0, Total=0,Max=0,Min=10;
    int number=0;

    while(1)
    {
        printf("Enter the Grade of the Student:\n");
        scanf("%f",&Grade);
        if (Grade >=0 && Grade <=10)
        {
            number++;
            Total += Grade;
            if (Grade > Max)
            {
               Max = Grade; 
            }
            else if (Grade < Min)
            {
               Min = Grade; 
            }
            
            
        }
        else
            break; 
    }
    printf("The average is %.2f\nThe Max is %.2f\nThe Min is %.2f",Total/number,Max,Min);
}