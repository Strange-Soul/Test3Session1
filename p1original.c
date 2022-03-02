#include<stdio.h>
void input(int *num1,int *den1,int *num2,int *den2)
{
  printf("Enter the 1st Fraction \n");
  scanf("%d %d",num1,den1);
  printf("Enter the 2st Fraction \n");
  scanf("%d %d",num2,den2);
}
void add(int num1,int den1,int num2,int den2,int *num3,int *den3)
{
  int i,p,q,gcd;
  p=num1*den2+num2*den1;
  q=den1*den2;
  for(i=1;i<=p && i<=q;i++)
      if(p%i==0 && q%i==0)
      {
        gcd=i;
      }
  *num3=p/gcd;
  *den3=q/gcd;
}
void output(int num1,int den1,int num2,int den2,int num3,int den3)
{
  printf("Sum of two Fractions %d/%d and %d/%d is : %d/%d \n", num1, den1, num2, den2, num3, den3);
}
int main()
{
  int x1,y1,x2,y2,x3,y3;
  input(&x1,&y1,&x2,&y2);
  add(x1,y1,x2,y2,&x3,&y3);
 output(x1,y1,x2,y2,x3,y3);
return 0;
}