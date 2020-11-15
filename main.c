#include <stdio.h>

void main()
{
    float Grade = 0, Total=0;
    int number=0;

    while(1)
    {
        printf("Enter the Grade of the Student:\n");
        scanf("%f",&Grade);
        if (Grade >=0 && Grade <=10)
        {
            number++;
            Total += Grade;
            printf("\n %.2f %.2f %d\n",Grade,Total,number);
        }
        else
            break; 
    }
    printf("The average is %.2f",Total/number);
}