///////////////////// Documentation Section //////////////////
//
//  Statement :
//  Author :
//  I/P :
//  O/P:
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

                    if(N1 > N2)
                    {
                            printf("\n Number %d is Greater than%d",N1,N2);
                    }
                    else
                    {
                            printf("\n Number %d is Greater than%d",N2,N1);
                    }

                    printf("\n Thanks!!!");
                    printf("\n Stay Safe Stay Home");
                    putch('\n');
                    getche();
                    printf("\n God Bless You!!!");

                    getch();
                    return 0;
}
