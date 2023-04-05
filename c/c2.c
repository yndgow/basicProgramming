#include <stdio.h>
int factorial(int n);
int main()
{
    int n = 4;
    int result = factorial(n);
    printf("%d! = %d", n, result);

    return 0;
}

int factorial(int n)
{
    int f = 1;

    if(n <= 1){
        f = 1;
    }else{
        f = n * factorial( n - 1 );
    }

    return f;
}
