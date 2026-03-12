#include<stdio.h>
#include<conio.h>

#define True 1
#define False 0

typedef int BOOL;

int strlenX(char *);
BOOL Is_Palindrome(char *);

int main()
{
        char cArr[50] ={'\0'};
        BOOL Ret = False;

        printf("\n Enter a string : ");
        scanf("%[^\n]",cArr);   // gets(sArr);

        Ret = Is_Palindrome(cArr);

        if(Ret == True)
        {
            printf("\n Given String is Palindrome.");
        }
        else
        {
            printf("\n Given String Not Palindrome.");
        }

        _getch();
        return 0;
}


int strlenX(char *str)
{
        int len = 0;

        while(str[len] != '\0')
        {
            len++;
        }
        return len;
}

BOOL Is_Palindrome(char *str)
{
        char *end = str + strlenX(str) - 1;

        while(str < end)
        {
                if((*str != *end) && (*str != *end + 32) && (*str != *end - 32))
                {
                    break;
                }
                str++;
                end--;
        }

        if(str >= end)
            return True;
        else
            return False;
}
