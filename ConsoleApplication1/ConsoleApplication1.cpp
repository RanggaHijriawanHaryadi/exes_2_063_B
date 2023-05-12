
#include <iostream>
using namespace std;

int n;
int r[95];
int i;

void input(int r[], int n)
{
    while (true) {
        cout << " Massukan jumlah angka pada r:";
        cin >> n;
        if ((n > 0) && (n <= 95))
            break;
        else
            cout << "\nMaksimum jumlah angka r 95.\n\n";
        cout << "===================\n";
        cout << "Massukan r nilai\n";
        cout << "===================\n";
        for (i = 0; i < n; i++)
        {
            cout << "<" << (i + 1) << "> ";
            cin >> r[i];
        }
    }
}


int prosedur(int r[], int rangga, int haryadi, int x) {

    int rangga = 0;
    int haryadi = n - 1;
   
    while (rangga <= haryadi) {
        int mid = rangga + (haryadi - rangga) / 2;

        if (r[mid] == x) {
            
            return mid;
        }
        else if (r[mid] < x) {
            
            rangga = mid + 1;
        }
        else {
            
            haryadi = mid - 1;
        }
    }

   
    return 0;
}

int main() {

    input(r, n);
    int n = sizeof(r) / sizeof(r[0]);
    int mid = rangga + (haryadi - rangga) / 2;
    return 0;
    prosedur (r, 0, n - 1, );

    if (mid ) {
        cout << "Nilai " << r << " tidak ditemukan di dalam array.";
    }
    else {
        cout << "Nilai " << r << " ditemukan di indeks ke-" << mid;
    }

    return 0;
}
