public class Utility {
    public static <T> T getMidpoint(T[] array) {
        return array[(array.length / 2)];
    }

    public static <T extends Number> double getMidpoint(T[] array) {
        int mid = array.length / 2;
        if (array.length % 2 == 1)
            return array[mid].doubleValue();
        else
            return (array[mid].doubleValue() + array[mid - 1].doubleValue()) / 2;
    }

    public static <T> T getFirst(T[] array) {
        return array[0];
    }

    public static <T> T getLast(T[] array) {
        return array[array.length - 1];
    }

    public static <T extends Number> double getAverage(T[] array) {
        double sum = 0;
        for (T element : array) {
            sum += element.doubleValue();
        }
        return sum / array.length;
    }

    public static <T extends Number> double getMin(T[] array) {
        double min = array[0].doubleValue();
        for (T element : array) {
            if (element.doubleValue() < min) {
                min = element.doubleValue();
            }
        }
        return min;
    }

    public static <T extends Number> double getMax(T[] array) {
        double max = array[0].doubleValue();
        for (T element : array) {
            if (element.doubleValue() > max) {
                max = element.doubleValue();
            }
        }
        return max;
    }

    public static <T> int getSize(T[] array) {
        return array.length;
    }

}
