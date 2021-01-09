#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ReplaceChar(char *istring, char initial, char final)
{
    int i = 0,j=0,isize = strlen(istring);
    char *fstring = malloc(isize);
    char *ptr = fstring;


    for (i = 0; i < isize; i++)
    {
            if (*istring == ' ' && i == 0)
               istring++, *fstring = *istring;
            else if (*istring == initial)
                *fstring = final;
            else if(*istring == ' ' && *(istring+1) == ' ' ) 
            fstring--;
            else 
                *fstring = *istring;
                istring++,fstring++;
    }

    int fsize = strlen(fstring);
    fstring[fsize] = '\0';

    return ptr;
}


int main()
{
    char string[] = " 9/11 was an inside job and the US    government is hiding   aliens in Area  51!! \n";
    char initial, final;
    printf("Enter the letter to be replaced:\n");
    scanf("\n%c",&initial);
    printf("Enter the letter to replace it with:\n");
    scanf("\n%c",&final);

    printf("%s",ReplaceChar(string,initial, final));
    return 0;
}
