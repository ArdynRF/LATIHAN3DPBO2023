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
* **SivitasAkademik**
* **Dosen**
* **Mahasiswa**
* **Course**
* **Prodi**

Pada class `Human` terdapat tiga atribut:
* **nama**               -> merupakan nama human, tipe data `string`
* **nik**                -> merupakan NIK human, bertipe data `int`
* **jenis_kelamin**      -> merupakan jenis kelamin human, bertipe data `string`
class ini merupakan parents dari class `SivitasAkademik`

Kemudian pada class `SivitasAkademik` merupakan pewarisan dari class `Human`
pada class 'SivitasAkademik' memiliki dua atribut:
* **asal_universitas**   -> merupakan asal universitas mahasiswa, tipe data `string`
* **email**              -> merupakan email mahasiswa, tipe data `string`
Class ini merupakan subclass dari class `Human` karena pada sivitas akademik ini merupakan kumpulan dari manusia.

Lalu pada class `Mahasiswa`, merupakan pewarisan dari class `SivitasAkademik`
pada class 'Mahasiswa' terdapat tiga atribut:
* **nim**               -> merupakan nim mahasiswa, tipe data `int`
* **fakultas**          -> merupakan fakultas mahasiswa, tipe data `string`
* **prodi**             -> merupakan program studi mahasiswa, tipe data `string`
Class ini merupakan subclass dari class `SivitasAkademik` karena pada sivitas akademik sendiri terdiri dari Mahasiswa salah satunya.

Lalu pada class `Dosen`, merupakan pewarisan dari class `SivitasAkademik`
pada class 'Mahasiswa' terdapat lima atribut:
* **fakultas**          -> merupakan fakultas dosen, tipe data `string`
* **prodi**             -> merupakan program studi dosen, tipe data `string`
* **pend_terakhir**     -> merupakan pendidikan terakhir dari dosen,, tipe data `string`
* **keahlian**          -> merupakan keahlian dari dosen, tipe data `string`
Class ini merupakan subclass dari class `SivitasAkademik` karena pada sivitas akademik sendiri terdiri dari Dosen salah satunya.
Tiap atribut memiliki method setter dan getternya masing-masing.

Class `Course`, class ini memiliki composite terhadap class `Mahasiswa` dan `Dosen` pada class ini memiliki satu atribut saja yaitu:
* **nama_matakuliah**   -> merupakan nama dari mata kuiah
Hubungan composite dengan class `Mahasiswa` dan `Dosen` yakni many to many maka dari itu dalam class ini terdapat array of object dari kedua kelas tersebut.

Terakhir ada class `ProgramStudi`, class ini memiiki composite terhadap course. Class ini memiliki 2 atribut yakni:
* **kode**
* **nama_prodi**
Pada class ini memiliki array of object dari class `course` dikarenakan pada prodi terdapat banyak mata kuliah yg dimiliki.

##Alur Program
Di bagian main terdapat hardcode untuk class `Programstudi` dan `Course`. Setelah itu diminta inputan user untuk memasukkan jumlah mahasiswa pada course yang ada, setelah itu user diminta untuk memasukkan data mahasiswa. Lalu user diminta untuk memasukkan jumlah dosen, lalu memasukkan data dosen.
Terakhir data mahasiswa dan dosen akan ditampilkan 

## Screenshot Program
* **PHP**
![Screenshot - ](https://github.com/ArdynRF/LATIHAN2DPBO2023/blob/main/laprak2/screenshot/Screenshot%202023-02-21%20180622.png)
* **Python**
![Screenshot - ](https://github.com/ArdynRF/LATIHAN2DPBO2023/blob/main/laprak2/screenshot/Screenshot%202023-02-21%20180535.png)
![Screenshot - ](https://github.com/ArdynRF/LATIHAN2DPBO2023/blob/main/laprak2/screenshot/Screenshot%202023-02-21%20180535.png)
