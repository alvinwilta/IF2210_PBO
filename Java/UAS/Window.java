package UAS;

/*
Buatlah kelas-kelas yang menggambarkan pola Composite dalam pemrograman GUI ini (untuk komponen konkret cukup: 
Window, Panel, Picture, dan Text), termasuk superclass & kelas-kelas pendukung yang dibutuhkan (jika ada). 
Perhatikan mana saja yang harus berupa interface, abstract class, dan final class.

Setiap komponen memiliki method draw() untuk menggambar komponen tersebut di layar. 
Implementasikan method draw() dengan println saja (misal untuk kelas Text: 
System.out.println("menggambar teks " + this.caption);), namun pastikan draw() pada sebuah container 
juga menggambar komponen-komponen lain yang ada di dalam container tsb.

Buat juga kelas Application yang harus berisi satu Window saja dan memanggil method draw() 
dari Window tersebut ketika kelas ini diinstansiasi.

Buatlah program utama yang mengilustrasikan penciptaan komponen-komponen dan penyusunan komposit 
(menambahkan komponen-komponen ke dalam container) sehingga membentuk Aplikasi GUI berbentuk seperti 
contoh screenshot di atas. (Karena tidak diminta untuk dibuat, substitusikan kelas Label, Button, 
dan TextField dengan Panel, Picture, dan Text.)

Sebutkan prinsip SOLID mana yang paling relevan dengan struktur Composite ini (1 prinsip saja) 
dan jelaskan bagaimana kelas-kelas yang Anda buat sudah memenuhi prinsip tersebut.
*/
import java.util.ArrayList;
import java.util.List;

public interface Container extends Component {
    public void addComponent(Component comp);

    public void removeComponent(Component comp);
}

public interface Component {
    public void draw();
}

/**
 * Daun
 * Container
 */
public class Window implements Container {
    private String name;
    private List<Component> componentListWindow;

    Window(String name) {
        this.name = name;
        this.componentListWindow = new ArrayList<Component>();
    }

    @Override
    public void draw() {
        System.out.println("menggambar Window bernama " + this.name + " dengan komponen berupa");
        for (Component comp : componentListWindow) {
            comp.draw();
        }
    }

    @Override
    public void addComponent(Component comp) {
        this.componentListWindow.add(comp);
    }

    @Override
    public void removeComponent(Component comp) {
        this.componentListWindow.remove(comp);
    }
}

/**
 * Daun
 * Container
 */
public class Panel implements Container {
    private String name;
    private List<Component> componentListPanel;

    Panel(String name) {
        this.name = name;
        this.componentListPanel = new ArrayList<Component>();
    }

    @Override
    public void draw() {
        System.out.println("menggambar Panel bernama " + this.name + " dengan komponen berupa");
        for (Component comp : componentListPanel) {
            comp.draw();
        }
    }

    @Override
    public void addComponent(Component comp) {
        this.componentListPanel.add(comp);
    }

    @Override
    public void removeComponent(Component comp) {
        this.componentListPanel.remove(comp);
    }
}

/**
 * Daun
 * Component (tidak bisa memuat komponen lainnya didalam, gaperlu inherit apapun lagi)
 */
public final class Picture implements Component {
    private String caption;

    Picture(String caption) {
        this.caption = caption;
    }

    @Override
    public void draw() {
        System.out.println("menggambar Picture " + this.caption);
    }
}

/**
 * Daun
 * Component
 */
public final class Text implements Component {
    private String text;

    Text(String text) {
        this.text = text;
    }

    @Override
    public void draw() {
        System.out.println("menggambar Text " + this.text);
    }
}

/**
 * Tree
 * Container
 */
public class Application implements Container {
    private String name;
    private final List<Component> componentList;

    Application(String name) {
        this.componentList = new ArrayList<Component>();
        this.name = name;
    }

    @Override
    public void draw() {
        for (Component comp : componentList) {
            comp.draw();
        }
    }

    public void addComponent(Component comp) {
        componentList.add(comp);
    }

    public void removeComponent(Component emp) {
        componentList.remove(emp);
    }
}