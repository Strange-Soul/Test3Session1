#include<stdio.h>

struct _fraction
{
  int num,den;
};
typedef struct _fraction Fraction;

int find_gcd(int a,int b)
{
  int t;
  while(b!=0)
    {
      t=b;
      b=a%b;
      a=t;
    }
  return a;
}
int input_size()
{
  int n;
  printf("Enter size of Array \n");
  scanf("%d",&n);
  return n;
}
Fraction input_fraction()
{
  Fraction f;
  printf("Enter the  Fraction \n");
  scanf("%d %d",&f.num,&f.den);
  return f;
}
void input_n_fractions(int n,Fraction f[n])
{
  printf("Enter the  Array Elements \n");
  for(int i=0;i<n;i++)
    {
      f[i]=input_fraction();
    }
}
Fraction add_fractions(Fraction f1,Fraction f2)
{
  Fraction sum;
  sum.num=f1.num*f2.den+f2.num*f1.den;
  sum.den=f1.den*f2.den;
  int g=find_gcd(sum.num,sum.den);
  sum.num=sum.num/g;
  sum.den=sum.den/g;
  return sum;
}
Fraction add_n_fractions(int n,Fraction f[n])
{
  Fraction sum_n;
  sum_n=f[0];
  for(int i=0;i<n;i++)
    {
      sum_n=add_fractions(sum_n,f[i]);
    }
  return sum_n;
}
void output(int n,Fraction f[n],Fraction sum)
{
  printf("The Sum of Fractions is \n");
  for(int i=0;i<n;i++)
    {
      printf("%d/%d +\n",f[i].num,f[i].den);
    }
  printf("is %d/%d \n",sum.num,sum.den);
}
int main()
{
  int n;
  n=input_size();
  Fraction result;
  Fraction p[n];
  input_n_fractions(n,p);
  result=add_n_fractions(n,p);
  output(n,p,result);
  return 0;
}