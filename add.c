#include <stdio.h>
void add(int arr[], int ar[], int num);
int main()
{
    int arr[5] = {2, 34, 4, 3, 5};
    int ar[5] = {4, 4, 5, 2, 4};
    int n = 5;
    add(arr, ar, n);
    return 0;
}
void add(int arr[], int ar[], int num)
{
    int c[5];
    for(int i=0;i<num;i++)
    {
          c[i] = arr[i]+ar[i];
          printf("%d ",c[i]);
    }
}
