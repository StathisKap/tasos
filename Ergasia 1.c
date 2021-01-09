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
    char string[] = " Ti kako ekane o Epstein EEh? Malakes\n";
    printf("%s",ReplaceChar(string,'i', 'o'));
    return 0;
}
