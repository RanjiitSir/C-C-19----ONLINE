#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

float  Calculate_Tot_Per( int *Tot, int **iMarks )
{
                int  i = 0;
                float Per = 0.0;

                for(i = 0; i < 3; i++)
                {
                            *Tot +=  (*iMarks)[i];                         //  OR  // *Tot += *((*iMarks)+i);
                }

                Per = (((float) *Tot) *100) / 300 ;

                return  Per;
}

int main()
{
            int  i = 0, Total = 0;
            float Per = 0.0;

            int *SubMarks = NULL;

            SubMarks = (int*)malloc(sizeof(int) * 3);

            for(i = 0; i < 3; i++)
            {
                        printf("\n Enter %d Subject Marks = ", i+1);
                        scanf("%d",&SubMarks[i]);
            }

            Per = Calculate_Tot_Per(&Total , &SubMarks);

            printf("\n Total Marks Of Given Student are = %d.",Total);
            printf("\n Percentage Of Given Student is = %0.2f.",Per);

            getch();
            return 0;
}
