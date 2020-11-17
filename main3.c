#include <stdio.h>
#include <string.h>

void main()
{
    char str[128];
    int value,total;
    printf("ΔΩΣΕ ΜΟΥ ΒΑΘΜΟΥΣ ΡΕ ΣΚΑΤΟΜΑΛΑΚΑ. ΔΗΟΜΙΣΕ ΥΠΑΛΙΛΕ: \n");
    scanf("%s", str);
    int number = strlen(str);
    for (int i = 0; i<strlen(str);i++)
    {
        switch (str[i])
        {
            case 'A':
                value = 4;
            break;
            case 'B':
                value = 3;
            break;
            case 'C':
                value = 2;
            break;
            case 'D':
                value = 1;
            break;
            case 'F':
                value = 0;
            break;
            default:
                number--;
        }
        total += value;
    }
    printf("Number of Grades: %d\n",number);
    printf("Total Sum: %d\n",total);
    printf("Average: %d\n",total/number);
}
