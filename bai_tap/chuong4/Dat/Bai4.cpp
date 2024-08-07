#include <stdio.h>

int nth_term(int a, int r, int n) {
    // Trường hợp cơ bản
    if (n == 1) {
        return a;
    }
    // Đệ quy
    return nth_term(a, r, n - 1) + r;
}

int main() {
    int a, r, n;
    printf("Nhập số hạng đầu a: ");
    scanf("%d", &a);
    printf("Nhập công sai r: ");
    scanf("%d", &r);
    printf("Nhập chỉ số phần tử n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Chỉ số phần tử n phải là số nguyên dương.\n");
        return 1;
    }

    int result = nth_term(a, r, n);
    printf("Giá trị phần tử thứ %d của cấp số cộng là %d\n", n, result);

    return 0;
}
