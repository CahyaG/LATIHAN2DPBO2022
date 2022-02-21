# Desain Pemrograman Berorientasi Objek

>Saya Cahya Gumilang (2003128) mengerjakan tugas LATIHAN2DPBO2022 dalam mata kuliah Desain dan Pemrograman Berbasis Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

Repository ini berisikan Latihan 2 pada mata kuliah Desain Pemrograman Berorientasi Objek tahun 2022. Di dalamnya terdapat beberapa implementasi Inheritance dalam bahasa  **C++**, **Java**, **PHP**, dan **Python**.

Modul dapat ditemukan di [Modul 2 - Single and Multilevels Inheritance (Java)](https://docs.google.com/document/d/1AMjpfPoy9NKuGhufJdrKkPFeoiY7di7X/edit)

### Usage

#### C++
```
g++ -c *.cpp
g++ main.cpp -o [filename].exe
```

#### Java
```
javac *.java
java Main
```

#### PHP
- Letakkan Folder yang berisi kode PHP di folder htdocs pada folder XAMPP
- Buka XAMPP dan jalankan Apache Web Server
- Buka Browser dan buka alamat berikut<br>
```localhost/[nama-folder]```

#### Python
```
py [filename].py
```

## Penjelasan Latihan
Project ini memiliki 3 kelas yaitu `Product`, `Hardware`, dan `Memory`. `Product` merupakan parent class dari `Hardware` dan `Hardware` merupakan parent class dari `Memory`. `Memory` merupakan suatu `Hardware` yang mana `Hardware` ini adalah salah satu `Product`.Adapun atribut - atribut dari setiap kelas adalah sebagai berikut.
- Product
    - idProduct <<span style="color: #00FFFF"> int </span>>
    - price <<span style="color: #00FFFF"> int </span>>
- Hardware
    - brand <<span style="color: lightgreen"> string </span>>
    - model <<span style="color: lightgreen"> string </span>>
- Memory
    - frequency <<span style="color: #00FFFF"> int </span>>
    - memorySize <<span style="color: #00FFFF"> int </span>>
    - supportCuda<<span style="color: blue"> boolean </span>>

## Screenshots Program
1. C++
![c++](/screenshots/cpp.png)
2. Java
![java](/screenshots/Java.png)
3. PHP
![PHP](/screenshots/php.png)
4. Python
![py](/screenshots/py.png)