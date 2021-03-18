package Java.Responsi09_1;

public class Rekening {
    // Daftar transaksi yang telah dilakukan pada rekening ini
    private Transaksi[] daftarTransaksi;
    // Jumlah transaksi yang telah dilakukan pada rekening ini
    private int jumlahTransaksi;
    // Jumlah transaksi maksimum yang dapat disimpan
    private int maxTransaksi;

    // Konstruktor, dengan nilai maxTransaksi awal
    public Rekening(int maxTrans) {
        this.maxTransaksi = maxTrans;
        this.jumlahTransaksi = 0;
        daftarTransaksi = new Transaksi[maxTrans];
    }

    // Getter
    public int getJumlahTransaksi() {
        return this.jumlahTransaksi;
    }

    public int getMaxTransaksi() {
        return this.maxTransaksi;
    }

    // Mengembalikan array baru yang berisi `count` transaksi terakhir yang
    // dilakukan
    public Transaksi[] getLastTransaksi(int count) {
        Transaksi[] retVal = new Transaksi[count];
        for (int i = 0; i < count; i++) {
            retVal[i] = daftarTransaksi[jumlahTransaksi - count + i];
        }

        return retVal;
    }

    // Mengembalikan saldo pada rekening, yaitu hasil penjumlahan perubahan semua
    // transaksi yang telah dilakukan
    public double getSaldo() {
        double sum = 0.0d;
        for (int i = 0; i < this.jumlahTransaksi; i++) {
            sum = sum + daftarTransaksi[i].getPerubahan();
        }
        return sum;
    }

    // Membuat transaksi baru yang menambahkan `amount` uang pada rekening.
    // `amount` harus positif dan harus ada sisa tempat di rekening.
    // Mengembalikan status berhasil/gagal penyimpanan uang. (Jika berhasil,
    // mengembalikan true)
    public boolean simpanUang(double amount) {
        if (amount > 0 && this.jumlahTransaksi < this.maxTransaksi) {
            daftarTransaksi[jumlahTransaksi++] = new Transaksi(this, amount);
            return true;
        } else {
            return false;
        }
    }

    // Membuat transaksi baru yang mengurangi `amount` uang pada rekening.
    // `amount` harus positif dan lebih kecil dari saldo, dan harus ada sisa tempat
    // di rekening.
    // Harus ada sisa tempat di rekening.
    // Mengembalikan status berhasil/gagal penarikan uang. (Jika berhasil,
    // mengembalikan true)
    public boolean tarikUang(double amount) {
        if (amount > 0 && this.jumlahTransaksi < this.maxTransaksi && this.getSaldo() >= amount) {
            daftarTransaksi[jumlahTransaksi++] = new Transaksi(this, -amount);
            return true;
        } else {
            return false;
        }

    }
}