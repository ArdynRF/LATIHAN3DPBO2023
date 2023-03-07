#include <string>
#include <iostream>
#include <list>

using namespace std;

class Human
{
protected:
    string NIK;
    string Nama;
    string JenisKelamin;

public:
    Human(string NIK, string Nama, string JenisKelamin);
    string get_NIK();
    void set_NIK(string NIK);
    string get_Nama();
    void set_Nama(string Nama);
    string get_JenisKelamin();
    void set_JenisKelamin(string JenisKelamin);
    ~Human();
};

class SivitasAkademik : public Human
{
protected:
    string asal_univ;
    string email_edu;

public:
    SivitasAkademik(string NIK, string Nama, string JenisKelamin, string asal_univ, string email_edu);
    string get_asal_univ();
    void set_asal_univ(string asal_univ);
    string get_email_edu();
    void set_email_edu(string email_edu);
    ~SivitasAkademik();
};

class Mahasiswa : public SivitasAkademik
{
protected:
    string NIM;
    string fakultas;

public:
    Mahasiswa(string NIK, string Nama, string JenisKelamin, string asal_univ, string email_edu, string NIM, string fakultas);
    string get_NIM();
    void set_NIM(string NIM);
    string get_fakultas();
    void set_fakultas(string fakultas);
    ~Mahasiswa();
};

class Dosen : public SivitasAkademik
{
protected:
    string NIP;
    string fakultas;
    string pend_terakhir;
    string keahlian;

public:
    Dosen();
    Dosen(string NIK, string Nama, string JenisKelamin, string asal_univ, string email_edu, string NIP, string fakultas, string pend_terakhir, string keahlian);
    string get_NIP();
    void set_NIP(string NIP);
    string get_fakultas();
    void set_fakultas(string fakultas);
    string get_pend_terakhir();
    void set_pend_terakhir(string pend_terakhir);
    string get_keahlian();
    void set_keahlian(string keahlian);
    ~Dosen();
};

class Course
{
protected:
    string nama_matakuliah;

public:
    list<Mahasiswa> LMahasiswa;
    list<Dosen> LDosen;
    Course();
    Course(string nama_matakuliah);
    string get_nama_matakuliah();
    void set_nama_matakuliah(string nama_matakuliah);
    ~Course();
};

class programStudi
{
protected:
    string nama_prodi;
    string kode;

public:
    list<Course> LCourse;
    programStudi();
    programStudi(string nama_prodi, string kode);
    string get_nama_prodi();
    void set_nama_prodi(string nama_prodi);
    string get_kode();
    void set_kode(string kode);
    ~programStudi();
};
