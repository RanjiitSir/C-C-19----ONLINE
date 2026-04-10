#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "", cDest[20] = "";
    int i = 0;

    printf("\n Enter a string : ");
    gets(cSrc);    /// Dev C++ 1981

    while(cSrc[i] != '\0')
    {
        cDest[i] = cSrc[i];
        i++;
    }

    printf("\n Given String is = %s !!!",cSrc);
    printf("\n Copied String is = %s $$$",cDest);

    getch();
    return 0;
}
