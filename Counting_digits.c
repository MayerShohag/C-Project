#include <stdio.h>
int main()
{
    int count=0, num;
    printf("Enter any value : ");
    scanf("%d", &num);

    while (num!=0)
    {
        num /= 10;
        count++;
    }
    printf("Your Total digits is : %d", count);
    return 0;
}