//#include <stdio.h>
////Bai12
//int fibonacci(int n) {
//    if (n <= 1)
//        return n;
//    else
//        return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int findLargestFibonacciSmallerThanN(int n) {
//    int i = 1;
//    int fib = 1;
//    while (fib <= n) {
//        i++;
//        fib = fibonacci(i);
//    }
//    return fibonacci(i - 2);
//}
//
//int main() {
//    int n;
//    printf("Nhap n: ");
//    scanf_s("%d", &n);
//    printf("So Fibonacci lon nhat nho hon %d la: %d\n", n, findLargestFibonacciSmallerThanN(n));
//    return 0;
//}
