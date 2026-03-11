#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
        char Name[20] = "Unknown Value";
        char FNm[20] = "Potter";

        printf("\n Name String Value = %s.", Name);
        printf("\n FNm String Value = %s.", FNm);

        getch();

        strcpy(Name, "Harry");
        printf("\n\n New Name String Value = %s.", Name);
        printf("\n New FNm String Value = %s.", FNm);

        getch();

        strcpy(Name, FNm);
        printf("\n\n Updated Name String Value = %s.", Name);
        printf("\n Updated ** FNm String Value = %s.", FNm);

        getch();
        return 0;
}
