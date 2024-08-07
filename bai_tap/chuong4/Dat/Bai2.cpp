#include <stdio.h>

int power(int m, int n) {
    // Trường hợp cơ bản
    if (n == 0) {
        return 1;  // Bất kỳ số mũ 0 đều bằng 1
    }
    // Đệ quy
    return m * power(m, n - 1);
}

int main() {
    int m, n;
    printf("Nhập giá trị m: ");
    scanf("%d", &m);
    printf("Nhập giá trị n (số nguyên dương): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Số mũ n phải là số nguyên dương.\n");
        return 1;
    }

    int result = power(m, n);
    printf("%d^%d = %d\n", m, n, result);

    return 0;
}
