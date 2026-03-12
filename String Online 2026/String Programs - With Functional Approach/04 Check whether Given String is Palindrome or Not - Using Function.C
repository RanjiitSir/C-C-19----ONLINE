#include<stdio.h>
#include<conio.h>

int isPalindrome(char *);

int main()
{
            char cSrc[20] = "";
            int Res = 0;

            printf("\n Enter a string : ");
            gets(cSrc);

            Res = isPalindrome(cSrc);

            if(Res == 1)
            {
                    printf("\n Given String is Palindrome.");
            }
            else
            {
                    printf("\n Given String is Not Palindrome.");
            }

            getch();
            return 0;
}

int isPalindrome(char *Str)
{
        int  i = 0, j = 0;

        while(Str[j] != '\0')
        {
                j++;
        }
        j = j - 1;

        while(i < j)
        {
                    if(Str[i] != Str[j])
                    {
                            break;
                    }
                    i++;
                    j--;
        }

        if(i >= j)
        {
                return 1;
        }

        return 0;
}
