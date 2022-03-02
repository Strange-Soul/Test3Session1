#include<stdio.h>
int input_size()
{
  int n;
  printf("Enter the size of Array \n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("Enter the Elements of Array \n");
  for(int i=0;i<n;i++)
    a[i]=input_size();
}
int find_largest(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      if(a[0]>a[i])
       {
         i++;
         return 1;
       }
      else
       {
         a[i]=0;
         return -1; 
       } 
    }
}
void output(int n,int a[n],int largest)
{
  for(int i=0;i<n;i++)
 printf(" Index of Largest Number in an Array is %d\n ",n);
}
int main()
{
  int x,result;
  x=input_size();
  int p[x];
  input_array(x,p);
  result=find_largest(x,p);
  output(x,p,result);
  return 0;
}