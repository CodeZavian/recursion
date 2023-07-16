#include<stdio.h>
void hail(int num)
{
     if(num==1)
     {
           return;
     }
     printf("%d ",num);
      if(num%2==0)
      {
           hail(num/2);
           
      }
      else 
      {
            hail(num*3+1);
          //  printf("%d ",num);
                  }
 
    
}
int main()
{
      int n =3;
      hail(n);

}