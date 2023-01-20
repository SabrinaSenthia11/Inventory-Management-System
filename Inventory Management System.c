#include <stdio.h>
struct customer
{

    char name[50];
    int number;
    int price;
    int quantity;
    int rack;
};

struct customer b[50];
int p=0;

int load_data()
{
    strcpy(b[0].name,"Monitor");
    b[0].number = 1;
    b[0].price = 6000;
    b[0].quantity = 6;
    b[0].rack = 8;

    strcpy(b[1].name,"Mouse");
    b[1].number =2;
    b[1].price = 350;
    b[1].quantity = 2;
    b[1].rack = 3;

    strcpy(b[2].name,"Keyboard");
    b[2].number = 3;
    b[2].price = 550;
    b[2].quantity = 8;
    b[2].rack = 5;

    strcpy(b[3].name,"Speaker");
    b[3].number =4;
    b[3].price = 3000;
    b[3].quantity = 2;
    b[3].rack = 6;
    p =4;
}
int customer_login()
{
    system("cls");
    int customer;
    printf("\t\t\t########  Welcome to our online Shop #######\n\n");
    printf("\nPress 1 : View Product Name\nPress 2 : Buy Product \nPress 3 : Check bill Report\n");
    printf("Enter Your Selection\n");
    scanf("%d",&customer);
    if(customer==1)
    {
        system("cls");
        int i;

            printf("###Welcome to our  Product###\n\n");
            for(i=0; i<p; i++)
            {
                printf("Product Name is :%s\n", b[i].name);
                printf("Serial Number   :%d\n", b[i].number);
                printf("Product Price   :%d\n", b[i].price);
                printf("Rack Number     :%d\n\n\n", b[i].rack);
            }


            getch();

    }
    if(customer==2)
    {
        system("cls");
        int buy,i,q;
        system("cls");
        printf("\t\t\t\tWelcome sir\n\n");


            printf("### This is our Product ###\n\n");
            for(i=0; i<p; i++)
            {
                printf("Product Name is :%s\n", b[i].name);
                printf("Serial Number   :%d\n", b[i].number);
                printf("Product Price   :%d\n", b[i].price);
                printf("Rack Number     :%d\n\n\n", b[i].rack);
            }
        printf("Which Product You want to Bye\nEnter the serial number\n");
        scanf("%d",&buy);
        printf("How much %s you want to bye\n",b[i].name);
        scanf("%d",&q);
        printf("Product Buying process is successful\n\n Come back again\n\n Thank you");
        getch();
        main();

    }
    if(customer==3)
    {
        printf("please wait your bill report is processing\n");
        getch();
        main();
    }

}

