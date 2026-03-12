#include<stdio.h>
#include<conio.h>

int Word_Count(char *);

int main()
{
        int WCnt = 0;
        char Str[40] = {};

        printf("\n Enter an String to Count Words = ");
        gets(Str);

        WCnt = Word_Count(Str);

        printf("\n No. of Words in Given String are = %d.", WCnt);

        _getch();
        return 0;
}

int Word_Count(char *Src)
{
        int i = 0, Cnt = 0;

        while(Src[i] != '\0')
        {
            if(Src[i] == ' ' || Src[i] == ',' || Src[i] == '.')
            {
                i++;
                continue;
            }

            Cnt++;

            while( Src[i] != ' ' && Src[i] != '.' && Src[i] != ',' && Src[i] != '\0')
            {
                i++;
            }
        }

        return Cnt;
}
