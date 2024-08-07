#include <stdio.h>

int U(int n) {
    // Trường hợp cơ bản
    if (n < 6) {
        return n;
    }
    // Đệ quy
    return U(n - 5) + U(n - 4) + U(n - 3) + U(n - 2) + U(n - 1);
}

int main() {
    int n;
    printf("Nhập giá trị n (số nguyên dương): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n phải là số nguyên dương.\n");
        return 1;
    }

    int result = U(n);
    printf("Giá trị U(%d) = %d\n", n, result);

    return 0;
}
