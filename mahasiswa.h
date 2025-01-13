#ifndef MAHASISWA_H
#define MAHASISWA_H

#include <vector>
#include <string>

void inputMahasiswa(std::vector<std::string>& names, std::vector<std::vector<int>>& scores, int jumlahMataKuliah);
void hitungRataRata(const std::vector<std::string>& names, const std::vector<std::vector<int>>& scores, std::vector<float>& averages);
void tampilkanHasil(const std::vector<std::string>& names, const std::vector<float>& averages, float passingGrade);

#endif // MAHASISWA_H
