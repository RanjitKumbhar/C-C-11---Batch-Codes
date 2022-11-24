#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

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
        struct Product PObj;

        printf("\n\n ************** Welcome To Product Inventory System ************** \n");

        printf("\n Enter Product Details => \n");

        printf("\n Enter Product ID = ");
        scanf("%d",&PObj.P_Id);

        fflush(stdin);

        printf("\n Enter Product Name = ");
        gets(PObj.Name);

        printf("\n Enter Product Sales Price = ");
        scanf("%f",&PObj.Sales_Price);

        printf("\n Enter Product Purchase Price = ");
        scanf("%f",&PObj.Purchase_Price);

        printf("\n Enter Product Current Stock = ");
        scanf("%d",&PObj.Stock);

        printf("\n\n ======================================= \n");

        printf("\n Product Details are => \n");

        printf("\n\t Product ID     = %d", PObj.P_Id);
        printf("\n\t Product Name   = %s", PObj.Name);
        printf("\n\t Sales Price    = %0.2f", PObj.Sales_Price);
        printf("\n\t Purchase Price = %0.2f", PObj.Purchase_Price);
        printf("\n\t Current Stock  = %d", PObj.Stock);

        printf("\n\n ======================================= \n");

        getch();
        return 0;
}
