class Course:
    def __init__(self, nama_matakuliah):
        self.nama_matakuliah = nama_matakuliah
        self.mahasiswa = []
        self.dosen = []

    def add_mahasiswa(self, mahasiswa):
        self.mahasiswa.append(mahasiswa)

    def add_dosen(self, dosen):
        self.dosen.append(dosen)


class ProgramStudi:
    def __init__(self, nama_prodi, kode):
        self.nama_prodi = nama_prodi
        self.kode = kode
        self.courses = []

    def add_course(self, course):
        self.courses.append(course)
