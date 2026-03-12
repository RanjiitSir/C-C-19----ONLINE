#include<stdio.h>
#include<conio.h>

int strlenX(char[]);

int main()
{
        char cSrc[20] ={'\0'};
        int Len = 0;

        printf("\n Enter a string : ");
        gets(cSrc);

        Len = strlenX(cSrc);

        printf("\n  Length of given String is = %d",Len);

        getch();
        return 0;
}

int strlenX(char inStr[])
{
        int Cnt = 0;

        printf("\n Size = %d.\n", sizeof(inStr));   ///4

        while(inStr[Cnt] != '\0')
        {
                Cnt++;
        }

        return Cnt;
}
