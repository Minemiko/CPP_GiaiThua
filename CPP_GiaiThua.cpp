#include <iostream>
using namespace std;

int main()
{
    cout << "Ung dung tinh giai thua\n";
    int so, gt = 1;
    cout << "Nhap so:";
    cin >> so;
    for (int i = 1; i <= so; i++) {
        gt *= i;
    }
    cout << "Giai thua " << so << "!=" << gt;
    cout << "\nSu dung WHILE \n";
    gt = 1; 
    int j = 1;
    while (j <= so) {
        gt *= j;
        j++;
    }
    cout << "Giai thua " << so << "!=" << gt;
    cout << "\nSu dung DO WHILE \n";
    gt = 1;
    int k = 1;
    do {
        gt *= k;
        k++;
    } while (k <= so);
    cout << "Giai thua " << so << "!=" << gt;
    return 0;
}