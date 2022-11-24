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
        struct Product PObj = {15, "Pen", 25, 20, 100}, Prod1;

        printf("\n 1st Product Details are => \n");

        printf("\n\t Product ID     = %d", PObj.P_Id);
        printf("\n\t Product Name   = %s", PObj.Name);
        printf("\n\t Sales Price    = %0.2f", PObj.Sales_Price);
        printf("\n\t Purchase Price = %0.2f", PObj.Purchase_Price);
        printf("\n\t Current Stock  = %d", PObj.Stock);

        printf("\n\n ======================================= \n");

        Prod1.P_Id = 25;
        strcpy(Prod1.Name, "BOOK");
        Prod1.Sales_Price = 100;
        Prod1.Purchase_Price = 90;
        Prod1.Stock = 20;

        printf("\n 2nd Product Details are => \n");

        printf("\n\t Product ID     = %d", Prod1.P_Id);
        printf("\n\t Product Name   = %s", Prod1.Name);
        printf("\n\t Sales Price    = %0.2f", Prod1.Sales_Price);
        printf("\n\t Purchase Price = %0.2f", Prod1.Purchase_Price);
        printf("\n\t Current Stock  = %d", Prod1.Stock);

        printf("\n\n ======================================= \n");

        getch();
        return 0;
}
