# Program-CPP_TLS24
Fatih Abdurrahman Rahmat (Norton)

Program ini adalah aplikasi sederhana untuk menghitung **Body Mass Index (BMI)**, yang membantu pengguna mengetahui apakah berat badan mereka termasuk dalam kategori kurus, normal, kelebihan berat badan, atau obesitas berdasarkan tinggi dan berat badan yang dimasukkan.

## 👋｜Penjelasan Singkat
1. **Input Pengguna:** 
   - Pengguna diminta untuk memasukkan tinggi badan dalam meter dan berat badan dalam kilogram.
   
2. **Perhitungan BMI:** 
   - Program menggunakan rumus BMI:
     
     $`
     BMI = \frac{\text{berat badan (kg)}}{\text{tinggi badan (m)}^2}
     `$
   - Perhitungan ini dilakukan dengan memanfaatkan fungsi `std::pow` dari library `cmath`.

3. **Kategori BMI:**
   - Program menggunakan pernyataan `if-else` untuk menentukan kategori BMI:
     - **Kurus:** BMI < 18.5
     - **Normal:** 18.5 ≤ BMI < 24.9
     - **Kelebihan berat badan:** 25.0 ≤ BMI < 29.9
     - **Obesitas:** BMI ≥ 30

4. **Output:**
   - Program menampilkan nilai BMI dan memberikan pesan yang sesuai dengan kategori BMI pengguna.

5. **Penutupan Program:**
   - Untuk mencegah terminal tertutup secara otomatis, program menunggu pengguna menekan tombol apa saja sebelum keluar. Ini dilakukan dengan kombinasi `std::cin.ignore()` dan `std::cin.get()`.

Program ini membantu pengguna untuk mengetahui status berat badan mereka dan memberikan informasi yang bermanfaat dengan cara yang sederhana dan interaktif.

## ❓｜Cara Menggunakan Aplikasi
1. Anda bisa mengunduh file BMI_Calculator.exe terlebih dahulu
2. Kemudian anda bisa menjalankan file BMI_Calculator.exe dengan mengklik dua kali
3. Setelah terminal jalan, masukkan nilai tinggi badan (dalam meter) dan berat badan (dalam kilogram) ke dalam terminal.
4. Kemudian program akan menampilkan BMI dan kategori sesuai dengan hasil perhitungan.

  Contoh Hasil:
```
Masukkan tinggi badan Anda (dalam meter): 1.75
Masukkan berat badan Anda (dalam kilogram): 68
BMI Anda adalah: 22.2041
Anda memiliki berat badan normal.
```

## 🚧｜Prasyarat (untuk menghasilkan aplikasi .exe)
- Jika Anda menggunakan Windows, pastikan sudah menginstal MinGW atau TDM-GCC untuk mengkompilasi program C++.
- Di Linux atau macOS, biasanya sudah tersedia compiler g++ secara default.

## 📝｜Cara Menghasilkan Aplikasi
1. Buka Command Prompt (Windows) atau Terminal (Linux/macOS).
2. Navigasi ke Direktori tempat file sumber (.cpp) berada, misalnya:
```
cd path\to\your\directory
```
   - Gantilah path\to\your\directory dengan jalur direktori yang sesuai.

3. Jalankan Perintah Kompilasi:
- Untuk menghasilkan file BMI_Calculator.exe, gunakan perintah berikut:
```
g++ -o BMI_Calculator.exe BMI_Calculator.cpp
```
4. Aplikasi anda sudah jadi dengan nama file BMI_Calculator.exe
