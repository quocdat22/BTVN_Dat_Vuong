#include <stdio.h>
#include <math.h>

int S_recursive11(int n) {
    // Trường hợp cơ bản
    if (n == 1) {
        return 1;
    }
    // Đệ quy
    return n + S_recursive11(n - 1);
}

double S_recursive12(int n) {
    // Trường hợp cơ bản
    if (n == 1) {
        return sqrt(2);
    }
    // Đệ quy
    return sqrt(2 + S_recursive12(n - 1));
}


double S_recursive13(int n) {
    // Trường hợp cơ bản
    if (n == 1) {
        return 1.0 / 2.0;
    }
    // Đệ quy
    return (double)n / (n + 1) + S_recursive13(n - 1);
}

double S_recursive14(int n) {
    // Trường hợp cơ bản
    if (n == 0) {
        return 1.0;
    }
    // Đệ quy
    return 1.0 / (2 * n + 1) + S_recursive14(n - 1);
}

int S1_recursive(int n) {
    // Trường hợp cơ bản
    if (n == 1) {
        return 1 * 2;
    }
    // Đệ quy
    return n * (n + 1) + S1_recursive(n - 1);
}

double factorial(int k) {
    if (k == 0 || k == 1) return 1;
    return k * factorial(k - 1);
}

double S2_recursive(int n) {
    // Trường hợp cơ bản
    if (n == 1) {
        return 1.0 / (1 * 2 * 3);
    }
    // Đệ quy
    return 1.0 / (n * (n + 1) * (n + 2)) + S2_recursive(n - 1);
}
int S3_recursive(int n) {
    // Trường hợp cơ bản
    if (n == 1) {
        return 1 * 1;
    }
    // Đệ quy
    return n * n + S3_recursive(n - 1);
}

int sum_of_first_k(int k) {
    return k * (k + 1) / 2;
}

int S4_recursive(int n) {
    // Trường hợp cơ bản
    if (n == 1) {
        return 1;
    }
    // Đệ quy
    return sum_of_first_k(n) + S4_recursive(n - 1);
}


double S5_recursive(int n) {
    // Trường hợp cơ bản
    if (n == 0) {
        return (1 + 2) / factorial(2);
    }
    // Đệ quy
    double term = (2 * n - 1 + 2 * n) / factorial(2 * n);
    return (pow(-1, n) * term) + S5_recursive(n - 1);
}

double S6_recursive(int n) {
    // Trường hợp cơ bản
    if (n == 1) {
        return (1 * factorial(2)) / (2 + sqrt(3));
    }
    // Đệ quy
    return (n * factorial(n + 1)) / ((n + 1) + sqrt(n + 2)) + S6_recursive(n - 1);
}

double S7_recursive(int n) {
    // Trường hợp cơ bản
    if (n == 1) {
        return (1 + sqrt(1 + 2)) / (2 + sqrt(factorial(3)));
    }
    // Đệ quy
    return (n + sqrt(n + n + 1)) / ((n + 1) + sqrt(factorial(n + 2))) + S7_recursive(n - 1);
}
int main() {
    int n;
    printf("Nhập giá trị n: ");
    scanf_s("%d", &n);

    /*int result = S_recursive11(n);
    printf("Tổng S(%d) = %d\n", n, result);*/

    /*double result = S_recursive12(n);
    printf("Giá trị S(%d) = %lf\n", n, result);*/

    /*double result = S_recursive13(n);
    printf("Tổng S(%d) = %lf\n", n, result);*/

    /*double result = S_recursive14(n);
    printf("Tổng S(%d) = %lf\n", n, result);*/

    /*int result = S1_recursive(n);
    printf("Tổng S(%d) = %d\n", n, result);*/

    /*double result = S2_recursive(n);
    printf("Tổng S(%d) = %lf\n", n, result);*/

    /*int result = S3_recursive(n);
    printf("Tổng S(%d) = %d\n", n, result);*/

    /*int result = S4_recursive(n);
    printf("Tổng S(%d) = %d\n", n, result);*/

    /*double result = S5_recursive(n);
    printf("Tổng S(%d) = %lf\n", n, result);*/

    /*double result = S6_recursive(n);
    printf("Tổng S(%d) = %lf\n", n, result);*/

    double result = S7_recursive(n);
    printf("Tổng S(%d) = %lf\n", n, result);



    return 0;
}
