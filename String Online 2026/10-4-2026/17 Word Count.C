#include<stdio.h>
#include<conio.h>

int Word_Count(char *);

int main()
{
    char Src[200] ={'\0'};

    printf("\n Enter a string : ");
    gets(Src);          /// " ,   .    !   ?  Fork   Infosystems, Karad... Reg. No.   58282462.   Addr. : Vidyanagar  , Karad  . "

    printf("\n\n Word Count in String is : %d",Word_Count(Src));

    getch();
    return 0;
}

int Word_Count(char *str)
{
    int i = 0, WCnt = 0;

    while(str[i] != '\0')
    {
        if( str[i] == ' ' || str[i] == ',' || str[i] == '.' || str[i] == '?' || str[i] == '!'  )        /// Skip Continuous Separators
        {
            i++;
            continue;
        }

        WCnt++;

        while( str[i] != ' ' && str[i] != ',' && str[i] != '.' && str[i] != '\0' && str[i] != '!' && str[i] != '?' )      /// Skip Letter in Single Word
        {
            i++;
        }
    }

    return WCnt;
}

