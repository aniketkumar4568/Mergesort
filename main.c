#include <stdio.h>
#include <stdlib.h>
int a[]={100,45,36,101,5,4,3,222};
int b[22];

int main()
{
   int i,low,high;
   low=0;
   high=sizeof(a)/sizeof(a[0])-1;
   printf("the unsorted array is \n");
                  for(i=0;i<=high;i++)
                  {
                                 printf("%d ",a[i]);
                  }

   Mergesort(low,high);
   printf("\nthe sorted array is \n");
                  for(i=0;i<=high;i++)
                  {
                                 printf("%d ",a[i]);
                  }

    return 0;
}
void Mergesort(int low,int high)
{
               if(low<high)
               {
                              int mid=(low+high)/2;
                              Mergesort(low,mid);
                              Mergesort(mid+1,high);
                              Merge(low,mid,high);

               }
}
void Merge(int low,int mid,int high)
{
               int i,l,j,k;
               i=low;
               l=low;
               j=mid+1;
               while(l<=mid&&j<=high)
               {
                              if(a[l]<=a[j])
                              {
                                             b[i]=a[l];
                                             l++;
                              }
                              else
                              {
                                             b[i]=a[j];
                                             j++;
                              }
                              i++;
               }
               if(l>mid)
               {
                              for(k=j;k<=high;k++)
                              {
                                             b[i]=a[k];
                                             i++;
                              }
               }
               else
               {
                              for(k=l;k<=mid;k++)
                              {
                                             b[i]=a[k];
                                             i++;
                              }
               }
               for(k=low;k<=high;k++)
               {
                              a[k]=b[k];
               }
}
