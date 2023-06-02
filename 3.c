#include <stdio.h>

int main() {
    int vvod;
    scanf("%d", &vvod);
    float summ = 0;
    float count = 0;
    while (vvod!=0)
    {
        if (vvod%2==0){
            summ+=vvod;
            count++;
        }
        scanf("%d", &vvod);
    }
    float result = summ/count;
    printf("%f", result);
    
}