#include<stdio.h>
#include<conio.h>

int main()
{
    char Src[80] = "";
    int i = 0, j = 0;

    printf("\n\n Enter a string: ");
    gets(Src);

    printf("\n\n Given String: %s",Src);

    while(Src[i] != '\0')
    {
        if((Src[i] >= 'A' && Src[i] <= 'Z') || (Src[i] >= 'a' && Src[i] <= 'z') || (Src[i] >= '0' && Src[i] <= '9'))
        {
            Src[j] = Src[i];
            j++;
        }
        i++;
    }

    Src[j] = '\0';

    printf("\n\n=================================================");

    printf("\n\n Original String Without Special Symbol is : %s", Src);

    printf("\n\n=================================================");

    return 0;
}
