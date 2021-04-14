import java.util.ArrayList;

public class StackOfGPoint1 {
    private final int defaultStackSize = 10; // ukuran default stack
    private int size; // ukuran stack
    private int topStack; // indeks top (data teratas) dari stack
    private ArrayList<GPoint<Integer>> data; // penyimpanan elemen stack
    private static int nStack = 0; // jumlah stack yang pernah dibuat

    public StackOfGPoint1() {
        this.size = defaultStackSize;
        this.topStack = 0;
        this.data = new ArrayList<GPoint<Integer>>(defaultStackSize);
        nStack++;
    } // Inisiasi stack berukuran default

    public StackOfGPoint1(int size) {
        this.size = size;
        this.topStack = 0;
        this.data = new ArrayList<GPoint<Integer>>(size);
        nStack++;
    } // Inisiasi stack berukuran size

    public void Push(GPoint<Integer> p) {
        if (IsFull() == 0) {
            this.data.add(p);
            this.topStack++;
        }
    } // Menambahkan elemen baru ke stack

    public GPoint<Integer> Pop() {
        if (IsEmpty() == 0) {
            this.topStack--;
            return this.data.remove(this.topStack);
        }
        return null;
    } // Mengeluarkan elemen top stack

    public int IsEmpty() {
        return this.topStack == 0 ? 1 : 0;
    } // Memeriksa apakah stack kosong

    public int IsFull() {
        return this.topStack == this.size ? 1 : 0;
    } // Memeriksa apakah stack penuh

    public static int NumStackObj() {
        return nStack;
    } // Mengembalikan jumlah stack yang pernah dibuat
}