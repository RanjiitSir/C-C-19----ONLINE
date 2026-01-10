#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

void Swap(int*, int*);

int  main()
{
    int N1 = 0, N2 = 0;

    cout << "\n Enter 1st Number : ";
    cin >> N1;
    cout << "\n Enter 2nd Number : ";
    cin >> N2;

    cout << "\n\n Before Swap => Number1 = " << N1 << ", Number2 = " << N2 << ".";

    Swap(&N1, &N2);

    cout << "\n\n After Swap => Number1 = " << N1 << ", Number2 = " << N2 << ".";

    getch();
    return 0;
}

void Swap(int* P1, int* P2)
{
    int Temp = 0;

    cout << "\n Inside Swap Function...\n";

    Temp = *P1;
    *P1 = *P2;
    *P2 = Temp;
}
