#include<stdio.h>
int factorial(int n)
{
    if(n>0)
        return n*factorial(n-1);
    else
        return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ans = factorial(n);
    printf("Factorial is : %d\n",ans);

    return 0;
}