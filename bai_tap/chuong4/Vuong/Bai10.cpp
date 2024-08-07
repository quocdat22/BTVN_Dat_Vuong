//#include <stdio.h>
//#include <stdlib.h>
//
////Bai 10
//int binarySearch(int a[], int left, int right, int x) {
//    if (right >= left) {
//        int mid = left + (right - left) / 2;
//        if (a[mid] == x) {
//            return mid;
//        }
//
//        if (a[mid] > x) {
//            return binarySearch(a, left, mid - 1, x);
//        }
//
//        return binarySearch(a, mid + 1, right, x);
//    }
//
//    return -1;
//}
//
//int main() {
//    int n;
//    printf("Nhap so luong phan tu cua mang : ");
//    scanf_s("%d", &n);
//    int* a = (int*)malloc(n * sizeof(int));
//    if (a == NULL) {
//        printf("Khong the cap phat bo nho.\n");
//        return 1;
//    }
//
//    printf("Nhap cac phan tu cua mang (da sap xep): \n");
//    for (int i = 0; i < n; i++) {
//        scanf_s("%d", &a[i]);
//    }
//
//    int x;
//    printf("Nhap so can tim: ");
//    scanf_s("%d", &x);
//
//    int result = binarySearch(a, 0, n - 1, x);
//    if (result != -1) {
//        printf("Phan tu %d duoc tim thay tai vi tri %d\n", x, result);
//    }
//    else {
//        printf("Phan tu %d khong co trong mang\n", x);
//    }
//    free(a);
//
//    return 0;
//}
