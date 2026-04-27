#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fp;
    char word[50];

    fp = fopen("data.txt", "r"); // Open in read mode
    f//p = fopen("MyFile.txt", "r"); // Unknown FILE

    if (fp == NULL)
    {
        printf("Cannot open file!\n");
        return 1;
    }

    while (fscanf(fp, "%s", word) != EOF)
    {
        // Read one word at a time
        printf("%s ", word);
    }

    fclose(fp);

    return 0;
}
