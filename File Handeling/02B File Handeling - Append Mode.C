#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fp; // Step 1: Declare file pointer

    fp = fopen("Fork.txt", "a"); // Step 2: Open in append mode
    //fp = fopen("ForkInfosystems.txt", "a"); // Step 2: Open in append mode NEW File Created

    if (fp == NULL)
    { // Step 3: Always check for NULL
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Goto Pune\n"); // Step 4: Write to file
    fprintf(fp, "Get an opportunity to work.\n");

    fclose(fp); // Step 5: ALWAYS close

    printf("File written successfully.\n");

    return 0;
}
