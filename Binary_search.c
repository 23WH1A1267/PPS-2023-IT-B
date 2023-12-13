// To elements by binary search
#include<stdio.h>
int readArray(int x[],int n)
{
 for(int i=0;i<n;i++)
 {
 scanf("%d",&x[i]);
 }
}
int BinarySearch(int x[],int n)
{
 int low,high,mid,k;
 printf("Enter search element");
 scanf("%d",&k);
 low = 0;
 high = n-1;
 while(low <= high)
{
 mid = (low + high)/2;
 if(k == x[mid])
  return mid;
 else if(k < x[mid])
  high = mid - 1;
 else
  low = mid + 1;
 }
 return -1;
}
void main()
{
 int A[100],n,res;
 printf("Enter the number of entries");
 scanf("%d\n",&n);
 readArray(A,n);
 printf("\n");
 res = BinarySearch(A,n);
 if(res == -1)
  printf("Search is successful\n");
 else
  printf("Search is successful at %d\n",res);
}
 
