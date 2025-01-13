#include <iostream>
#include "mahasiswa.h"

using namespace std;

int main() {
    int jumlahMahasiswa, jumlahMataKuliah;
    float passingGrade = 60.0; // Nilai minimum kelulusan

    // Input jumlah mahasiswa dan mata kuliah
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;
    cout << "Masukkan jumlah mata kuliah: ";
    cin >> jumlahMataKuliah;

    // Vektor untuk menyimpan data
    vector<string> names;
    vector<vector<int>> scores(jumlahMahasiswa, vector<int>(jumlahMataKuliah));
    vector<float> averages(jumlahMahasiswa);

    // Memanggil fungsi untuk setiap proses
    inputMahasiswa(names, scores, jumlahMataKuliah);
    hitungRataRata(names, scores, averages);
    tampilkanHasil(names, averages, passingGrade);

    return 0;
}
