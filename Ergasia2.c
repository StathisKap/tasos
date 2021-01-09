#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct polites
{
    char eponymo[30];
    float vat1,vat2,vat3;
};

struct polites* Enter_Data()
{
    int num_of_salesmen;
    struct polites salesmen_data[num_of_salesmen];
    int i=0;
    char *name_buffer = malloc(30);
 
    printf("Enter the Number of Entries you'd like to add: ");
    scanf("%d",&num_of_salesmen);

   
   while(i++ < num_of_salesmen)
   {
       printf("\nEnter the Last Name of Salesman %d\n",i);
       scanf("\n%s",name_buffer);
       strcpy(salesmen_data[i].eponymo,name_buffer);
       
       printf("Enter the First Sale of %s\n",salesmen_data[i].eponymo);
       scanf("\n%f",&salesmen_data[i].vat1);

       printf("Enter the Second Sale of %s\n",salesmen_data[i].eponymo);
       scanf("\n%f",&salesmen_data[i].vat2);
        
       printf("Enter the Third Sale of %s\n",salesmen_data[i].eponymo);
       scanf("\n%f",&salesmen_data[i].vat3);
  }

        printf("\n\nThank You\n\n");
};

void Read_Data(struct polites *Data)
{

    size_t num_of_salesmen = sizeof(*Data)/sizeof(Data[0]);
    int i,filter;
    
    printf("Number of Salesmen is %ld. If you'd like to see the ones with an average of over a certain amount,\n"
    "then Enter that amount below. To exit press 'x'\n",num_of_salesmen);

    if(getchar() == 'x')
    exit(0);

    scanf("\n%d", &filter);
    for(i=0; i<num_of_salesmen; i++)
    {
        int avg = (Data[i].vat1 + Data[i].vat2 + Data[i].vat3)/3;
        if(avg >filter)
        {
       printf("Last Name:%s\nSale 1:%f€\nSale 2:%f€\nSale 3:%f€\n\n",Data[i].eponymo,Data[i].vat1,Data[i].vat2,Data[i].vat3);
        }
    }

};

int main()
{
    int num_of_entries;
    struct polites *Data = Enter_Data();
    Read_Data(Data);

    return 0;
}