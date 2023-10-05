#include <stdio.h>
int main()
{
    int number, i, k, count = 1;

    printf("Enter number of rows: \n");
    scanf("%d", &number);
    for (k = 1; k <= number; k++)
    {
        for (i = number; i>= k; i--){
            printf(" ");
        }
        for (i = 1; i <= count; i++){
            printf("*");
        }
        printf("\n");
           count+=2;

    }
   count = 1;
for (k = 1; k <= number - 1; k++)
    {
        for (i = 1; i <= count; i++)
            printf(" ");
        count++;
        for (i = 1 ; i <= 2 *(number - k)-  1; i++)
            printf("*");
        printf("\n");
    }
}