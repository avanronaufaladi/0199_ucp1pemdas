// 1. A.int(integer) B.char c.array
// 2.melakukan suatu progam yang saat diuji terdapat satu kondisi yang digunakan
// 3.digunakan untuk menghitung data nilai mahasiswa
// 4.prosedur: satu blok untuk mengoperasikan data tapi tidak mengembalikan nilai
//   fungsi: satu blok tertentu untuk mengoperasikan progam,dan mengembalikan nilai
// 5. memasukkan variabel untuk menginput data mahasiswa dan yang lainnya untuk menampilkan status penerimaan mahasiswa
// 6.


#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int nilai_matematika;
    int nilai_inggris;
    int status; 
};

int main() {
    const int jumlah_mahasiswa = 3;
    Mahasiswa daftar_mahasiswa[jumlah_mahasiswa];

    for (int i = 0; i < jumlah_mahasiswa; ++i) {
        Mahasiswa m;
        cout << "Masukkan nama mahasiswa ke-" << i + 1 << ": ";
        getline(cin, m.nama);
        cout << "Masukkan nilai matematika mahasiswa " << m.nama << ": ";
        cin >> m.nilai_matematika;
        cout << "Masukkan nilai inggris mahasiswa " << m.nama << ": ";
        cin >> m.nilai_inggris;
        cin.ignore(); 
        daftar_mahasiswa[i] = m;
    }

    for (int i = 0; i < jumlah_mahasiswa; ++i) {
        float rata_rata = (daftar_mahasiswa[i].nilai_matematika + daftar_mahasiswa[i].nilai_inggris) / 2.0;
        if (rata_rata >= 70 || daftar_mahasiswa[i].nilai_matematika >= 80) {
            daftar_mahasiswa[i].status = 1;
        }
        else {
            daftar_mahasiswa[i].status = 0;
        }
    }

    cout << "Status Penerimaan Mahasiswa:" << endl;
    for (int i = 0; i < jumlah_mahasiswa; ++i) {
        cout << "Nama: " << daftar_mahasiswa[i].nama << ", Status: ";
        if (daftar_mahasiswa[i].status == 1) {
            cout << "Diterima" << endl;
        }
        else {
            cout << "Tidak Diterima" << endl;
        }
    }


    return 0;
}

