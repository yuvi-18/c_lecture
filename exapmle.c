#include <stdio.h>

int main(){
    int arr[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the value of [%d][%d]\n", i , j);
            scanf("%d", &arr[i][j]);
        }
        
    }
    
    printf("The entered matrix is: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;

}