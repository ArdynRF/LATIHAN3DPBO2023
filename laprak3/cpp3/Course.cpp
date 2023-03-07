#include "header.hh"

Course::Course() {}

Course::Course(string nama_matakuliah)
{
    this->nama_matakuliah = nama_matakuliah;
}

string Course::get_nama_matakuliah()
{
    return nama_matakuliah;
}

void Course::set_nama_matakuliah(string nama_matakuliah)
{
    this->nama_matakuliah = nama_matakuliah;
}

Course::~Course() {}
