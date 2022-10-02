#include <iostream>

using namespace std;

int main()
{
    int jurusan;
    cout << "==Jurusan==\n1. Teknik Informatika\n2. Sistem Informasi\n3. DKV"<< endl;
    cout << "Masukan Jurusan anda: ";
    cin >> jurusan;

    if (jurusan == 1){
        cout << "Jurusan anda adalah Teknik Informatika" << endl;
        }

    else if (jurusan == 2 || 3) {
        cout << "Jurusan tidak diketahui" << endl;
    }


    else if (jurusan > 3 ) {
        cout << "Jurusan tidak diketahui" << endl;
    }

return 0;
}

