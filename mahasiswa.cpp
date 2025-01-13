#include "mahasiswa.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Fungsi untuk input data mahasiswa
void inputMahasiswa(vector<string>& names, vector<vector<int>>& scores, int jumlahMataKuliah) {
    for (int i = 0; i < scores.size(); i++) {
        string name;
        cout << "Masukkan nama mahasiswa ke-" << i + 1 << ": ";
        cin.ignore();
        getline(cin, name);
        names.push_back(name);

        for (int j = 0; j < jumlahMataKuliah; j++) {
            cout << "Masukkan nilai mata kuliah ke-" << j + 1 << " untuk " << name << ": ";
            cin >> scores[i][j];
        }
    }
}

// Fungsi untuk menghitung rata-rata nilai mahasiswa
void hitungRataRata(const vector<string>& names, const vector<vector<int>>& scores, vector<float>& averages) {
    for (int i = 0; i < scores.size(); i++) {
        float total = 0;
        for (int j = 0; j < scores[i].size(); j++) {
            total += scores[i][j];
        }
        averages[i] = total / scores[i].size();
    }
}

// Fungsi untuk menampilkan hasil
void tampilkanHasil(const vector<string>& names, const vector<float>& averages, float passingGrade) {
    cout << "\nHasil Penilaian Mahasiswa:\n";
    for (int i = 0; i < names.size(); i++) {
        cout << "Nama: " << names[i] << ", Rata-rata: " << averages[i];
        if (averages[i] >= passingGrade) {
            cout << " (Lulus)" << endl;
        } else {
            cout << " (Tidak Lulus)" << endl;
        }
    }
}
