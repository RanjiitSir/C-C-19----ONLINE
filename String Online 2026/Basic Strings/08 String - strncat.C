#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
        char FirstName[20] = "";
        char LastName[20] = "";

        printf("\n Enter First Name = ");
        gets(FirstName);                        /// Harry
        printf("\n Enter Last Name = ");
        gets(LastName);                         /// Potter

        printf("\n First Name Entered is = %s.",FirstName);     /// Harry
        printf("\n Last Name Entered is = %s.",LastName);       /// Potter

        strncat(FirstName, LastName, 3);

        getch();
        printf("\n\n =================================== \n");

        printf("\n After strncat Call First Name Entered is = %s.",FirstName);  /// HarryPot
        printf("\n After strncat Call Last Name Entered is = %s.",LastName);    /// Potter

        getch();
        return 0;
}
