#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct players
{
    int code,foul,points;
};

void Read_Data(struct players *Data,int num_of_entries);
struct players* Enter_Data(int* num_of_entries);



int main()
{
    int num_of_entries;
    struct players *Data = Enter_Data(&num_of_entries);
    Read_Data(Data,num_of_entries);

    return 0;
}



struct players* Enter_Data(int* num_of_entries)
{
    int num_of_players;
    int i=0;
    char *name_buffer = malloc(30);
 
    printf("Enter the Number of Entries you'd like to add: ");
    scanf("%d",&num_of_players);
   *num_of_entries = num_of_players; 
    struct players *players_data = malloc(num_of_players*sizeof(struct players));

   
   for(i=0;i < num_of_players;i++)
   {
       printf("Enter the Code of Player %d\n",i+1);
       scanf("\n%d",&players_data[i].code);

       printf("Enter the num of Fouls of Player %d\n",i+1);
       scanf("\n%d",&players_data[i].foul);
        
       printf("Enter the Points scored by Player %d\n",i+1);
       scanf("\n%d",&players_data[i].points);
  }

        printf("\n\nThank You\n\n");

        return players_data;
};

void Read_Data(struct players *Data,int num_of_entries)
{

    int i,filter,filter2=1000000;
    
    printf("Number of Players is %d. If you'd like to see the ones with a number of fouls above a certain number,\n"
    " and less than a number of points scored, then Enter those numbers below. To exit press 'x'\n",num_of_entries);

    if(getchar() == 'x')
    exit(0);

    scanf("\n%d%d", &filter, &filter2);
    for(i=0; i<num_of_entries; i++)
    {
        if(Data[i].foul>filter || Data[i].points< filter2)
        {
       printf("\nCode:%d\nFoul:%d\nPoints:%d\n",Data[i].code,Data[i].foul,Data[i].points);
        }
    }

};

