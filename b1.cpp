#include <iostream>
using namespace std;

int dem_uoc(int n) {
    int dem = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            dem++;
        }
    }
    return dem;
}

bool la_so_nguyen_to(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int dem_chu_so_nguyen_to(int n) {
    int dem = 0;
    while (n > 0) {
        int chu_so = n % 10;
        if (la_so_nguyen_to(chu_so)) {
            dem++;
        }
        n /= 10;
    }
    return dem;
}

int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    
    int so_uoc = dem_uoc(n);
    cout << "So uoc cua " << n << " la: " << so_uoc << endl;
    
    if (la_so_nguyen_to(n)) {
        cout << n << " la so nguyen to" << endl;
    } else {
        cout << n << " khong phai so nguyen to" << endl;
    }
    
    int so_chu_so_nguyen_to = dem_chu_so_nguyen_to(n);
    cout << "So chu so nguyen to trong " << n << " la: " << so_chu_so_nguyen_to << endl;
    
    return 0;
}