#include<stdio.h>
#include<conio.h>

int strlenX(char *);
void StrRevX(char *);

int main()
{
        char cArr[50] ={'\0'};

        printf("\n Enter a string : ");
        scanf("%[^\n]",cArr);   // gets(sArr);

        StrRevX(cArr);

        printf("\n\n Reversed String is : %s",cArr);

        getch();
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

void StrRevX(char *str)
{
        char temp = '\0';
        char *end = str + strlenX(str) - 1;

        while(str < end)
        {
                temp = *str;
                *str = *end;
                *end = temp;

                str++;
                end--;
        }
}
