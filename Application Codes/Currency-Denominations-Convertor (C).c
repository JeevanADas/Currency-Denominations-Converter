#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#define RCOINS 10
#define DCOINS 7
#define ECOINS 8
#define UCOINS 10
#define MAX 100000

int rcoins[RCOINS] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
int dcoins[DCOINS] = { 1, 2, 5, 10, 20, 50, 100 };
int ecoins[ECOINS] = { 1, 2, 5, 10, 20, 50, 100, 200 };
int ucoins[UCOINS] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000 };
/*for rupee*/
void findMinR(int cost)
{
    int test;
    int coinList[MAX] = { 0 };
    int i, k = 0;

    for (i = RCOINS - 1; i >= 0; i--)
    {
        int a=0;
        while (cost >= rcoins[i])
        {
            cost -= rcoins[i];
            coinList[k++] = rcoins[i];
            a=a+1;
        }
        if(a>0)
        {
        printf("we need %d units of %d Rupees denomination\n",a,rcoins[i]);
        }

    }
    getche();
    system("cls");
    printf("\n Press esc key to exit, otherwise, continue.");
    test=getche();
        if(test==27)
            exit(0);
        else
            return main();
}
/*for Dollar*/
void findMinD(int cost)
{
    int test;
    int coinList[MAX] = { 0 };
    int i, k = 0;

    for (i = DCOINS - 1; i >= 0; i--)
    {
        int a=0;
        while (cost >= dcoins[i])
        {
            cost -= dcoins[i];
            coinList[k++] = dcoins[i];
            a=a+1;
        }
        if(a>0)
        {
        printf("we need %d units of %d Dollar denomination\n",a,dcoins[i]);
        }
    }
    getche();
    system("cls");
    printf("\n Press esc key to exit, any other key to continue:");
    test=getche();
        if(test==27)
            exit(0);
        else
            return main();
}
/*for euro*/
void findMinE(int cost)
{
    int test;
    int coinList[MAX] = { 0 };
    int i, k = 0;

    for (i = ECOINS - 1; i >= 0; i--)
    {
        int a=0;
        while (cost >= ecoins[i])
        {
            cost -= ecoins[i];
            coinList[k++] = ecoins[i];
            a=a+1;
        }
        if(a>0)
        {
        printf("we need %d units of %d Euro denomination\n",a,ecoins[i]);
        }
    }
    getche();
    system("cls");
    printf("\n Press esc key to exit, any other key to continue:");
    test=getche();
        if(test==27)
            exit(0);
        else
            return main();
}
/*find dirham*/
void findMinU(int cost)
{
    int test;
    int coinList[MAX] = { 0 };
    int i, k = 0;

    for (i = UCOINS - 1; i >= 0; i--)
    {
        int a=0;
        while (cost >= ucoins[i])
        {
            cost -= ucoins[i];
            coinList[k++] = ucoins[i];
            a=a+1;
        }
        if(a>0)
        {
        printf("we need %d units of %d Dirham denomination\n",a,ucoins[i]);
        }
    }
    getche();
    system("cls");
    printf("\n Press esc key to exit, any other key to continue:");
    test=getche();
        if(test==27)
            exit(0);
        else
            return main();
}
/*usd to inr*/
void convD2R(int amt)
{
    int test;
    int cost=amt*72.36;
    int coinList[MAX] = { 0 };
    int i, k = 0;
    printf("The number of units of Rupee denominations needed to make $%d are as follows:\n",amt);
    for (i = RCOINS - 1; i >= 0; i--)
    {
        int a=0;
        while (cost >= rcoins[i])
        {
            cost -= rcoins[i];
            coinList[k++] = rcoins[i];
            a=a+1;
        }
        if(a>0)
        {
        printf("%d units of %d Rupees denomination.\n",a,rcoins[i]);
        }
    }
    getche();
    system("cls");
    printf("\n Press esc key to exit, any other key to continue:");
    test=getche();
        if(test==27)
            exit(0);
        else
            return main();
}
/*euro to inr*/
void convE2R(int amt)
{
    int test;
    int cost=amt*86.43;
    int coinList[MAX] = { 0 };
    int i, k = 0;
    printf("The number of units of Rupee denominations needed to make €%d are as follows:\n",amt);
    for (i = RCOINS - 1; i >= 0; i--)
    {
        int a=0;
        while (cost >= rcoins[i])
        {
            cost -= rcoins[i];
            coinList[k++] = rcoins[i];
            a=a+1;
        }
        if(a>0)
        {
        printf("%d units of %d Rupees denomination.\n",a,rcoins[i]);
        }
    }
    getche();
    system("cls");
    printf("\n Press esc key to exit, any other key to continue:");
    test=getche();
        if(test==27)
            exit(0);
        else
            return main();
}
/*Dirham to inr*/
void convU2R(int amt)
{
    int test;
    int cost=amt*19.70;
    int coinList[MAX] = { 0 };
    int i, k = 0;
    printf("The number of units of Rupee denominations needed to make AED %d are as follows:\n",amt);
    for (i = RCOINS - 1; i >= 0; i--)
    {
        int a=0;
        while (cost >= rcoins[i])
        {
            cost -= rcoins[i];
            coinList[k++] = rcoins[i];
            a=a+1;
        }
        if(a>0)
        {
        printf("%d units of %d Rupees denomination.\n",a,rcoins[i]);
        }
    }
    getche();
    system("cls");
    printf("\n Press esc key to exit, any other key to continue:");
    test=getche();
        if(test==27)
            exit(0);
        else
            return main();
}

int main(void)
{
    // input value
    int n;

    int currency;
    printf("1 for Rupee denominations\n2 for Dollar denominations\n3 for Euro denominations\n4 for Dirham denominations\n5 for USD to INR denominations\n6 for EUR to INR denominations\n7 for AED to INR denominations\n");
    printf("Enter one of the above options: ");
    scanf("%d",&currency);
    if(currency>7)
    {
        printf("Invalid input please enter the right input.");
        return 0;
    }
    printf("Enter the amount: ");
    scanf("%d",&n);
        switch(currency)
    {
        case 1: findMinR(n);break;
        case 2: findMinD(n);break;
        case 3: findMinE(n);break;
        case 4: findMinU(n);break;
        case 5: convD2R(n);break;
        case 6: convE2R(n);break;
        case 7: convU2R(n);break;
        default: return 0;
    }


}
