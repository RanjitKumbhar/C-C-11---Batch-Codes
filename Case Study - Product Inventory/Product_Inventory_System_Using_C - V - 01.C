#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

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
        struct Product PObj = {15, "Pen", 25, 20, 100};

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
