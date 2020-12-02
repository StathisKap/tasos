#define ROWS 5
#define COLS 5

#include <stdio.h>
#include <stdlib.h>

void reverse(int array[ROWS][COLS]) //Reverse Function
{
    int temp = array[ROWS-1][COLS-1], i, j;
    for (i = ROWS-1; i>0;i--)
        for (j = COLS-1; j>0;j--)
            array[i][j] = array[i-1][j-1];
    array[0][0]=temp;
}

int main()
{
    int array[ROWS][COLS],i,j;
    for(i = 0;i<5;i++)
    {
        for(j=0; j<5 ; j++)
        {
            if(i==j)
            {
                array[i][j] = rand()%1000+1000;
            }
            else if (j>i)
            {
                array[i][j] = rand()%1000+2000;
            }
            else
            {
                array[i][j] = rand()%1000;
            }
        }
    }

    
    reverse(array);

    for(i=0; i<5;i++)
    {
        for(j = 0;j<5;j++)
        {
            printf("%d  ",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}