#define ROWS 5
#define COLS 5

#include <stdio.h>
#include <stdlib.h>

void reverse(int array[ROWS][COLS]) //Reverse Function
{
    int temp = array[ROWS-1][COLS-1]; 
    for (int i = ROWS; i>0;i--)
        for (int j = COLS; j>0;j--)
            array[i][j] = array[i-1][j-1];
    array[0][0]=temp;
}

int main()
{
    int array[ROWS][COLS];
    for(int i = 0;i<5;i++)
    {
        for(int j=0; j<5 ; j++)
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

    for(int i=0; i<5;i++)
    {
        for(int j = 0;j<5;j++)
        {
            printf("%d  ",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}