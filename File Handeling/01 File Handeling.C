#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fp; // Step 1: Declare file pointer

    fp = fopen("Fork.txt", "r"); // Step 2: Open in read mode

    if (fp == NULL)
    { // Step 3: Always check for NULL
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello, File!\n"); // Step 4: Write to file
    fprintf(fp, "Welcome to C.\n");

    fclose(fp); // Step 5: ALWAYS close

    printf("File written successfully.\n");

    return 0;
}
