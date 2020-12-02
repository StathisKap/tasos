#include <stdio.h>
#include <stdlib.h>

void reverse(int *array, int size) //Reverse Function
{
    int temp = array[size-1]; //Ta idia me esas ekana edw
    for (int i = size; i>0;i--)
    {
        array[i] = array[i-1];
    }
    array[0]=temp;
}

int main()
{
    int size = 5; //Allakse to size edw 
    int array[size];
    printf("Enter %d values\n",size);
    for(int i = 0; i<size; i++)
    {
        printf("%d: ",i+1);
        scanf("%d", &array[i]);
    }
    reverse(array,size);


    printf("\nReversed Order\n");

    for(int i = 0; i<size; i++)
    {
        printf("%d: %d\n",i+1,array[i]);
    }

    return 0;
}

