#include<stdio.h>
long long int factorial(int n) 
 {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n<0)
    {
        n = -n;
    }
    else
    {
        printf("%d",factorial(n));
    }
return 0;
}
