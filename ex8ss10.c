#include <stdio.h>

int main() {
    int i, j;
    int number[6] = {5, 1, 8, 3, 2, 7}; 
    int size = 6;
    int searchValue =3; 
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++){
            if (number[j] > number[j + 1]){
                int temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xepla: ");
    for (i = 0; i < size; i++) {
        printf("%d ", number[i]);
    }
    int left = 0, right = size - 1, mid, index = -1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (number[mid] == searchValue) {
            index = mid;
            break;
        } else if (number[mid] < searchValue){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (index != -1)
        printf("\nChi so cua phan tu can tim la: %d\n", index);
    else
        printf("Khong tim thay phan tu trong mang");
    return 0;
}

