#include<stdio.h>
#include<math.h>
void input_n_and_r(int *n,int *r)
{
  printf("Please Enter n value\n");
  scanf("%d",n);
  printf("Please Enter r value \n");
  scanf("%d",r);
}
int ncr(int n,int r)
{
  int a,b,c,ncr;
  for(int i=0;i<n;i++)
    {
      a=fact(n);
      b=fact(n-r);
      c=fact(r);
      ncr=a/(b*c);
    }
  return ncr;
}
void output(int n,int r,int result)
{
  printf("The n^Cr of n=%d and r=%d is %d \n",n,r,result);
}
int main()
{
 int p,q,result;
  input_n_and_r(&p,&q);
  result=ncr(p,q);
  output(p,q,result);
  return 0;
}