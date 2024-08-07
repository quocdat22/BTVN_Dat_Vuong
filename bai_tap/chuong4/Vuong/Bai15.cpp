//Cach 1 : Su dung de quy
//#include <iostream>
//
//using namespace std;
//
//int tinhYn_dequy(int n) {
//    if (n == 1) return 1;
//    if (n == 2) return 2;
//    if (n == 3) return 3;
//    return tinhYn_dequy(n - 1) + 2 * tinhYn_dequy(n - 2) + 3 * tinhYn_dequy(n - 3);
//}
//
//int main() {
//    int n;
//    cout << "Nhap n: ";
//    cin >> n;
//
//    cout << "Y" << n << " = " << tinhYn_dequy(n) << endl;
//
//    return 0;
//}
// 
// 
//Cach 2: Khu de quy
//#include <iostream>
//
//using namespace std;
//
//int tinhYn_khong_dequy(int n) {
//    if (n <= 0) {
//        cout << "Nhap n >= 1" << endl;
//        return -1;
//    }
//    if (n <= 3) return n;
//
//    int y1 = 1, y2 = 2, y3 = 3, y;
//    for (int i = 4; i <= n; ++i) {
//        y = y3 + 2 * y2 + y1;
//        y1 = y2;
//        y2 = y3;
//        y3 = y;
//    }
//    return y;
//}
//
//int main() {
//    int n;
//    cout << "Nhap n: ";
//    cin >> n;
//
//    cout << "Y" << n << " = " << tinhYn_khong_dequy(n) << endl;
//
//    return 0;
//}

