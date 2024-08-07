//#include <iostream>
////Bai16
// Cach 1: Dung de quy
//using namespace std;
//int tinhXn_dequy(int n) {
//    if (n == 1 || n == 2) {
//        return 1;
//    }
//    else {
//        return tinhXn_dequy(n - 1) + (n - 1) * tinhXn_dequy(n - 2);
//    }
//}
//
//int main() {
//    int n;
//    cout << "Nhap n: ";
//    cin >> n;
//
//    cout << "X" << n << " = " << tinhXn_dequy(n) << endl;
//
//    return 0;
//}


//Cach 2: Khong dung de quy
//#include <iostream>
//
//using namespace std;
//
//int tinhXn_khong_dequy(int n) {
//    if (n <= 0) {
//        cout << "Nhap n >= 1" << endl;
//        return -1;
//    }
//    if (n <= 2) return 1;
//
//    int x1 = 1, x2 = 1, x;
//    for (int i = 3; i <= n; ++i) {
//        x = x2 + (i - 1) * x1;
//        x1 = x2;
//        x2 = x;
//    }
//    return x;
//}
//
//int main() {
//    int n;
//    cout << "Nhap n: ";
//    cin >> n;
//
//    cout << "X" << n << " = " << tinhXn_khong_dequy(n) << endl;
//
//    return 0;
//}
