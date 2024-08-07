#include <stdio.h>

// Hàm tính số hạng thứ n của dãy số thứ nhất
int sequence1(int n) {
    // Trường hợp cơ bản
    if (n == 0) return 1;
    if (n == 1) return 0;
    if (n == 2) return -1;
    // Đệ quy
    return 2 * sequence1(n - 1) - 3 * sequence1(n - 2) - sequence1(n - 3);
}

// Hàm tính số hạng thứ n của dãy số thứ hai
int sequence2(int n) {
    // Trường hợp cơ bản
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;
    // Đệ quy
    return 2 * sequence2(n - 1) + sequence2(n - 2) - 3 * sequence2(n - 3);
}

int main() {
    int n;

    printf("Nhập chỉ số n của dãy số thứ nhất (n >= 0): ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Chỉ số n của dãy số thứ nhất phải là số nguyên không âm.\n");
        return 1;
    }
    int result1 = sequence1(n);
    printf("Số hạng thứ %d của dãy số thứ nhất là %d\n", n, result1);

    printf("Nhập chỉ số n của dãy số thứ hai (n >= 1): ");
    scanf("%d", &n);
    if (n < 1) {
        printf("Chỉ số n của dãy số thứ hai phải là số nguyên dương.\n");
        return 1;
    }
    int result2 = sequence2(n);
    printf("Số hạng thứ %d của dãy số thứ hai là %d\n", n, result2);

    return 0;
}
