#include <stdio.h>

int nth_term_geometric(int a, int q, int n) {
    // Trường hợp cơ bản
    if (n == 1) {
        return a;
    }
    // Đệ quy
    return q * nth_term_geometric(a, q, n - 1);
}

int main() {
    int a, q, n;
    printf("Nhập số hạng đầu a: ");
    scanf("%d", &a);
    printf("Nhập công bội q: ");
    scanf("%d", &q);
    printf("Nhập chỉ số phần tử n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Chỉ số phần tử n phải là số nguyên dương.\n");
        return 1;
    }

    int result = nth_term_geometric(a, q, n);
    printf("Giá trị phần tử thứ %d của cấp số nhân là %d\n", n, result);

    return 0;
}
