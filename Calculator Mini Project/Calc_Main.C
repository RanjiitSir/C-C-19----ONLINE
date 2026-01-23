#include"Helpers\Fork_Calc_Functions.H"

int main()
{
    char Choice = '\0';
    int N1 = 0, N2 = 0;

    while(1)
    {
        printf("\n\n ******** Welcome To Fork Calculator ******** \n");

        printf("\n Choices =>");
        printf("\n\t 1. Addition");
        printf("\n\t 2. Subtraction");
        printf("\n\t 3. Multiplication");
        printf("\n\t 4. Division");
        printf("\n\t 5. Remainder");
        printf("\n\t 6. Exit");
        printf("\n\n Enter Your Choice : ");
        Choice = getche();

        printf("\n\n ========== ******* ========== \n");

        switch(Choice)
        {
            case '1':
                printf("\n Enter 1st Number: ");
                scanf("%d",&N1);
                printf("\n Enter 2nd Number: ");
                scanf("%d",&N2);

                printf("\n Addition : %d + %d = %d.", N1, N2, Add(N1, N2));
                getch();
                system("cls");

                break;

            case '2':
                printf("\n\n Enter 1st Number: ");
                scanf("%d",&N1);
                printf("\n Enter 2nd Number: ");
                scanf("%d",&N2);

                printf("\n Subtraction : %d - %d = %d.", N1, N2, Subtract(N1, N2));
                getch();
                system("cls");

                break;

            case '3':
                printf("\n\n Enter 1st Number: ");
                scanf("%d",&N1);
                printf("\n Enter 2nd Number: ");
                scanf("%d",&N2);

                printf("\n Multiplication : %d * %d = %d.", N1, N2, Multiply(N1, N2));
                getch();
                system("cls");

                break;

            case '4':
                printf("\n\n Enter 1st Number: ");
                scanf("%d",&N1);
                printf("\n Enter 2nd Number: ");
                scanf("%d",&N2);

                printf("\n Division : %d / %d = %d.", N1, N2, Division(N1, N2));
                getch();
                system("cls");

                break;

            case '5':
                printf("\n\n Enter 1st Number: ");
                scanf("%d",&N1);
                printf("\n Enter 2nd Number: ");
                scanf("%d",&N2);

                printf("\n Remainder : %d %% %d = %d.", N1, N2, Modulo(N1, N2));
                getch();
                system("cls");

                break;

            case '6':
                fflush(stdin);
                printf("\n Are you sure do you want to quit??? (Yes/ No) : ");
                Choice = getchar();

                if(Choice == 'y'|| Choice == 'Y')
                {
                                goto Dwn;
                }

                system("cls");
                break;

            default:
                printf("\n INVALID CHOICE!!!");
                getch();
                system("cls");

                break;
        }
    }

    Dwn:
        printf("\n ========== ******* ========== \n");
        printf("\n Thanks for using our calculator service!!!\n");

    getch();
    return 0;
}
