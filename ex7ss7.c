#include<stdio.h>
int main() {
    int a, b,i=a,j=1; 
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &a, &b);

    printf("Cac so nguyen to khoang [%d,%d] la:\n", a, b);
    for ( i=a; i<=b; i++){
        if (i<2) continue;  
        int dem=0;  
        for ( j=1; j<=i; j++) {
            if (i%j == 0)
                dem++;
        }

        if (dem==2) 
            printf("%d", i);
    }
    printf("\n");
    return 0;
}


