package UAS;

public class Main {
    public static void main(String[] args) {
        Application App = new Application("MyApp");
        Window window = new Window("Main Window");
        Text text1 = new Text("text1");
        Text text2 = new Text("text2");
        Text text3 = new Text("text3");
        Picture picture1 = new Picture("picture1");
        Picture picture2 = new Picture("picture2");
        Picture picture3 = new Picture("picture3");
        Panel label1 = new Panel("label1");
        Panel label2 = new Panel("label2");
        Panel label3 = new Panel("label3");
        label1.addComponent(text1);
        label2.addComponent(text2);
        label3.addComponent(text3);
        label1.addComponent(picture1);
        label2.addComponent(picture2);
        label3.addComponent(picture3);

        Panel panel = new Panel("panel");
        panel.addComponent(label1);
        Panel sidebar = new Panel("sidebar");
        sidebar.addComponent(label2);
        Panel toolbar = new Panel("toolbar");
        toolbar.addComponent(label3);
        Panel statusbar = new Panel("statusbar");
        statusbar.addComponent(label1);

        App.addComponent(window);
        window.addComponent(panel);
        window.addComponent(sidebar);
        window.addComponent(toolbar);
        window.addComponent(statusbar);

        App.draw();

    }
}
