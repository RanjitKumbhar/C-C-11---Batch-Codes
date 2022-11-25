#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

#define PCount 3

void Accept_Products();
void Display_All_Products();

struct Product
{
        int P_Id;
        char Name[10];
        float Sales_Price;
        float Purchase_Price;
        int Stock;
};

struct Product P_Cart[PCount] = {};

int main()
{
        printf("\n\n ************** Welcome To Product Inventory System ************** \n");

        Accept_Products();

        printf("\n\n ======================================= \n");

        Display_All_Products();

        getch();
        return 0;
}

void Accept_Products()
{
        int i = 0;

        printf("\n Enter All Product Details => \n");

        for(i = 0; i < PCount; i++)
        {
                P_Cart[i].P_Id = 101 + i;

                printf("\n Enter Product ID %d Details => ", i + 101);
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

        return;
}

void Display_All_Products()
{
        int i = 0;

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

        return;
}
