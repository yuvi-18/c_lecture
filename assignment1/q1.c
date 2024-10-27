// write a program to sum of digit till it is one digit number ex 1,2,3,4,5,6,7,8,9,10 = 55 = 10 = 1

#include <stdio.h>

int main(){
    int n = 10;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    int uskaSum = 0;
    printf("%d\n", sum);
    if (sum >= 10)
    {
        uskaSum += sum;
    }
    printf("%d", uskaSum);
    return 0;
}

