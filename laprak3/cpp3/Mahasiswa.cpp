#include "header.hh"

Mahasiswa::Mahasiswa(string NIK, string Nama, string JenisKelamin, string asal_univ, string email_edu, string NIM, string fakultas)
    : SivitasAkademik(NIK, Nama, JenisKelamin, asal_univ, email_edu), NIM(NIM), fakultas(fakultas) {}

string Mahasiswa::get_NIM()
{
    return NIM;
}

void Mahasiswa::set_NIM(string NIM)
{
    this->NIM = NIM;
}

string Mahasiswa::get_fakultas()
{
    return fakultas;
}

void Mahasiswa::set_fakultas(string fakultas)
{
    this->fakultas = fakultas;
}

Mahasiswa::~Mahasiswa() {}