#include<stdio.h>
int input()
{
  int n;
printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
void init_array(int n, int a[n])
{
  for(int i=0;i<n;i++)
    a[i]=i;
  a[1]=0;
}
void ets(int n, int a[n])
{
  int i=0;
  while (i< sqrt(n))
    {
      while(a[i]==0)i++;
      for(int k=i+i;i<n;k+=i)
        a[k]=0;
      i++;
    }
}
void display(int n, int a[n])
{
 for(int i=0;i<n;i++) 
   if(a[i]!=0)
     printf("%d",a[i]);
  printf("\n");
}
int main()
{
  int n;
  n=input();
  int a[n];
  init_array(n,a);
  ets(n,a);
  display(n,a);
  return 0;
  }
}