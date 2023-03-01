class Human:
    def __init__(self, NIK, Nama, JenisKelamin):
        self.NIK = NIK
        self.Nama = Nama
        self.JenisKelamin = JenisKelamin

    def get_NIK(self):
        return self.NIK

    def set_NIK(self, NIK):
        self.NIK = NIK

    def get_Nama(self):
        return self.Nama

    def set_Nama(self, Nama):
        self.Nama = Nama

    def get_JenisKelamin(self):
        return self.JenisKelamin

    def set_JenisKelamin(self, JenisKelamin):
        self.JenisKelamin = JenisKelamin


class SivitasAkademik(Human):
    def __init__(self, NIK, Nama, JenisKelamin, asal_univ, email_edu):
        super().__init__(NIK, Nama, JenisKelamin)
        self.asal_univ = asal_univ
        self.email_edu = email_edu

    def get_asal_univ(self):
        return self.asal_univ

    def set_asal_univ(self, asal_univ):
        self.asal_univ = asal_univ

    def get_email_edu(self):
        return self.email_edu

    def set_email_edu(self, email_edu):
        self.email_edu = email_edu


class Dosen(SivitasAkademik):
    def __init__(self, NIK, Nama, JenisKelamin, asal_univ, email_edu, NIP, fakultas, pend_terakhir, keahlian):
        super().__init__(NIK, Nama, JenisKelamin, asal_univ, email_edu)
        self.NIP = NIP
        self.fakultas = fakultas
        self.pend_terakhir = pend_terakhir
        self.keahlian = keahlian

    def get_NIP(self):
        return self.NIP

    def set_NIP(self, NIP):
        self.NIP = NIP

    def get_fakultas(self):
        return self.fakultas

    def set_fakultas(self, fakultas):
        self.fakultas = fakultas

    def get_pend_terakhir(self):
        return self.pend_terakhir

    def set_pend_terakhir(self, pend_terakhir):
        self.pend_terakhir = pend_terakhir

    def get_keahlian(self):
        return self.keahlian

    def set_keahlian(self, keahlian):
        self.keahlian = keahlian


class Mahasiswa(SivitasAkademik):
    def __init__(self, NIK, Nama, JenisKelamin, asal_univ, email_edu, NIM, fakultas):
        super().__init__(NIK, Nama, JenisKelamin, asal_univ, email_edu)
        self.NIM = NIM
        self.fakultas = fakultas

    def get_NIM(self):
        return self.NIM

    def set_NIM(self, NIM):
        self.NIM = NIM

    def get_fakultas(self):
        return self.fakultas

    def set_fakultas(self, fakultas):
        self.fakultas = fakultas
