#include <stdio.h>

struct Car
{
    char* brand;
    char* model;
    int price;
};

struct Car* maxCarPrice(struct Car cars[], int n){
    int max = cars->price;
    struct Car *maxPrice = cars;
    for (int i = 0; i < n; i++){
        if (cars[i].price > max){
            *maxPrice=*(cars+i);
        }
    }
    return maxPrice;
}

int main() {
    struct Car array[] = {
        {"audi", "s8", 300},
        {"bentley", "bentayga", 1000},
        {"hyundai", "solyaris", 10}
    };
    printf("%d", maxCarPrice(array, 3)->price);

}