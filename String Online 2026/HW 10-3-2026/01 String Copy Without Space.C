#include<stdio.h>
#include<conio.h>

int main()
{
    char Src[80] = "", Dest[80] = "";
    int i = 0, j = 0;

    printf("\n\n Enter a string: ");
    gets(Src);

    while(Src[i] != '\0')
    {
        if(Src[i] != ' ')
        {
            Dest[j] = Src[i];
            j++;
        }
        i++;
    }

    Dest[j] = '\0';

    printf("\n\n=================================================");

    printf("\n\n Original String is : %s", Src);
    printf("\n\n New String Without any Space : %s", Dest);

    printf("\n\n=================================================");

    return 0;
}
