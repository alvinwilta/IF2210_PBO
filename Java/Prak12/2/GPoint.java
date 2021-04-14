public class GPoint {
    private T x;
    private T y;

    public <T> GPoint(T newx, T newy) {
        this.x = newx;
        this.y = newy;
    }

    public <T> GPoint(GPoint p) {
        this.x = p.x;
        this.y = p.y;
    }

    public <T> boolean IsEqual(GPoint p) {
        return (this.x == p.x && this.y == p.y);
    }

    public <T> T GetAbsis() {
        return this.x;
    }

    public <T> T GetOrdinat() {
        return this.y;
    }

    public <T> void SetAbsis(T newx) {
        this.x = newx;
    }

    public <T> void SetOrdinat(T newy) {
        this.y = newy;
    }
}
// template <class T>
// class GPoint {
// public:
// GPoint(T newx, T newy);
// GPoint(const GPoint&);
// GPoint& operator= (const GPoint&);
// ~GPoint();
// T GetAbsis();
// T GetOrdinat();
// void SetAbsis(T newx);
// void SetOrdinat(T newy);
// int IsEqual(GPoint P);
// private:
// T x; //absis
// T y; //ordinat
// };