#include <stdio.h>

int gcd(int a, int b) {
    // Trường hợp cơ bản
    if (b == 0) {
        return a;
    }
    // Đệ quy
    return gcd(b, a % b);
}

int main() {
    int a, b;
    printf("Nhập giá trị a: ");
    scanf("%d", &a);
    printf("Nhập giá trị b: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Cả hai số a và b phải là số nguyên dương.\n");
        return 1;
    }

    int result = gcd(a, b);
    printf("Ước chung lớn nhất của %d và %d là %d\n", a, b, result);

    return 0;
}
