import java.util.*;

public class Dompet<T extends Number> {
    private ArrayList<Transaction<T>> transactions;


    public Dompet() {
        transactions = new ArrayList<Transaction<T>>();    
    }


    public Dompet(T initialBalance) {
        Transaction<T> temp = new Transaction<T>('+', initialBalance);
        transactions = new ArrayList<Transaction<T>>();
        transactions.add(temp);
        // Constructor dengan parameter T initialBalance, inisialisasi transactions dengan array list baru dan tambahkan transaksi tambah dengan value initial balance
        /* contoh transaksi tambah: new Transaction<T>('+', initialBalance) */
    }

    public void addMoney(T money) {
        Transaction<T> temp = new Transaction<T>('+', money);
        transactions.add(temp);
        // Buat prosedur addMoney dengan parameter T money, tambahkan transaksi tambah dengan senilai money
    }

    public boolean takeMoney(T money) {
        if (getBalance() < money.doubleValue()) return false;
        Transaction<T> temp = new Transaction<T>('-', money);
        transactions.add(temp);
        return true;
        // Tambahkan transaksi kurang sebesar money (perlu ada pengecekan apakah balance cukup atau tidak)
        // false bila transaksi gagal, true bila berhasil
    }

    public void setBalance(T balance) {
        transactions.clear();
        addMoney(balance);
        // Mengganti transaksi agar bernilai sama dengan balance
        // Tips: inisialisasi ulang transactions, lalu tambahkan transaksi tambah sebanyak balance
    }

    // Akses nilai Double dilakukan dengan .doubleValue()
    // Contoh: amount.doubleValue()

    public Double getBalance(){
        Double total = 0.0;
        for (Transaction<T> transaction : transactions) {
            if (transaction.getType() == '+') {
                total += transaction.getAmount().doubleValue();
            }
            else {
                total -= transaction.getAmount().doubleValue();
            }
        }
        return total;
        // Mencari balance dompet dari transaksi dengan cara menghitung total transaksi
    }

    public void printTransactions() {
        for (int i = 0; i < transactions.size(); i++) {
            System.out.println("Transactions " + (i+1) + ": " + transactions.get(i).getType() + " " + transactions.get(i).getAmount().intValue());
        }
        // Print seluruh transaksi yang ada pada array
        // Format: Transactions [indeks + 1]: [tipe transaksi] [amount]
        // Contoh: Transactions 3: + 500
    }

    public Double getAverageTransaction() {
        if (transactions.size() == 0) return null;
        return getBalance() / transactions.size();
        // Mencari rata-rata transaksi (jika tidak ada transaksi, berikan hasil null)
    }

    public Double getMinimumTransaction() {
        if (transactions.size() == 0) return null;
        Double temp = transactions.get(0).getAmount().doubleValue();
        for (int i = 1; i < transactions.size(); i++) {
            if (transactions.get(i).getAmount().doubleValue() < temp) {
                temp = transactions.get(i).getAmount().doubleValue();
            }
        }
        return temp;
        // Mencari nilai minimum transaksi (jika tidak ada transaksi, berikan hasil null; hanya perlu membandingkan nilainya saja tanpa peduli type)
    }

    public Double getMaximumTransaction() {
        if (transactions.size() == 0) return null;
        Double temp = transactions.get(0).getAmount().doubleValue();
        for (int i = 1; i < transactions.size(); i++) {
            if (transactions.get(i).getAmount().doubleValue() > temp) {
                temp = transactions.get(i).getAmount().doubleValue();
            }
        }
        return temp;
        // Mencari nilai maksimum transaksi (jika tidak ada transaksi, berikan hasil null; hanya perlu membandingkan nilainya saja tanpa peduli type)
    }
}