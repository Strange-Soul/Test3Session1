#include<stdio.h>
int input_degree()
{
  int n;
  printf("Enter the Degree for polynomial \n");
  scanf("%d",&n);
  return n;
}
float input_x()
{
  float x;
  printf("Enter the Co-efficient of X \n");
  scanf("%f",&x);
  return x;
}
void input_coefficients(int n,float a[n])
{
  printf("Enter Co_Efficient of X \n");
  for(int i=n;i>0;i--)
    {
      a[i]=input_x();
    }
}
float evaluate_polynomials(int n,float a[n],float x)
{
  float s=a[0];
  for(int i=0;i<n;i++)
    {
      s=(s+a[i])*x;
    }
  return s;
}
void out_put(int n,float a[n],float x,float result)
{
  printf("Sum of %d polynomial is \n",n);
for(int i=n;i>0;i--)
  {
    printf("%fx^%d + ",a[i],n);
    printf("%fx^%d",a[n-1],n);
  }
  printf("%f \n",result);
}
int main()
{
  int n=input_degree();
  float y=input_x();
  float x[n];
  input_coefficients(n,x);
  float r=evaluate_polynomials(n,x,y);
  out_put(n,x,y,r);
  return 0;
}