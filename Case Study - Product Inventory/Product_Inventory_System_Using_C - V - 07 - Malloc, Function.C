#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void Accept_Products(struct Product*, int);
void Display_All_Products(struct Product*, int);

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
        int P_Count = 0;
        struct Product *Prod_Ptr = NULL;

        printf("\n Enter How Many Products Do you Have =  ");
        scanf("%d",&P_Count);               /// 3

        Prod_Ptr = (struct Product*)malloc (P_Count * sizeof(struct Product));

        printf("\n\n ************** Welcome To Product Inventory System ************** \n");

        Accept_Products( Prod_Ptr, P_Count );  /// Accept_Products(700 , 3 );

        printf("\n\n ======================================= \n");

        Display_All_Products( Prod_Ptr, P_Count );  /// Display_All_Products(700 , 3 );

        getch();
        return 0;
}

void Accept_Products(struct Product* P_Ptr, int PCnt)
{
        int i = 0;

        printf("\n Enter All Product Details => \n");

        for(i = 0; i < PCnt; i++)
        {
                P_Ptr[i].P_Id = 101 + i;

                printf("\n Enter Product ID %d Details => ", i + 101);
                fflush(stdin);

                printf("\n Enter Product Name = ");
                gets(P_Ptr[i].Name);

                printf("\n Enter Product Sales Price = ");
                scanf("%f",&P_Ptr[i].Sales_Price);

                printf("\n Enter Product Purchase Price = ");
                scanf("%f",&P_Ptr[i].Purchase_Price);

                printf("\n Enter Product Current Stock = ");
                scanf("%d",&P_Ptr[i].Stock);
        }

        return;
}

void Display_All_Products(struct Product* P_Ptr, int PCnt)
{
        int i = 0;

        printf("\n All Entered Product Details are => \n");

        for(i = 0; i < PCnt; i++)
        {
                printf("\n\t Product ID     = %d", P_Ptr[i].P_Id);
                printf("\n\t Product Name   = %s", P_Ptr[i].Name);
                printf("\n\t Sales Price    = %0.2f", P_Ptr[i].Sales_Price);
                printf("\n\t Purchase Price = %0.2f", P_Ptr[i].Purchase_Price);
                printf("\n\t Current Stock  = %d", P_Ptr[i].Stock);

                printf("\n\n ======================================= \n");
        }

        return;
}
