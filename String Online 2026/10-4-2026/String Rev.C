#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "", Tmp = '\0';
    int i = 0, j = 0;

    printf("\n Enter a string : ");
    gets(cSrc);    /// Dev C++ 1981

    while(cSrc[i] != '\0')
    {
        i++;
    }

    i--;

    while(j < i)
    {
        Tmp = cSrc[i];
        cSrc[i] = cSrc[j];
        cSrc[j] = Tmp;
        j++;
        i--;
    }

    printf("\n\n Given String After Reverse is = %s !!!",cSrc);   /// 1891 ++C veD

    getch();
    return 0;
}
