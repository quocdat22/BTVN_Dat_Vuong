#include <stdio.h>

// Hàm tính giá trị f(n) theo công thức truy hồi
int f(int n) {
    if (n == 1) {
        return 1;  // Trường hợp cơ bản
    }
    if (n % 2 == 0) {
        // n là số chẵn: f(2n) = 2f(n)
        return 2 * f(n / 2);
    }
    else {
        // n là số lẻ: f(2n + 1) = 2f(n) + 3f(n + 1)
        return 2 * f(n / 2) + 3 * f(n / 2 + 1);
    }
}

int main() {
    int n;
    printf("Nhập giá trị n (số nguyên dương): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n phải là số nguyên dương.\n");
        return 1;
    }

    int result = f(n);
    printf("Giá trị f(%d) = %d\n", n, result);

    return 0;
}
