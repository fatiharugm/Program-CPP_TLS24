#include <iostream>
#include <cmath>  // Menggunakan library cmath untuk perhitungan

int main() {
    // Input tinggi dan berat
    double height, weight;
    std::cout << "Masukkan tinggi badan Anda (dalam meter): ";
    std::cin >> height;
    std::cout << "Masukkan berat badan Anda (dalam kilogram): ";
    std::cin >> weight;

    // Proses perhitungan BMI
    double bmi = weight / std::pow(height, 2);

    // Output nilai BMI
    std::cout << "BMI Anda adalah: " << bmi << std::endl;

    // Conditional statement untuk menentukan kategori BMI
    if (bmi < 18.5) {
        std::cout << "Anda tergolong kurus." << std::endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        std::cout << "Anda memiliki berat badan normal." << std::endl;
    } else if (bmi >= 25.0 && bmi < 29.9) {
        std::cout << "Anda tergolong kelebihan berat badan." << std::endl;
    } else {
        std::cout << "Anda tergolong obesitas." << std::endl;
    }

    // Menunggu input dari pengguna sebelum keluar
    std::cout << "Tekan tombol apa saja untuk keluar..." << std::endl;
    std::cin.ignore();  // Mengabaikan karakter newline yang tertinggal
    std::cin.get();     // Menunggu input dari pengguna

    return 0;
}
