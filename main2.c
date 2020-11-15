#include <stdio.h>

void main()
{
    int A,sum=0,i=1;

    printf("Enter a number A\n");
    scanf("%d",&A);
    printf("A = %d\n",A);

    while(sum < A)
    {
        sum += (2+i*10);
        i++;
        printf("Sum =%d\n",sum);
    }
}