#include <stdio.h>
#include <stdlib.h>

float fib(int n);
float fibo_r(int n);
int main()
{
    printf("%f\n", fib(80));
    return 0;
}

float fib(int n){
    float fibo[n];
    int i;

    fibo[0] = 0.0;
    fibo[1] = 1.0;

    for( i= 2; i < n; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }

    return fibo[i-1];
}

float fibo_r(int n){ 
    if(n == 0){
        return 0.0;
    }
    else if(n == 1){
        return 1.0;
    }
    else
        return fibo_r(n-1) + fibo_r(n-2);
}
