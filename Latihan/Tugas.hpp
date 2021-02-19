#ifndef __TUGAS_HPP_
#define __TUGAS_HPP_

class Tugas {
    private:
        int tanggal; // deadline
        int bulan;  // 
        int bobot;  // 
    public:
        // Masukan: Jumlah uang, nasi, dan telur
        Tugas(int tanggal, int bulan, int bobot);

        // Getter
        int getTanggal() const;
        int getBulan() const;
        int getBobot() const;

        // Setter
        void setTanggal(int _tanggal);
        void setBulan(int _bulan);
        void setBobot(int _bobot);

        
        bool kerjain(int selesai);
};

#endif