#include <stdio.h>
int input_number()
{
  int n;
  printf("enter the value of x\n");
  scanf("%d",&n);
  return n;
}
int is_prime(int n)
{
  for(int i=2;i<n;i++)
    {
      n=n%i;
    }
  if(n>0)
  {
    return 1;
  }
  else
  {
   return 0; 
  }
}
void output(int n,int result)
{
  if(result>0)
  {
    printf("the number %d is a prime number\n",n);
  }
    else
  {
    printf("the number %d is not a prime number",n);
  }
}
int main()
{
  int a;
  a=input_number();
  int result;
  result=is_prime(a);
  output(a,result);
  return 0;
}