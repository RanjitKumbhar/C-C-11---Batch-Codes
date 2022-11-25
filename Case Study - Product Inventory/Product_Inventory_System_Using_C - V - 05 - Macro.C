#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define PCount 5

struct Product
{
        int P_Id;
        char Name[10];
        float Sales_Price;
        float Purchase_Price;
        int Stock;
};

int main()
{
        int i = 0;
        struct Product P_Cart[PCount] = {};

        printf("\n\n ************** Welcome To Product Inventory System ************** \n");

        printf("\n Enter All Product Details => \n");

        for(i = 0; i < PCount; i++)
        {
                P_Cart[i].P_Id = 101 + i;

                printf("\n Enter Product ID %d Details => ");
                fflush(stdin);

                printf("\n Enter Product Name = ");
                gets(P_Cart[i].Name);

                printf("\n Enter Product Sales Price = ");
                scanf("%f",&P_Cart[i].Sales_Price);

                printf("\n Enter Product Purchase Price = ");
                scanf("%f",&P_Cart[i].Purchase_Price);

                printf("\n Enter Product Current Stock = ");
                scanf("%d",&P_Cart[i].Stock);
        }

        printf("\n\n ======================================= \n");

        printf("\n All Entered Product Details are => \n");

        for(i = 0; i < PCount; i++)
        {
                printf("\n\t Product ID     = %d", P_Cart[i].P_Id);
                printf("\n\t Product Name   = %s", P_Cart[i].Name);
                printf("\n\t Sales Price    = %0.2f", P_Cart[i].Sales_Price);
                printf("\n\t Purchase Price = %0.2f", P_Cart[i].Purchase_Price);
                printf("\n\t Current Stock  = %d", P_Cart[i].Stock);

                printf("\n\n ======================================= \n");
        }

        getch();
        return 0;
}
