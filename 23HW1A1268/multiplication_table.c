//To print a multiplication table
#include<stdio.h>
void main(){
    int n,i,r;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("Enter the number of rows: ");
    scanf("%d",&r);

    printf("The multiplication table of %d is \n", n);
    for(i=1; i<=10; i++){
        printf("%d  x %d = %d \n", n,i,n*i);
        if(i==r)
            break;
    }
}
