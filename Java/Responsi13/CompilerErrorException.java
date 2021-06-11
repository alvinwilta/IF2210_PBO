import java.util.ArrayList;

public class CompilerErrorException extends Exception {
    ArrayList<Integer> errorLocations;

    public CompilerErrorException(ArrayList<Integer> locs) {
        errorLocations = locs;
    }

    public void showErrors() {
        for (Integer loc : errorLocations) {
            System.out.printf("Error di baris : %d\n", loc);
        }
    }
}
