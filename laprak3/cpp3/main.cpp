#include "header.hh"

int main()
{
    // create some Mahasiswa
    Mahasiswa mhs1("1234567890", "Ani", "Perempuan", "Universitas Indonesia", "ani.ui@gmail.com", "21000001", "Fakultas Ilmu Komputer");
    Mahasiswa mhs2("1234567891", "Budi", "Laki-laki", "Universitas Indonesia", "budi.ui@gmail.com", "21000002", "Fakultas Matematika dan Ilmu Pengetahuan Alam");

    // create some Dosen
    Dosen dsn1("0987654321", "Prof. Dr. Inge", "Perempuan", "Universitas Indonesia", "inge.ui@gmail.com", "12345678", "Fakultas Ilmu Komputer", "S3 Teknik Informatika", "Data Mining");
    Dosen dsn2("0987654322", "Dr. Januar", "Laki-laki", "Universitas Indonesia", "januar.ui@gmail.com", "12345679", "Fakultas Matematika dan Ilmu Pengetahuan Alam", "S2 Matematika", "Statistika");
    // create a programStudi and add the Course to it
    programStudi prodi1("Ilmu Komputer", "IF");
    Course course1("Pemrograman Berorientasi Objek");
    prodi1.LCourse.push_back(course1);

    // create a Course and add Mahasiswa to it
    course1.LMahasiswa.push_back(mhs1);
    course1.LMahasiswa.push_back(mhs2);

    course1.LDosen.push_back(dsn1);
    course1.LDosen.push_back(dsn2);

    cout << "Program Studi " << prodi1.get_nama_prodi() << endl;

    cout << "Course " << course1.get_nama_matakuliah() << endl;

    cout << "Daftar Mahasiswa: " << endl;
    for (auto mhs : course1.LMahasiswa)
    {
        cout << "Mahasiswa " << mhs.get_Nama() << endl;
        cout << "NIK: " << mhs.get_NIK() << endl;
        cout << "Jenis Kelamin: " << mhs.get_JenisKelamin() << endl;
    }

    // iterate through the list of Mahasiswa and print their information
    cout << "Daftar Dosen: " << endl;
    for (auto dsn : course1.LDosen)
    {
        cout << "Mahasiswa " << dsn.get_Nama() << endl;
        cout << "NIK: " << dsn.get_NIK() << endl;
        cout << "Jenis Kelamin: " << dsn.get_JenisKelamin() << endl;
        cout << "Asal Universitas: " << dsn.get_asal_univ() << endl;
    }
}
