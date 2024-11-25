#include <stdio.h>

int main() {
    int n;

    printf("Nhap mot so nguyên duong tu 1 den 10: ");
    scanf("%d", &n);
  
        printf("Bang cuu chuong cua %d:\n", n);
        for (int m = 1; m <= 10; m++) {
            printf("%d x %d = %d\n", n, m, n * m);
        }
    
    return 0;
}

