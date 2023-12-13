#include<stdio.h>
void coprime(int,int);
void main()

{
int num1, num2;
scanf("%d %d",&num1,&num2);
coprime(num1,num2);
}

void coprime(int a,int b)
{ 
 int n,count = 0;
 for(int x = a; x <= b; x++)
 {
  n = 1;
  while(n <=x)
  { 
   if(x % n == 0)
   {
   count++
   }
if(count == 2)
{ 
 if(x %  n != 0)
 {
  printf("%d %d",n,x);
 }
}
}
}
} 
