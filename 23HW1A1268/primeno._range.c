// To find the prime nos. in a given range
#include<stdio.h>
void main()
{
    int num,a,b, count = 0;
    printf("Enter the range to find prime numbers: ");
    scanf("%d %d", &a,&b);
    printf("Prime numbers in given range are: \n. ");
    for(num=a; num<=b; num++)
    {
        int i=1;
        while(i<=num)
        {
            if(num % i == 0){
                count++;
            }
            i++;
        }
        if (count == 2)
            {
                printf("%d\n", num);
            }
        count = 0;
    }
}
