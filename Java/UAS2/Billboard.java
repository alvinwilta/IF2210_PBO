package UAS2;

import java.util.ArrayList;
import java.util.List;

public class Song {
    private String name;

    Song(String name) {
        this.name = name;
    }

    public String getName() {
        return this.name;
    }
}

public class Billboard {
    private List<Song> songList;

    Billboard() {
        this.songList = new ArrayList<Song>();
    }

    public void addSong(Song s) {
        this.songList.add(s);
    }

    public void removeSong(Song s) {
        this.songList.remove(s);
    }

    public void playSong() {
        for (Song s : songList) {
            System.out.println(s.getName());
        }
    }

    /**
     * Menukar lagu pada rank ke i dengan lagu bawahnya
     * @param i rank lagu dimulai dari indeks 0
     */
    public void swapRank(int i) {
        Song toMove = songList.get(i);
        songList.set(i, songList.get(i - 1));
        songList.set(i - 1, toMove);
    }
}
