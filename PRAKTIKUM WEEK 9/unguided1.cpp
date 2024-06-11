#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int jumlahsimpul1_2311102067;
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> jumlahsimpul1_2311102067;

    string simpul[jumlahsimpul1_2311102067];
    int busur[jumlahsimpul1_2311102067][jumlahsimpul1_2311102067];

    for (int i = 0; i < jumlahsimpul1_2311102067; i++) {
        cout << "Simpul " << i + 1 << ": ";
        cin >> simpul[i];
    }

    for (int i = 0; i < jumlahsimpul1_2311102067; i++) {
        for (int j = 0; j < jumlahsimpul1_2311102067; j++) {
            cout << "Silakan masukkan bobot antara simpul " << simpul[i] << " dan " << simpul[j] << ": ";
            cin >> busur[i][j];
        }
    }

    cout << "\nGraf yang dihasilkan:\n";
    cout << setw(15) << " ";
    for (int i = 0; i < jumlahsimpul1_2311102067; i++) {
        cout << setw(15) << simpul[i];
    }
    cout << endl;

    for (int i = 0; i < jumlahsimpul1_2311102067; i++) {
        cout << setw(15) << simpul[i];
        for (int j = 0; j < jumlahsimpul1_2311102067; j++) {
            cout << setw(15) << busur[i][j];
        }
        cout << endl;
    }

    return 0;
}