public class FileFormatException extends Exception {
    String errorMessage;

    public FileFormatException() {
        errorMessage = "Format salah";
    }


    public String getErrorMessage() {
        return errorMessage;
    }
}
