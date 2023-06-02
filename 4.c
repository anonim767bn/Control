#include <stdio.h>

void changeMax(int arr[], int n) {
    int max = *arr, max2 = *arr;
    int maxIndex = 0;
    int maxIndex2 = 0;

    for (int i = 0; i < n; i++) {
        if (*(arr+i) > max) {
            max2 = max;
            max = *(arr+i);
            maxIndex2 = maxIndex;
            maxIndex = i;
        } else if (*(arr+i) > max2) {
            max2 = *(arr+i);
            maxIndex2=i;
        }
    }

    int tmp = *(arr+maxIndex);
    *(arr+maxIndex) = *(arr+maxIndex2);
    *(arr+maxIndex2)=tmp;
}


int main() {
    int array[] = {3, 2, 1, 4, 0};
    int n = 5;
    changeMax(array, n);
    for (int i = 0; i<n; i++){
        printf("%d ", array[i]);
    }
}