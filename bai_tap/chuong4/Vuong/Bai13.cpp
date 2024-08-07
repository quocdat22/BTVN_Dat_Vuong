//#include <iostream>
////Bai13
//using namespace std;
//void tinhSoHangThuN(int n, int& x, int& y) {
//    if (n == 0) {
//        x = 1;
//        y = 0;
//    }
//    else {
//        tinhSoHangThuN(n - 1, x, y);
//        int tempX = x;
//        x = x + y;
//        y = 3 * tempX + 2 * y;
//    }
//}
//
//int main() {
//    int n;
//    cout << "Nhap n: ";
//    cin >> n;
//
//    int x, y;
//    tinhSoHangThuN(n, x, y);
//
//    cout << "So hang thu " << n << " cua day X la: " << x << endl;
//    cout << "So hang thu " << n << " cua day Y la: " << y << endl;
//
//    return 0;
//}
