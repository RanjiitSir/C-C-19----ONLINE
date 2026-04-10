#include<stdio.h>
#include<conio.h>

void Rev_Last_Word(char *);

int main()
{
    char Src[200] ={'\0'};

    printf("\n Enter a string : ");
    gets(Src);          /// " ,   .    !   ?  Fork   Infosystems, Karad... Reg. No.   58282462.   Addr. : Vidyanagar  , Karad  . "

    Rev_Last_Word(Src);

    printf("\n\n After Last Word Reversed String is : %s",Src);

    getch();
    return 0;
}

void Rev_Last_Word(char *str)
{
    int i = 0;
    char *Start = NULL, *End = NULL;

    while(str[i] != '\0')
    {
        if( str[i] == ' ' || str[i] == ',' || str[i] == '.' )        /// Skip Continuous Separators
        {
            i++;
            continue;
        }

        if(str[i] != '\0')
        {
            Start = &(str[i]);
        }

        while( str[i] != ' ' && str[i] != ',' && str[i] != '.' && str[i] != '\0' )      /// Skip Letter in Single Word
        {
            i++;
        }

        End =  &(str[i]) - 1;
    }

    char Temp = '\0';

    while(Start < End)
    {
            Temp = *Start;
            *Start = *End;
            *End = Temp;

            Start++;
            End--;
    }

    return;
}

