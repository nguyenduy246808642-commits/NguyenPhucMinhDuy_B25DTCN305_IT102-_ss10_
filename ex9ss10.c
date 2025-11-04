#include<stdio.h>#include <stdio.h>

int main() {
    int i, j;
    int n = 6;
    int gia[6] = {100, 50, 200, 150, 120, 80}; 
    int id = 3; 
    if (id < 0 || id >= n) {
        printf("Ma san pham khong hop le");
        return 0;
    }
    printf("Gia cua san pham co ma %d la: %d\n", id, gia[id]);
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (gia[j] > gia[j + 1]) {
                int temp = gia[j];
                gia[j] = gia[j + 1];
                gia[j + 1] = temp;
            }
        }
    }
    printf("Danh sach gia san pham sau khi sap xep: ");
    for (i = 0; i < n; i++) {
        printf("%d ", gia[i]);
    }

    return 0;
}


