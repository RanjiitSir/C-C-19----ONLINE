#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = "";
    int i = 0, j = 0;

    printf("\n Enter a string : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        i++;
    }

    i--;

    while(j < i)
    {
        if(cSrc[i] != cSrc[j])
        {
            break;
        }

        j++;
        i--;
    }

    if(j < i)
    {
        printf("\n\n Given String is Not Palindrome!!!");
    }
    else
    {
        printf("\n\n Given String is Palindrome!!!");
    }

    getch();
    return 0;
}
