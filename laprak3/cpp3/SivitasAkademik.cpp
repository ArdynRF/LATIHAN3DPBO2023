#include "header.hh"

SivitasAkademik::SivitasAkademik(string NIK, string Nama, string JenisKelamin, string asal_univ, string email_edu)
    : Human(NIK, Nama, JenisKelamin), asal_univ(asal_univ), email_edu(email_edu) {}

string SivitasAkademik::get_asal_univ()
{
    return asal_univ;
}

void SivitasAkademik::set_asal_univ(string asal_univ)
{
    this->asal_univ = asal_univ;
}

string SivitasAkademik::get_email_edu()
{
    return email_edu;
}

void SivitasAkademik::set_email_edu(string email_edu)
{
    this->email_edu = email_edu;
}

SivitasAkademik::~SivitasAkademik() {}