///////////////////// Documentation Section //////////////////
//
//  Statement :
//  Author :
//  I/P :
//  O/P :
//  Description :
//
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
                    int N1 = 0, N2 = 0, Res = 0;

                    printf("\n Enter Number 1 = ");
                    scanf("%d",&N1);
                    printf("\n Enter Number 2 = ");
                    scanf("%d",&N2);

                    Res = N1 + N2;

                    printf("\n\n Result is = %d.\n", Res);

                    printf("\n Enter Number 1 = ");
                    scanf("%d",&N1);
                    printf("\n Enter Number 2 = ");
                    scanf("%d",&N2);

                    Res = N1 - N2;

                    printf("\n\n Result is = %d.\n", Res);

                    printf("\n Enter Number 1 = ");
                    scanf("%d",&N1);
                    printf("\n Enter Number 2 = ");
                    scanf("%d",&N2);

                    Res = N1 * N2;

                    printf("\n\n Result is = %d.\n", Res);

                    printf("\n Enter Number 1 = ");
                    scanf("%d",&N1);
                    printf("\n Enter Number 2 = ");
                    scanf("%d",&N2);

                    Res = N1 / N2;

                    printf("\n\n Result is = %d.\n", Res);

                    getch();
                    return 0;
}
