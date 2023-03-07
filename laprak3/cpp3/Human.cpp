#include "header.hh"

Human::Human(string NIK, string Nama, string JenisKelamin) : NIK(NIK), Nama(Nama), JenisKelamin(JenisKelamin) {}

string Human::get_NIK()
{
    return NIK;
}

void Human::set_NIK(string NIK)
{
    this->NIK = NIK;
}

string Human::get_Nama()
{
    return Nama;
}

void Human::set_Nama(string Nama)
{
    this->Nama = Nama;
}

string Human::get_JenisKelamin()
{
    return JenisKelamin;
}

void Human::set_JenisKelamin(string JenisKelamin)
{
    this->JenisKelamin = JenisKelamin;
}

Human::~Human() {}
