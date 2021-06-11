import java.util.ArrayList;


public class Program {
    /**
     * Representasi tiap baris kode.
     * Perhatikan: indeks list mulai dari 0,
     *             tetapi representasi baris dimulai dari 1.
     */
    private ArrayList<String> lineOfCodes = new ArrayList<>();

    /**
     * Representasi nama file.
     */
    private String filename;

    /**
     * Konstruktor.
     * @param name nama file yang akan diset ke "filename"
     */
    public Program(String name) {
        lineOfCodes = new ArrayList<String>();
        filename = name;
    }

    /**
     * Menambahkan String input ke dalam lineOfCodes.
     * @param command perintah dalam program berupa satu baris kode
     */
    public void addCommand(String command) {
        lineOfCodes.add(command);
    }

    /**
     * Menghapus command pada baris tertentu.
     * Input dijamin valid. Tidak perlu dicek
     * @param line baris yang dipilih.
     */
    public void removeCommand(int line) {
        lineOfCodes.remove(line - 1);
    }

    /**
     * Getter lineOfCodes.
     * @return lineOfCodes
     */
    public ArrayList<String> getCodes() {
        return lineOfCodes;
    }

    /**
     * Melakukan compile program.
     *
     * Langkah:
     * 1. Mengecek kebenaran atribut "filename" (harus diakhiri ".sumatrascript").
     *    Jika "filename" tidak valid, lemparkan FileFormatException
     * 2. Jika "filename" valid, cari error pada tiap baris dan catat lokasi barisnya
     *    pada sebuah ArrayList<Integer>
     * 3. Jika ada error, maka lemparkan CompileErrorException.
     *    Jika tidak ada error sama sekali, tidak melakukan apa-apa.
     */
    public void compile() throws FileFormatException, CompileErrorException {
        if (!filename.endsWith(".sumatrascript")) {
            throw new FileFormatException();
        }
        ArrayList<Integer> errLoc = new ArrayList<Integer>();
        int curLineNo = 1;
        for (String line : lineOfCodes) {
            if (isError(line)) {
                errLoc.add(curLineNo);
            }

            curLineNo++;
        }
        if (!errLoc.isEmpty()) {
            throw new CompileErrorException(errLoc);
        }
    }

    /**
     * Fungsi untuk menentukan keberadaan error pada satu baris kode.
     * @return true, jika ada kesalahan
     *         false, jika tidak ada kesalahan
     */
    private boolean isError(String line) {
        if (line.startsWith("//")) {
            return false;
        }
        if (line.startsWith("var")) {
            String[] syntaxes = line.split(" ");
            if (syntaxes[0].equals("var")
                && syntaxes[2].equals("=")
                && syntaxes[syntaxes.length-1].endsWith(";")) {
                return false;
            }
        }
        return true;
    }
}

