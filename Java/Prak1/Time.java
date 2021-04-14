public class Time {
    private int hour;
    private int minute;
    private int second;

    public Time() {
        // Set seluruh atribut dengan nilai 0
        this.hour = 0;
        this.minute = 0;
        this.second = 0;
    }

    public Time(int hour, int minute, int second) {
        this.hour = hour;
        this.minute = minute;
        this.second = second;
    }

    public Time(Time t) {
        // Set atribut dengan atribut milik t
        this.hour = t.hour;
        this.minute = t.minute;
        this.second = t.second;
    }

    public int getHour() {
        return this.hour;
    }

    public void setHour(int hour) {
        this.hour = hour;
    }

    public int getMinute() {
        return this.minute;
    }

    public void setMinute(int minute) {
        this.minute = minute;
    }

    public int getSecond() {
        return this.second;
    }

    public void setSecond(int second) {
        this.second = second;
    }

    public int convertToSecond() {
        return (this.hour * 3600 + this.minute * 60 + this.second);
    }

    public Time add(Time t) {
        // Return penjumlahan dua objek jam, yaitu *this* dan t.
        // Apabila hasil penjumlahan melebihi 23:59:59, maka Anda harus mengonversinya
        // seperti tampilan jam digital asli.
        // Contoh : 24:00:00 dituliskan 00:00:00, 25:00:00 dituliskan 01:00:00, dst.
        int sec = this.second;
        int min = this.minute;
        int hrs = this.hour;
        sec += t.second;
        if (sec >= 60) {
            sec -= 60;
            min++;
        }
        min += t.minute;
        if (min >= 60) {
            min -= 60;
            hrs++;
        }
        hrs = (hrs + t.hour >= 24) ? (hrs + t.hour - 24) : (hrs + t.hour);
        return new Time(hrs, min, sec);

    }

    public Time minus(Time t) {
        // Return selisih antara dua objek jam, yaitu *this* dan t.
        // Perhitungan selisih hanya dapat dilakukan jika objek ruas kiri lebih akhir
        // dari atau sama dengan objek ruas kanan.
        // Jika objek ruas kiri lebih awal, maka kembalikan nilai objek ruas kiri.
        // Contoh: 00:00:01 - 00:00:02 = 00:00:01
        if (this.lessThan(t)) {
            return new Time(this.hour, this.minute, this.second);
        } else {
            int sec = this.second;
            int min = this.minute;
            int hrs = this.hour - t.hour;
            sec -= t.second;
            if (sec < 0) {
                sec += 60;
                min--;
            }
            min -= t.minute;
            if (min < 0) {
                min += 60;
                hrs--;
            }
            return new Time(hrs, min, sec);
        }

    }

    public boolean lessThan(Time t) {
        // Returns true jika *this* < t menurut definisi waktu
        return (this.convertToSecond() < t.convertToSecond());
    }

    public boolean greaterThan(Time t) {
        // Returns true jika *this* > t menurut definisi waktu
        return (this.convertToSecond() > t.convertToSecond());
    }

    public void printTime() {
        // Menuliskan jam dalam format hh:mm:ss diakhiri dengan newline. Perhatikan
        // bahwa setiap parameter harus dituliskan 2 digit.
        System.out.printf("%02d:%02d:%02d%n", this.hour, this.minute, this.second);
    }
}