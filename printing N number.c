#include <stdio.h>

void Print(int num);

int main()
{
    int number;
    printf("Enter the number\n");
    scanf("%d",&number);
    Print(number);
    return 0;
}

void Print(int num)
{
    if (num==1)
    {
        printf("%d ", num);
        return ;
    }

    Print(num-1);
    printf("%d ", num);
}
