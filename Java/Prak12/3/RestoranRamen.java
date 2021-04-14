import java.util.*;

public class RestoranRamen {
    private Map<Integer, Integer> daftarMeja;

    // constructor: membuat restoran dengan daftar meja kosong
    public RestoranRamen() {
        this.daftarMeja = new HashMap<Integer, Integer>();
    }

    // menambahkan jumlah order yang dipesan oleh meja n, dengan harga p
    // jika meja sudah diisi maka akan menambah total yang telah dipesan
    public void tambahOrder(int n, int p) {
        Integer prev = this.daftarMeja.get(n);
        if (prev != null)
            prev += p;
        else
            prev = p;
        this.daftarMeja.put(n, prev);
    }

    // mengembalikan total harga pesanan pada meja n
    // menghapus entri untuk meja tersebut
    public int tutupOrder(int n) {
        return this.daftarMeja.remove(n);
    }

    // mengembalikan total harga pesanan pada meja n
    public int cekTotal(int n) {
        return this.daftarMeja.get(n);
    }

    // mengembalikan jumlah meja yang terisi saat itu
    // restoran mungkin kosong
    public int totalMeja() {
        return this.daftarMeja.size();
    }

    // menjetak semua meja yang terisi pada restoran diakhiri dengan new line
    // contoh:
    /*
     * Meja 1 = 5000 Meja 2 = 3000 Meja 3 = 10000
     */
    // jika restoran kosong akan mencetak "Restoran kosong" diakhiri new line
    public void cetakMeja() {
        if (this.totalMeja() == 0)
            System.out.println("Restoran kosong");
        else {
            for (Map.Entry<Integer, Integer> e : this.daftarMeja.entrySet()) {
                System.out.printf("Meja %d = %d\n", e.getKey(), e.getValue());
            }
        }
    }
}