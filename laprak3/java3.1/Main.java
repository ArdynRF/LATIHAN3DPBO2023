// package laprak3.java3

public class Main {
    public static void main(String[] args) {
        // create a new program studi object
        ProgramStudi prodi = new ProgramStudi("Teknik Informatika", "TI");

        // create some course objects
        Course course1 = new Course("Pemrograman Java");
        Course course2 = new Course("Algoritma dan Struktur Data");
        Course course3 = new Course("Basis Data");

        // add the courses to the program studi
        prodi.addCourse(course1);
        prodi.addCourse(course2);
        prodi.addCourse(course3);

        // create some Dosen objects
        Dosen dosen1 = new Dosen("3333333333", "Erik", "L", "Universitas Z", "erik@univz.edu", "12345",
                "Teknik Informatika", "S3", "Jaringan Komputer");
        Dosen dosen2 = new Dosen("4444444444", "Fika", "P", "Universitas W", "fika@univw.edu", "67890",
                "Sistem Informasi", "S2", "Data Mining");

        // create some Mahasiswa objects
        Mahasiswa mahasiswa1 = new Mahasiswa("1234567890", "Ani", "Perempuan", "Universitas Indonesia",
                "ani.ui@gmail.com", "21000001", "Fakultas Ilmu Komputer");
        Mahasiswa mahasiswa2 = new Mahasiswa("1234567891", "Budi", "Laki-laki", "Universitas Indonesia",
                "budi.ui@gmail.com", "21000002", "Fakultas Matematika dan Ilmu Pengetahuan Alam");

        // add the humans, SivitasAkademik, and Dosen to the courses
        course1.addMahasiswa(mahasiswa1);
        course1.addMahasiswa(mahasiswa2);
        course1.addDosen(dosen1);

        course2.addMahasiswa(mahasiswa1);
        course2.addDosen(dosen2);

        course3.addDosen(dosen1);
        course3.addDosen(dosen2);
        course3.addMahasiswa(mahasiswa1);

        // print out some information
        System.out.println("Program Studi: " + prodi.getNamaProdi());
        System.out.println("Kode Prodi: " + prodi.getKode());
        System.out.println("Courses: ");
        for (Course course : prodi.getCourses()) {
            System.out.println(" - " + course.getNamaMatakuliah());
            System.out.println("   Dosen: ");
            for (Dosen dosen : course.getDosen()) {
                System.out.println("   - " + dosen.get_Nama());
            }
            System.out.println("   Mahasiswa: ");
            for (Mahasiswa mahasiswa : course.getMahasiswa()) {
                System.out.println("   - " + mahasiswa.get_Nama());
            }
        }
    }
}