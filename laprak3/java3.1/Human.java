// package laprak3.java3;

class Human {
    private String NIK;
    private String Nama;
    private String JenisKelamin;

    public Human(String NIK, String Nama, String JenisKelamin) {
        this.NIK = NIK;
        this.Nama = Nama;
        this.JenisKelamin = JenisKelamin;
    }

    public String get_NIK() {
        return this.NIK;
    }

    public void set_NIK(String NIK) {
        this.NIK = NIK;
    }

    public String get_Nama() {
        return this.Nama;
    }

    public void set_Nama(String Nama) {
        this.Nama = Nama;
    }

    public String get_JenisKelamin() {
        return this.JenisKelamin;
    }

    public void set_JenisKelamin(String JenisKelamin) {
        this.JenisKelamin = JenisKelamin;
    }
}

class SivitasAkademik extends Human {
    private String asal_univ;
    private String email_edu;

    public SivitasAkademik(String NIK, String Nama, String JenisKelamin, String asal_univ, String email_edu) {
        super(NIK, Nama, JenisKelamin);
        this.asal_univ = asal_univ;
        this.email_edu = email_edu;
    }

    public String get_asal_univ() {
        return this.asal_univ;
    }

    public void set_asal_univ(String asal_univ) {
        this.asal_univ = asal_univ;
    }

    public String get_email_edu() {
        return this.email_edu;
    }

    public void set_email_edu(String email_edu) {
        this.email_edu = email_edu;
    }
}

class Dosen extends SivitasAkademik {
    private String NIP;
    private String fakultas;
    private String pend_terakhir;
    private String keahlian;

    public Dosen(String NIK, String Nama, String JenisKelamin, String asal_univ, String email_edu, String NIP,
            String fakultas, String pend_terakhir, String keahlian) {
        super(NIK, Nama, JenisKelamin, asal_univ, email_edu);
        this.NIP = NIP;
        this.fakultas = fakultas;
        this.pend_terakhir = pend_terakhir;
        this.keahlian = keahlian;
    }

    public String get_NIP() {
        return this.NIP;
    }

    public void set_NIP(String NIP) {
        this.NIP = NIP;
    }

    public String get_fakultas() {
        return this.fakultas;
    }

    public void set_fakultas(String fakultas) {
        this.fakultas = fakultas;
    }

    public String get_pend_terakhir() {
        return this.pend_terakhir;
    }

    public void set_pend_terakhir(String pend_terakhir) {
        this.pend_terakhir = pend_terakhir;
    }

    public String get_keahlian() {
        return this.keahlian;
    }

    public void set_keahlian(String keahlian) {
        this.keahlian = keahlian;
    }
}

class Mahasiswa extends SivitasAkademik {
    private String NIM;
    private String fakultas;

    public Mahasiswa(String NIK, String Nama, String JenisKelamin, String asal_univ, String email_edu, String NIM,
            String fakultas) {
        super(NIK, Nama, JenisKelamin, asal_univ, email_edu);
        this.NIM = NIM;
        this.fakultas = fakultas;
    }

    public String get_NIM() {
        return NIM;
    }

    public void set_NIM(String NIM) {
        this.NIM = NIM;
    }

    public String get_fakultas() {
        return fakultas;
    }

    public void set_fakultas(String fakultas) {
        this.fakultas = fakultas;
    }

}