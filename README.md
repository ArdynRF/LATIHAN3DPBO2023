# LATIHAN4DPBO2023
### Saya Ardyn Rezky Fahreza NIM 2103551 mengerjakan Latihan 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Deskripsi Tugas
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++ dan Python  yang mengimplementasikan konsep inheritance, composition, dan array of object pada kelas-kelas tersebut:
 o Mahasiswa: NIM, nama, jenis_kelamin, fakultas, prodi

 o Human: NIK, nama, jenis_kelamin

 o SivitasAkademik: asal_universitas, email_edu

 o Dosen: NIP, nama, jenis_kelamin, fakultas, prodi, pend_terakhir, keahlian

 o Course: nama_matakuliah, 

 o Program Studi: nama_prodi, kode, course

## Desain Program
Program didesain menjadi enam class:
* **Human**
* **Mahasiswa**
* **SivitasAkademik**

Pada class `Human` terdapat tiga atribut:
* **nama**               -> merupakan nama human, tipe data `string`
* **nik**                -> merupakan NIK human, bertipe data `int`
* **jenis_kelamin**      -> merupakan jenis kelamin human, bertipe data `string`

Lalu pada class `Mahasiswa`, merupakan pewarisan dari class `Human`
pada class 'Mahasiswa' terdapat tiga atribut:
* **nim**               -> merupakan nim mahasiswa, tipe data `int`
* **fakultas**          -> merupakan fakultas mahasiswa, tipe data `string`
* **prodi**             -> merupakan program studi mahasiswa, tipe data `string`

Tiap atribut memiliki setter dan getternya masing-masing yang berada pada class `Mahasiswa`.

Kemudian pada class `SivitasAkademik` meruapakan pewarisan dari class `Mahasiswa`
pada class 'SivitasAkademik' memiliki dua atribut:
* **asal_universitas**   -> merupakan asal universitas mahasiswa, tipe data `string`
* **email**              -> merupakan email mahasiswa, tipe data `string`

##Alur Program
Di bagian main terdapat 'arrray of object' class `Sivitas Akademik`, dengan demikian class `Human` dan `Mahasiswa` dapat digunakan. Untuk mengisi array menggunakan Hardcode

## Diagram UML
![Screenshot - ](https://github.com/ArdynRF/LATIHAN2DPBO2023/blob/main/laprak2/screenshot/Untitled%20Diagram.drawio.png)

## Screenshot Program
* **PHP**
![Screenshot - ](https://github.com/ArdynRF/LATIHAN2DPBO2023/blob/main/laprak2/screenshot/Screenshot%202023-02-21%20180622.png)
* **Python**
![Screenshot - ](https://github.com/ArdynRF/LATIHAN2DPBO2023/blob/main/laprak2/screenshot/Screenshot%202023-02-21%20180535.png)
