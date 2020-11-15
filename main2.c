#include <stdio.h>

void main()
{
    int A,sum=12,i=0;

    printf("Enter a number A\n");
    scanf("%d",&A);
    printf("A = %d\n",A);

    while(sum < A)
    {
        printf("Sum = %d\n",sum);
        i++;
        sum += (i*20);
    }
        printf("Sum = %d\nN = %d\n",sum,(i*20)+10);
}