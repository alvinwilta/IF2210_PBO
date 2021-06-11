import java.io.IOException;

public class ChunkLoader implements Runnable {
    // ... Anda boleh menambahkan atribut
    private Chunk chunk;
    private String chunkName;

    public ChunkLoader(Chunk chunk, String chunkDataFilename) {
        // ... Isilah constructor sesuai kebutuhan
        this.chunk = chunk;
        this.chunkName = chunkDataFilename;
    }

    @Override
    public void run() {
        // Membaca file dengan nama chunkDataFilename
        // Gunakan class CSVReader.
        // Contoh file chunkDataFilename:
        // x,y
        // 1,18
        // 10,8
        // 6,12
        // Untuk setiap x dan y, tambahkan tree ke Chunk
        // Jika ada IOException pada saat membaca reader, catch Exception
        // tidak ada tree yang ditambahkan pada Chunk (tidak dithrow lagi)
        CSVReader reader = new CSVReader(this.chunkName, ",");
        reader.setSkipHeader(true);
        try {
            for (String[] row : reader.read()) {
                this.chunk.addTree(new Position(Integer.parseInt(row[0]), Integer.parseInt(row[1])));
            }
        } catch (IOException e) {
        }
    }
}