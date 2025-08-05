/// Area Of Circle
#include<stdio.h>
#include<conio.h>

int main()
{
    float Rad = 0, Area = 0;

    printf("\n Enter Radius of Circle : ");
    scanf("%f",&Rad);

    Area = 3.14 * Rad * Rad;

    printf("\n Area of Circle with %0.2f = %0.2f.", Rad, Area);

    getch();
    return 0;
}

