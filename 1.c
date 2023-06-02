#include <stdio.h>

int triangleType(int a, int b, int c){
    if (a+b<c || a+c<b || c+b<a){
        return 0;
    }
    if (a*a+b*b==c*c || a*a+c*c==b*b || c*c+b*b==a*a){
        return 1;
    }
    return 2;
}
int main() {
    printf("%d", triangleType(3, 4, 5));
}