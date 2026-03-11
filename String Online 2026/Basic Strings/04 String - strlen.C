#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int Len = 0;
    char Name[8] = "Unknown";

    printf("\n String Value = %s.", Name);

    printf("\n Enter Your Name = ");
    gets(Name);

    Len = strlen(Name);

    printf("\n Size of Name string is = %d.\n",sizeof(Name)); /// 8

    printf("\n Given String is => %s!!!\n",Name);  /// Fork Infosystems

    getch();

    printf("\n Length of Given String is = %d.", Len);  /// 16 or 8 Or 7

    getch();
    return 0;
}
