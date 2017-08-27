#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int Fibonacci(int iNum);

int main()
{
    for(int i=0; i<10; ++i)
    {
        printf("%d\t", Fibonacci(i+1));
    }
    return 0;
}

int Fibonacci(int iNum)
{
    if(iNum == 1)
        return 0;
    else if(iNum ==2)
        return 1;
    else
        return Fibonacci(iNum -1) + Fibonacci(iNum -2);
}