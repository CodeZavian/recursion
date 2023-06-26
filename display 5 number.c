#include<stdio.h>
void input(int arr[],int n);
int main()
{ 
     int n=5;
     int arr[n];
     input(arr,n);
}
void input(int arr[],int n)
{
      for(int i=0;i<n;i++)
      {
         scanf("%d",&arr[i]);
       //  printf("%d ",arr[i]);
      }
      for(int i=0;i<n;i++)
      {
         
         printf("%d ",arr[i]);
      }

}