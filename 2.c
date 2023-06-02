#include <stdio.h>

float sumFoo(int n){
    float factorial = 1;
    float summ = 0;
    for ( int i = 1; i <= n; i++){
        factorial*=i;
        summ+=(i*i)/factorial;
    }
    return summ;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%f", sumFoo(n));
}