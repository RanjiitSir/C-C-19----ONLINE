//Check Whether Given String is PALINDROME or NOT - in Main
#include<stdio.h>
#include<conio.h>

int main()
{
            char cSrc[20] ={'\0'};
            int i = 0, j = 0;

            printf("\n Enter a string : ");
            gets(cSrc);

            for(; cSrc[i] != '\0'; i++);

            for(i = i - 1; i >= j; i--, j++)
            {
                if(cSrc[i] != cSrc[j])
                {
                    break;
                }
            }

            if( i < j )
            {
                    printf("\n Given String is Palindrome");
            }
            else
            {
                    printf("\n Given String is Not Palindrome");
            }

            getch();
            return 0;
}
