#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("data.txt", "r");

    if (fp == NULL)
    {
        printf("Error!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        // Read one character at a time
        putchar(ch); // Print to console
    }

    fclose(fp);

    return 0;
}
