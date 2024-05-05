// 1. contoh deklarasi variabel dengan tipe data yang berbeda
int (bilangan bulat) : umur
string (teks) : nama
float (bilangan pecahan) : nilai

// 2. contoh implementasi dari prosedur dan fungsi
#include <iostream>
using namespace std;

int main() {
    int bilangan;
    srand(time(0));

    bilangan = rand() % 10;
    cout << "Nilai Awalnya : " << bilangan << endl;

    if (bilangan < 5)
    {
        bilangan = 2 * bilangan;
    }

    cout << "Nilai Sekarang : " << bilangan;
}

// 3. contoh implementasi dari looping
#include <iostream>
using namespace std;

int main() {
    // Looping dengan for
    for (int i = 0; i < 5; i++) {
        cout << "Nilai i: " << i << endl;
    }
    return 0;
}

// 4. contoh implementasi dari conditional statement
#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

int main() {
    // Memanggil fungsi add
    int result = add(5, 7);
    cout << "Hasil penjumlahan: " << result << endl;
    return 0;
}

// 5. contoh implementasi dari struct

// 6. sensor pada badan pengawasan kualitas udara
