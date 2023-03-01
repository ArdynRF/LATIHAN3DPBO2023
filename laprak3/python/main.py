
from Human_Mahasiswa_Dosen import Dosen
from Human_Mahasiswa_Dosen import Mahasiswa
from Human_Mahasiswa_Dosen import SivitasAkademik
from Course_Prodi import Course
from Course_Prodi import ProgramStudi

course = Course("DPBO")
course2 = Course("Sistem Operasi")
# mahasiswa = Mahasiswa("123456789", "Ardyn", "Laki-Laki", "Universitas XYZ",
#                       "ardyn@univxyz.com", "987654321", "Fakultas Teknik")
# mahasiswa2 = Mahasiswa("123456780", "Dinda", "Perempuan", "Universitas XYZ",
#                        "dinda@univxyz.com", "987654322", "Fakultas Teknik")
# mahasiswa3 = Mahasiswa("123456781", "Nugi", "Laki-Laki", "Universitas XYZ",
#                        "nugi@univxyz.com", "987654323", "Fakultas Ilmu Komputer")

# mahasiswa4 = Mahasiswa("123456789", "rizky", "Laki-Laki", "Universitas XYZ",
#                        "rizky@univxyz.com", "987654321", "Fakultas Teknik")
# mahasiswa5 = Mahasiswa("123456780", "ghafur", "Laki-Laki", "Universitas XYZ",
#                        "ghafur@univxyz.com", "987654322", "Fakultas Teknik")
# mahasiswa6 = Mahasiswa("123456781", "bayu", "Laki-Laki", "Universitas XYZ",
#                        "bayu@univxyz.com", "987654323", "Fakultas Ilmu Komputer")

dosen1 = Dosen("987654321", "Dina", "Perempuan", "Universitas XYZ", "dina@univxyz.com",
               "123456789", "Fakultas Teknik", "S3 Teknik Informatika", "Pengolahan Data")
dosen2 = Dosen("11111111", "Jane Smith", "Perempuan", "Universitas XYZ", "jane.smith@univxyz.com",
               "12345678", "Fakultas Teknik", "S3 Teknik Informatika", "Artificial Intelligence")
dosen3 = Dosen("22222222", "Bob Johnson", "Laki-Laki", "Universitas XYZ", "bob.johnson@univxyz.com",
               "23456789", "Fakultas Teknik", "S3 Teknik Informatika", "Machine Learning")


# Create program studi and add course
prodi = ProgramStudi("Informatika", "123")
prodi.add_course(course)
prodi.add_course(course2)


# add the new Mahasiswa instances to the course
# course.add_mahasiswa(mahasiswa)
# course.add_mahasiswa(mahasiswa2)
# course.add_mahasiswa(mahasiswa3)
# adding dosen to prodi
# course.add_dosen(dosen1)
# course.add_dosen(dosen2)
# course.add_dosen(dosen3)

# Print information
print("Program Studi:", prodi.nama_prodi)
print("Kode:", prodi.kode)

for course in prodi.courses:
    print("\nMata Kuliah:", course.nama_matakuliah, "\n")
    d = int(input("Masukkan berapa banyak orang Dosen: "))

    for i in range(d):
        print(f"Dosen ke-{i+1}")
        nik = input("NIK: ")
        nama = input("Nama: ")
        jk = input("Jenis Kelamin: ")
        univ = input("Asal Univ: ")
        email = input("Email: ")
        nip = input("NIP: ")
        fakultas = input("Fakultas: ")
        pend_terakhir = input("Pendidikan Terakhir: ")
        keahlian = input("Keahlian: ")
        print()

        # create a Dosen object using user input
        tempD = Dosen(nik, nama, jk, univ, email, nip,
                      fakultas, pend_terakhir, keahlian)
        course.add_dosen(tempD)

    n = int(input("Masukkan berapa banyak orang Mahasiswa: "))

    for i in range(n):
        print(f"Mahasiswa ke-{i+1}")
        nik = int(input("NIK: "))
        name = input("Nama: ")
        kelamin = input("Jenis Kelamin: ")
        univ = input("Asal Univ: ")
        email = input("Email: ")
        nim = int(input("NIM: "))
        fakultas = input("Fakultas: ")
        print()

        tempM = Mahasiswa(nik, name, kelamin, univ, email, nim, fakultas)
        course.add_mahasiswa(tempM)

    print("\nMata Kuliah:", course.nama_matakuliah, "\n")

    print("Daftar Mahasiswa:")

    for mahasiswa in course.mahasiswa:
        print(" Nama:", mahasiswa.Nama)
        print(" NIM:", mahasiswa.NIM)
        print(" Fakultas:", mahasiswa.fakultas)

    print("\nDaftar Dosen:")

    for dosen in course.dosen:
        print(" Nama:", dosen.Nama)
        print(" NIP:", dosen.NIP)
        print(" Fakultas:", dosen.fakultas)


# print("\nDosen:")
# print("Nama:", dosen.Nama)
# print("NIK:", dosen.NIK)
# print("NIP:", dosen.NIP)
# print("Jenis Kelamin:", dosen.JenisKelamin)
# print("Asal Universitas:", dosen.asal_univ)
# print("Email Edu:", dosen.email_edu)
# print("Fakultas:", dosen.fakultas)
# print("Pendidikan Terakhir:", dosen.pend_terakhir)
# print("Keahlian:", dosen.keahlian)
