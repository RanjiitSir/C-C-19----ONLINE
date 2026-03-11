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
        gets(MyName);                       /// Infosystems, Karad.

        printf("\n Name Entered is = %s.",Name);
        printf("\n New Name Entered is = %s.",MyName);

        strncat(Name, MyName, 11);

        getch();
        printf("\n\n =================================== \n");

        printf("\n After strncat Call Name is = %s.",Name);         /// Infosystems
        printf("\n After strncat Call New Name is = %s.",MyName);   /// Infosystems, Karad.

        getch();
        return 0;
}
