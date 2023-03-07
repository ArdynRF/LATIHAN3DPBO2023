#include "header.hh"

programStudi::programStudi() {}

programStudi::programStudi(string nama_prodi, string kode)
{
    this->nama_prodi = nama_prodi;
    this->kode = kode;
}

string programStudi::get_nama_prodi()
{
    return nama_prodi;
}

void programStudi::set_nama_prodi(string nama_prodi)
{
    this->nama_prodi = nama_prodi;
}

string programStudi::get_kode()
{
    return kode;
}

void programStudi::set_kode(string kode)
{
    this->kode = kode;
}

programStudi::~programStudi() {}