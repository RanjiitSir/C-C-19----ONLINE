#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
        char Name[20] = "";
        char MyName[20] = "";

        printf("\n Enter Name = ");
        gets(Name);                         /// Fork
        printf("\n Enter New Name = ");
        gets(MyName);                       /// Infosystems

        printf("\n Name Entered is = %s.",Name);
        printf("\n New Name Entered is = %s.",MyName);

        strcpy(Name, MyName);

        getch();
        printf("\n\n =================================== \n");

        printf("\n After strcpy Call Name is = %s.",Name);
        printf("\n After strcpy Call New Name is = %s.",MyName);

        getch();
        return 0;
}
