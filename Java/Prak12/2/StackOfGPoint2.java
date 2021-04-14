public class StackOfGPoint2 {
    private final int defaultStackSize = 10; // ukuran default stack
    private int size; // ukuran stack
    private int topStack; // indeks top (data teratas) dari stack
    private ArrayList<GPoint<Float>> data; // penyimpanan elemen stack
    private static int nStack = 0; // jumlah stack yang pernah dibuat

    public StackOfGPoint2() {
        this.size = defaultStackSize;
        this.topStack = 0;
        this.data = new ArrayList<GPoint<Float>>(defaultStackSize);
        nStack++;
    } // Inisiasi stack berukuran default

    public StackOfGPoint2(int size) {
        this.size = size;
        this.topStack = 0;
        this.data = new ArrayList<GPoint<Float>>(size);
        nStack++;
    } // Inisiasi stack berukuran size

    public void Push(GPoint<Float> p) {
        if (IsFull() == 0) {
            this.data.add(p);
            this.topStack++;
        }
    } // Menambahkan elemen baru ke stack

    public GPoint<Float> Pop() {
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