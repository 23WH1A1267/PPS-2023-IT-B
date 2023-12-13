#include<stdio.h>
void swap(int,int);
void swapRef(int*,int*);

void main()
{
int a,b;
scanf("%d %d",&a,&b);
printf("Before swap\n %d %d",a,b);
swap(a,b);
printf("\nAfter swap function\n %d %d\n",a,b);
swapRef(&a,&b);
printf("\nAfter swap reference function\n %d %d\n",a,b);
}

void swap(int a,int b)
{
int c = a;
a = b;
b = c;
}

void swapRef(int*m,int*n)
{
int l = *m;
*m = *n;
*n = l;
}
