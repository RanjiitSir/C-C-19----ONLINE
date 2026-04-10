#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "", cDest[20] = "";
    int i = 0, j = 0;

    printf("\n Enter a string : ");
    gets(cSrc);    /// Dev C++ 1981

    while(cSrc[i] != '\0')
    {
        i++;
    }

    i--;

    while(i >= 0)
    {
        cDest[j] = cSrc[i];
        i--;
        j++;
    }

    printf("\n Given String is = %s !!!",cSrc);
    printf("\n Reverse Copied String is = %s $$$",cDest);

    getch();
    return 0;
}
