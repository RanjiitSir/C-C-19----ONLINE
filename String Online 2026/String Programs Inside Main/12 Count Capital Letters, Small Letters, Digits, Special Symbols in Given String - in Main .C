// Count Capital Letters  in Given String
#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[50] ={'\0'};
        int Cap_Cnt = 0,Sm_Cnt = 0, Dig_Cnt = 0, Sp_Cnt = 0, i = 0;

        printf("\n Enter a string : ");
        gets(cSrc);

        while(cSrc[i] != '\0')
        {
                    if( cSrc[i] >= 'A' && cSrc[i] <= 'Z')
                    {
                                Cap_Cnt++;
                    }
                    else if( cSrc[i] >= 'a' && cSrc[i] <= 'z')
                    {
                                Sm_Cnt++;
                    }
                    else if( cSrc[i] >= '0' && cSrc[i] <= '9')
                    {
                                Dig_Cnt++;
                    }
                    else
                    {
                                Sp_Cnt++;
                    }
                    i++;
        }

        printf("\n Count Of Capital Letters in Given String is = %d.", Cap_Cnt);
        printf("\n Count Of Small Letters in Given String is   = %d.", Sm_Cnt);
        printf("\n Count Of Digits in Given String is          = %d.", Dig_Cnt);
        printf("\n Count Of Special Symbols in Given String is = %d.", Sp_Cnt);


        getch();
        return 0;
}
