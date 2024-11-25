#include <stdio.h>

int main() {
    float num1, num2;
    int choice;

    printf("Nhap so thu nhat: ");
    scanf("%f", &num1);
    printf("Nhap so thu hai: ");
    scanf("%f", &num2);

    do {
        printf("\n--- CALCULATOR ---\n");
        printf("1. Tong 2 s?\n");
        printf("2. Hieu 2 s?\n");
        printf("3. T�ch 2 s?\n");
        printf("4. Thuong 2 s?\n");
        printf("5. Tho�t\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Tong cua %.2f v� %.2f l�: %.2f\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Hieu cua %.2f v� %.2f l�: %.2f\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("T�ch cua %.2f v� %.2f l�: %.2f\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Thuong cua %.2f v� %.2f l�: %.2f\n", num1, num2, num1 / num2);
                } else {
                    printf("Kh�ng the chia cho 0!\n");
                }
                break;
            case 5:
                printf("Tho�t chuong tr�nh...\n");
                break;
            default:
                printf("Lua chon kh�ng hop le, vui l�ng chon lai!\n");
        }

    } while (choice != 5); 

    return 0;
}

