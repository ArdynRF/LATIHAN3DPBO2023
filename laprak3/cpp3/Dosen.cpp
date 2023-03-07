#include "header.hh"

Dosen::Dosen(string NIK, string Nama, string JenisKelamin, string asal_univ, string email_edu, string NIP, string fakultas, string pend_terakhir, string keahlian)
    : SivitasAkademik(NIK, Nama, JenisKelamin, asal_univ, email_edu), NIP(NIP), fakultas(fakultas), pend_terakhir(pend_terakhir), keahlian(keahlian) {}

string Dosen::get_NIP()
{
    return NIP;
}

void Dosen::set_NIP(string NIP)
{
    this->NIP = NIP;
}

string Dosen::get_fakultas()
{
    return fakultas;
}

void Dosen::set_fakultas(string fakultas)
{
    this->fakultas = fakultas;
}

string Dosen::get_pend_terakhir()
{
    return pend_terakhir;
}

void Dosen::set_pend_terakhir(string pend_terakhir)
{
    this->pend_terakhir = pend_terakhir;
}

string Dosen::get_keahlian()
{
    return pend_terakhir;
}

void Dosen::set_keahlian(string keahlian)
{
    this->keahlian = keahlian;
}

Dosen::~Dosen() {}
