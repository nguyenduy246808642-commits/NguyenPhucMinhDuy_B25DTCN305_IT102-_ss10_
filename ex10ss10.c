#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int min = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] < min)
            min = a[i];
    }
    printf("So nguyen nho nhat trong mang la: %d\n\n", min);
    for (i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex])
                minIndex = j;
        }
        int temp = a[i];
        a[i] = a[minIndex];
        a[minIndex] = temp;
    }
    printf("Mang sau khi sap xep theo thu tu tang dan:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n\n");
    int x;
    scanf("%d", &x);
    int left = 0, right = n - 1, mid, found = -1;
    while (left <= right) {
        mid = (left + right) / 2;
        if (a[mid] == x) {
            found = mid;
            break;
        } else if (a[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (found != -1)
        printf("Phan tu %d co chi so %d trong mang da sap xep.\n", x, found);
    else
        printf("Khong tim thay\n");
    return 0;
}

