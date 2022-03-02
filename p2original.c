#include<stdio.h>

struct _fraction
{
  int num,den;
};
typedef struct _fraction Fraction;

Fraction input_fraction()
{
  Fraction f;
  printf("Enter a Fraction \n");
  scanf("%d %d",&f.num,&f.den);
  return f;
}
Fraction Largest_fraction(Fraction  f1,Fraction f2,Fraction f3)
{
  Fraction large;
  int p,q,r;
  p=f1.num/f1.den;
  q=f2.num/f2.den;
  r=f3.num/f3.den;
  if(p>q && p>r )
    large=f1;
  else if(q>r && q>p)
    large= f2;
  else
    large=f3;
  return large;
}
void output(Fraction f1,Fraction f2,Fraction f3,Fraction largest)
{
printf("Largest Fraction among %d/%d , %d/%d and %d/%d is %d/%d \n",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,largest.num,largest.den);

}
int main()
{
  Fraction x,y,z,result;
  x=input_fraction();
  y=input_fraction();
  z=input_fraction();
  result=Largest_fraction(x,y,z);
  output(x,y,z,result);
  return 0;
}