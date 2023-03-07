// package laprak3.java3;

import java.util.ArrayList;

class Course {
    private String nama_matakuliah;
    private ArrayList<Mahasiswa> mahasiswa;
    private ArrayList<Dosen> dosen;

    public Course(String nama_matakuliah) {
        this.nama_matakuliah = nama_matakuliah;
        this.mahasiswa = new ArrayList<Mahasiswa>();
        this.dosen = new ArrayList<Dosen>();
    }

    public void addMahasiswa(Mahasiswa mahasiswa) {
        this.mahasiswa.add(mahasiswa);
    }

    public void addDosen(Dosen dosen) {
        this.dosen.add(dosen);
    }

    public String getNamaMatakuliah() {
        return this.nama_matakuliah;
    }

    public void setNamaMatakuliah(String nama_matakuliah) {
        this.nama_matakuliah = nama_matakuliah;
    }

    public ArrayList<Mahasiswa> getMahasiswa() {
        return this.mahasiswa;
    }

    public void setMahasiswa(ArrayList<Mahasiswa> mahasiswa) {
        this.mahasiswa = mahasiswa;
    }

    public ArrayList<Dosen> getDosen() {
        return this.dosen;
    }

    public void setDosen(ArrayList<Dosen> dosen) {
        this.dosen = dosen;
    }
}

class ProgramStudi {
    private String nama_prodi;
    private String kode;
    private ArrayList<Course> courses;

    public ProgramStudi(String nama_prodi, String kode) {
        this.nama_prodi = nama_prodi;
        this.kode = kode;
        this.courses = new ArrayList<Course>();
    }

    public void addCourse(Course course) {
        this.courses.add(course);
    }

    public String getNamaProdi() {
        return this.nama_prodi;
    }

    public void setNamaProdi(String nama_prodi) {
        this.nama_prodi = nama_prodi;
    }

    public String getKode() {
        return this.kode;
    }

    public void setKode(String kode) {
        this.kode = kode;
    }

    public ArrayList<Course> getCourses() {
        return this.courses;
    }

    public void setCourses(ArrayList<Course> courses) {
        this.courses = courses;
    }
}