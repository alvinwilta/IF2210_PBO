import java.util.Vector;

// abstract Member -> Gold dan Silver
// Antrean<? extends Member>
// Antrean<Gold>
// Kasir

public abstract class Member {
    public enum TYPE {
        SILVER, GOLD
    }

    public abstract TYPE getType();
}

public class MemberGold extends Member {
    private TYPE type;

    MemberGold() {
        this.type = GOLD;
    }

    @Override
    public TYPE getType() {
        return type;
    }

}

public class MemberSilver extends Member {
    private TYPE type;

    MemberSilver() {
        this.type = SILVER;
    }

    @Override
    public TYPE getType() {
        return type;
    }
}

public interface Antrian {
    public <T extends Member> void enq(T a);

    public <T extends Member> T deq();

    public boolean cekShift();
}

public class AntrianBiasa implements Antrian {
    private Vector<? extends Member> Q;
    private LocalTime shiftEnds;

    AntrianBiasa() {
        this.Q = new Vector<>();
        this.shiftEnds = new LocalTime(20, 0);
    }

    public <T extends Member> void enq(T a) {
        Q.Add(a);
    }

    public <T extends Member> T deq() {
        if (!Q.isEmpty()) {
            T temp = Q.elementAt(0);
            Q.removeElementAt(0);
            return temp;
        } else {
            return null;
        }
    }

    public boolean cekShift() {
        LocalTime now = LocalTime.now();
        return Duration.between(now, shiftEnds).toMinutes() < 0;
    }

    public Vector<Gold> pisahAntrian() {
        temp = new Vector<>();
        for (int i=0; i<Q.size(); i++) {
            if (Q.elementAt(i).getType() == GOLD) {
                
            }
        }
    }
}

public class AntrianGold implements Antrian {
    private Vector<Gold> Q;
    private LocalTime shiftEnds;

    public void enq(Gold a) {

    }

    public <T extends Member> T deq() {

    }

    public boolean cekShift() {

    }
}