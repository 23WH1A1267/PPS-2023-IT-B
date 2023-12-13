// To search an element
#include<stdio.h>
int readArray(int x[],int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  scanf("%d",&x[i]);
 }
}
int LinearSearch(int x[],int n)
{
 int i,k;
 printf("\nEnter the Search element");
 scanf("%d",&k);
 for(i=0;i<n;i++)
 {
 if(k == x[i])
  return i;
 }
 return -1;
}
void main()
{
 int A[100],n,res;
 printf("Enter the numbers of entries: ");
 scanf("%d\n",&n);
 readArray(A,n);
 printf("\n");
 res = LinearSearch(A,n);
 if(res == -1)
  printf("Search is unsuccesfu\n");
 else
  printf("search is successful at %d\n",res);
} 
