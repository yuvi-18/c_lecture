#include <stdio.h>

int main()
{
    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("2 * %d = %d\n",i,2*i );
    // }
    // int i = 0;
    // while ( i <= 10)
    // {
    //     i++;
    //     if (i == 5)
    //     {
    //         printf("Detected 2 * 5\n");
    //         continue;
    //     }
    //     else if (i == 8)
    //     {
    //         printf("Deteted 2 * 8\n");
    //         break;
    //     }
    //     printf("2 * %d = %d\n",i,2*i );

    // }
    // int m, n;
    // printf("Enter number of rows for the matrix: ");
    // scanf("%d", &m);
    // printf("Enter number of columns for the matrix: ");
    // scanf("%d", &n);

    // for (int j = 1; j <= m; j++)
    // {
    //     printf("%d ", j);
    // }
    // for (int i = 1; i < n; i++)
    // {
    //     printf("\n");
    //     for (int j = 1; j <= m; j++)
    //     {
    //         printf("%d ", j);
    //     }
    // }
    int month;
    printf("Enter month: ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("Jan");
        break;
    case 2:
        printf("Feb");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("Aug");
        break;
    case 9:
        printf("Sep");
        break;
    case 10:
        printf("Oct");
        break;
    case 11:
        printf("Nov");
        break;
    default:
    printf("Dec");
        break;
    }
    return 0;
}