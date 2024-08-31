# Program-CPP_TLS24
Fatih Abdurrahman Rahmat (Norton)

Program ini adalah aplikasi sederhana untuk menghitung **Body Mass Index (BMI)**, yang membantu pengguna mengetahui apakah berat badan mereka termasuk dalam kategori kurus, normal, kelebihan berat badan, atau obesitas berdasarkan tinggi dan berat badan yang dimasukkan.

### Penjelasan Singkat:
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
