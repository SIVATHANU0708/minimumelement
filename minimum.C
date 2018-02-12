#include<stdio.h>
int main()
  {
  int n,i,array[10],minimum;
  printf("enter a number:");
  scanf("%d",&n);
  printf("enter an %d intgers: ",n);
  for(i=0;i<n;i++)
    {
    scanf("%d",&array[i]);
    }
 minimum=array[0];
  for(i=0;i<n;i++)
    {
    if(minimum>array[i])
      {
      minimum=array[i];
      }
    }
  printf("the minimum element in this array is %d",minimum);
  return 0;
  }
