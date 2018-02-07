#include<stdio.h>
int main()
  {
  int n,i,array[10],minimum;
  printf("enter a number:");
  scanf("%d",&n);
  printf("enter an %d intgers: ",n);
  for(i=0;i<=n;i++)
    {
    scanf("%d",&array[i]);
    }
 array[i]=minimum;
  for(i=0;i<=n;i++)
    {
    if(array[i]<minimum)
      {
      array[i]=minimum;
      }
    }
  printf("the minimum element in this array is %d",minimum);
  return 0;
  }
