#include <stdio.h>
int main()
{
int a[1000],n,i,t,j,k;

    printf("enter number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      t=a[i]; 
      for(j=i+1;j<n;j++)
      {
          if(t==a[j])
          {
               for(k=j;k<n-1;k++)
             a[k]=a[k+1];
              n--;
              j--;
          }
         
      }
    }
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
    return 0;
}
