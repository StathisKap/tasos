#include <stdio.h>

void main()
{
    int A,sum=0,i=0;

    printf("Enter a number A\n");
    scanf("%d",&A);
    printf("A = %d\n",A);

    while(sum < A)
    {
        sum += (12+i*20);
        i++;
        printf("Sum = %d\n",sum);
    }
        printf("Sum = %d\nN = %d\n",sum,(i*20)+10);
}