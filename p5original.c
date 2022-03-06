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
  scanf("%d",&a[i]);
}
int find_largest(int n,int a[n])
{
  int i,largest=0;
  for(i=1;i<n;i++)
   {
     if(a[i]>a[largest])
       largest=i;
   }
   return largest;
}
void output(int n,int a[n],int largest)
{
 printf(" Index of Largest Number in an Array is %d at index=%d\n ",a[largest],largest);
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