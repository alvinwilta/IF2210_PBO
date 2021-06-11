/*
Member
    -boolean type // gold if true else silver
    -boolean isGold()
    -void setGold()
    -void setSilver()

Antrean (Abstract class)
    /// antrean “riil”-nya
    -ArrayList<Member> laQ
    /// fungsi untuk menambahkan member ke belakang antrean
    -Abstract void enqueue(in: Member)
    /// fungsi untuk “membuang” member yang di paling depan antrean
    -Abstract Member dequeue()

    Derived classes:

    AntreanBiasa
        /// true jika ada member gold di antrean
        -Boolean goldExists
        /// fungsi untuk membuang semua member gold
        +ArrayList<Member> removeOrangKaya()
        /// getter goldExists
        +Boolean haveGoldMember()
    AntreanGold
    
Kasir
    -Antrean antrean
    -LocalTime waktuKeluar
    +void setAntrean(in: Antrean)
    +Antrean getAntrean()
    +void layanin() // ngelayanin semua anggota
    /// untuk memeriksa shift kasir
    +boolean checkShift()
Toko
    -Kasir[] semuaKasir
    -Antrean[] semuaAntrean
    /// memindahkan semua gold member dari sebuah antrean biasa ke
    /// antrean gold.
    /// Asumsi yang dipindah semua antrean.
    +void pindahGold()
*/


void pindahGold() { // Toko
    AntreanGold antreanOrangKaya;
    for (Antrean antrean : semuaAntrean) {
        if (typeof antrean == ‘AntreanGold’) {
            antreanOrangKaya = antrean;
            break;
        }
    }
    for (Antrean antrean : semuaAntrean) {
        if (typeof antrean == ‘AntreanBiasa’ && antrean.haveGoldMember()) {
            ArrayList<Member> orangKaya = curAntrean.removeOrangKaya();
            for (Member member : orangKaya) {
                antreanOrangKaya.enqueue(member);
            }
        }
    }
}
    
void start() { // Toko
    // bikin list of kasir dan list of antrean
    int final banyak = 3;
    this.semuaKasir = new Kasir[banyak];
    this.semuaAntrean = new Antrean[banyak];
    for (int i = 0; i < banyak; ++i) {
        Kasir kasir = new Kasir();
        Antrean antrean = i % 2 == 0 ? new AntreanGold() : new AntreanBiasa();
        semuaKasir[i] = kasir;
        semuaAntrean[i] = antrean;
        // isi kasir
        kasir.setAntrean(antrean);
        // isi antrean
        for (int i = 0; i < banyak * 3; ++i) {
            // insert member gold setiap i genap
            antrean.enqueue(new Member(i % 2 == 0));
        }
    }
    semuaKasir[0].layanin();
    this.pindahGold();
    for (int i = 1; i < banyak; ++i) {
        semuaKasir[i].layanin();
    }
}
    
ArrayList<Member> removeOrangKaya() { // AntreanBiasa
    ArrayList<Member> result = new ArrayList<>();
    for (Member member : laQ) {
        if (member.isGold()) {
            result.add(member);
            laQ.remove(member);
        }
    }
    this.goldExists = false;
    return result;
}
    
void layanin() { // Kasir
    for (int i = this.antrean.size() - 1; i >= 0 && this.checkShift(); ++i) {
        antrean.remove(i);
    }
}

    
// the rest is rather trivial
public class main {
    public static void main(String[] args) {
        Toko toko = new Toko();
        Toko.start();
    }
}