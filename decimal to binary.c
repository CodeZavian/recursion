#include<stdio.h>
void Decimal(int num);
int main()
{

    int number;
    printf("enter the number\n");
    scanf("%d",&number);
    printf("binary form of %d = ",number);
    Decimal(number);
}
  void Decimal(int num) 
  {
    if (num > 1) 
     {
        Decimal(num/2);
    }
    printf("%d", num % 2);
}
