#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void Create_Product_Cart(struct Product**);
void Accept_Products(struct Product*);
void Search_Product(struct Product*);
void Update_Product(struct Product*);
void Find_Stock(struct Product*);
void Display_All_Products(struct Product*);

int P_Count = 0;

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
        char ch = '\0';
        int Choice = 0;
        struct Product *Prod_Ptr = NULL;

        Create_Product_Cart(&Prod_Ptr);

        for(;;)
        {
                system("cls");
                printf("\n\n ************** Welcome To Product Inventory System ************** \n");

                printf("\n\t 1. Accept Products \n\t 2. Search Product \n\t 3. Update Product \n\t 4. Find Stock \n\t 5. Display All Products \n\t 6. Exit \n");
                printf("\n Enter Your Choice => ");
                scanf("%d",&Choice);

                switch(Choice)
                {
                        case 1 :
                                Accept_Products(Prod_Ptr);
                                getch();
                                fflush(stdin);
                                break;

                        case 2 :
                                Search_Product(Prod_Ptr);
                                getch();
                                fflush(stdin);
                                break;

                        case 3 :
                                Update_Product(Prod_Ptr);
                                getch();
                                fflush(stdin);
                                break;

                        case 4 :
                                Find_Stock(Prod_Ptr);
                                getch();
                                fflush(stdin);
                                break;

                        case 5 :
                                Display_All_Products(Prod_Ptr);
                                getch();
                                fflush(stdin);
                                break;

                        case 6 :
                                printf("\n Do You Really Want To Exit ???\n");
                                printf("\n Press 'Y' for Yes & 'N' for No => ");

                                ch = getche();

                                if(ch == 'y' || ch == 'Y')
                                {
                                        goto Thanks;
                                }

                                fflush(stdin);
                                break;

                        default :
                                printf("\n Invalid Choice \n");
                                getch();
                                fflush(stdin);
                                break;
                }
        }

        Thanks:
            printf("\n Thanks For Using FORK INFOSYSTEMS Product Inventory System \n ");

            getch();
            return 0;
}

void Create_Product_Cart(struct Product** PPtr)
{
        printf("\n Enter How Many Products Do you Have =  ");
        scanf("%d",&P_Count);               /// 3

        *PPtr = (struct Product*) malloc (P_Count * sizeof(struct Product));

        return;
}

void Accept_Products(struct Product* P_Ptr)
{
        int i = 0;
        static int Flag = 0;
        char ch = '\0';

        if(Flag == 1)
        {
                printf("\n All Product Details are Entered Already,Do You Want ToReEnter Them ???\n");
                printf("\n Press 'Y' for Yes & 'N'for No => ");

                ch = getche();

                if(ch == 'n' || ch == 'N')
                {
                        return;
                }
        }
        else
        {
                printf("\n Enter All Product Details => \n");
        }

        for(i = 0; i < P_Count; i++)
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

        Flag = 1;

        return;
}

void Display_All_Products(struct Product* P_Ptr)
{
        int i = 0;

        printf("\n All Entered Product Details are => \n");

        for(i = 0; i < P_Count; i++)
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

void Search_Product(struct Product* P_Ptr)
{
        printf("\n Search Product Function Under Development \n");
        return;
}

void Update_Product(struct Product* P_Ptr)
{
        printf("\n Update Product Function Under Development \n");
        return;
}

void Find_Stock(struct Product* P_Ptr)
{
        printf("\n Find Stock Function Under Development \n");
        return;
}
