#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}