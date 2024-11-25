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
        printf("3. Tích 2 s?\n");
        printf("4. Thuong 2 s?\n");
        printf("5. Thoát\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Tong cua %.2f và %.2f là: %.2f\n", num1, num2, num1 + num2);
                break;
            case 2:
                printf("Hieu cua %.2f và %.2f là: %.2f\n", num1, num2, num1 - num2);
                break;
            case 3:
                printf("Tích cua %.2f và %.2f là: %.2f\n", num1, num2, num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("Thuong cua %.2f và %.2f là: %.2f\n", num1, num2, num1 / num2);
                } else {
                    printf("Không the chia cho 0!\n");
                }
                break;
            case 5:
                printf("Thoát chuong trình...\n");
                break;
            default:
                printf("Lua chon không hop le, vui lòng chon lai!\n");
        }

    } while (choice != 5); 

    return 0;
}