int admin_menu()
{
    int c;
    for( ; ; )
    {
        system ("cls");


        printf("\n\t Main Menu\n");
        printf("\nPress 1 : Add Product Name\nPress 2 : View Product \nPress 3 : Modify Product \nPress 4 : Search Product\nPress 5 : Check Notification \n");
        scanf("%d", &c);
        if(c==1)
        {
            printf("Enter Product  information: \n");
            printf("Enter Product Name: \n");
            scanf("%s", &b[p].name);
            printf("Enter Serial Number:\n");
            scanf("%d", &b[p].number);
            printf("Enter Product Price: \n");
            scanf("%d", &b[p].price);
            printf("Enter Product Quantity:\n");
            scanf("%d", &b[p].quantity);
            printf("Enter Product rack:\n");
            scanf("%d", &b[p].rack);

            p++;


        }

        else if(c==2)
        {
            int i;

            printf("###Welcome to our  Product###\n\n");
            for(i=0; i<p; i++)
            {
                printf("Product Name is :%s\n", b[i].name);
                printf("Serial Number   :%d\n", b[i].number);
                printf("Product Price   :%d\n", b[i].price);
                printf("Product Quantity:%d\n", b[i].quantity);
                printf("Rack Number     :%d\n\n\n", b[i].rack);
            }


            getch();

        }
        else if(c==3)
        {
            int a,ch,i;
            for(i=0; i<p; i++)
            {
                printf("Product No %d\n",i+1);
                printf("Product Name is :%s\n", b[i].name);
                printf("Serial Number   :%d\n", b[i].number);
                printf("Product Price   :%d\n", b[i].price);
                printf("Product Quantity:%d\n", b[i].quantity);
                printf("Rack Number     :%d\n", b[i].rack);
            }
            printf("Enter Product No : \n\n");
            scanf("%d",&ch);
            for(; ;)
            {
                printf("\n\nTo Modify name press    1 \nTo Modify  Serial number press 2 \nTo Modify Product Price press 3 \nTo Modify Product Quantity press 4 \nTo Modify Product Rack press 5\nTo Exit Press 0\n");

                scanf("%d", &a);

                if(a==1)
                {
                    printf("Enter Your New information\n");
                    scanf("%s", &b[ch-1].name);
                }
                else if(a==2)
                {
                    scanf("%d", &b[ch-1].number);
                }

                else if(a==3)
                {
                    printf("Enter Your New information\n");
                    scanf("%d", &b[ch-1].price);
                }

                else if(a==4)
                {
                    printf("Enter Your New information\n");
                    scanf("%d", &b[ch-1].quantity);
                }

                else if(a==5)
                {
                    printf("Enter Your New information\n");
                    scanf("%d", &b[ch-1].rack);
                }
                else if (a == 0)
                {
                    break;
                }

            }

        }
        else if(c == 4)
        {

            int i;
            char pname[100];
            printf("***Welcome to the Search Product***\n\n\n");
            printf("***All Product List***\n\n\n");

            for(i=0; i<p; i++)
            {
                printf("Product No %d\n",i+1);
                printf("Product Name is :%s\n", b[i].name);
                printf("Serial Number   :%d\n", b[i].number);
                printf("Product Price   :%d\n", b[i].price);
                printf("Product Quantity:%d\n", b[i].quantity);
                printf("Rack Number     :%d\n\n\n", b[i].rack);
            }
            printf("Enter Product name : \n\n");
           scanf("%s",&pname);
            for(i=0; i<p; i++)
            {
                if (strcmp(pname, b[i].name) == 0)
                {
                    printf("Product  is available \n");
                    printf("Product No %d\n",i+1);
                    printf("Product Name is :%s\n", b[i].name);
                    printf("Serial Number   :%d\n", b[i].number);
                    printf("Product Price   :%d\n", b[i].price);
                    printf("Product Quantity:%d\n", b[i].quantity);
                    printf("Rack Number     :%d\n", b[i].rack);

                }
                    getch();


            }




        }
        else if(c==5)
        {
            int i;
            printf("\t\t\t\t\tCheck Notification\n\n");
            for(i=0; i<p; i++)
            {

                if(b[i].quantity<=5)
                printf(" \t\t\t\tYour stock is low Please Add the %s \n\n",b[i].name);

            }


        }
        getch();

    }
}
int about_us()
{

    system ("cls");
    printf("\t\t\t\t\tAbout me\n\n\n");
    printf("\tName : Sabrina Senthia \t Gmail:senthiajani20@gmail.com\n\n");
    getch();
    main();
}






int admin_login()
{
    char name[100], password[100];

    printf("\n\t\t\t\t\tWelcome to Admin Menu\n\n");
    printf("\t\t\t\t\tEnter the user name: ");
    scanf("%s", &name);
    if(strcmp(name, "Sabrina")==0)
    {
        printf("\t\t\t\t\t\tEnter password:");
        scanf("%s", &password);

        if(strcmp(password, "123")==0)
        {
            admin_menu();


        }
    }



}

int main()
{
    system("cls");

    load_data();
    int c;

    printf("\t\t\t\t\tWelcome to my    @@ INVENTORY MANAGEMENT SYSTEM @@\n\n");
    printf("\t\t\t\t\tPress 1 for admin: \n\t\t\t\t\tPress 2 for customer: \n\t\t\t\t\tPress 3 for About me: ");

    scanf("%d", &c);

    if(c==1)
    {
        printf("\n\t\t\t\t\t\tWelcome to admin part \n");
        admin_login();
    }
    else if(c==2)
    {
        printf("\;n\t\t\t\t\t\tHello from customer\n");
        customer_login();
    }
    else if(c==3)
    {

        printf("\n\t\t\t Introduce our member:\n\n\n");
         about_us();
    }
    else
    {
        printf("Invalid choice");
    }


}

