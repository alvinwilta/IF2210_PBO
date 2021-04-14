public class ListMap implements Map {
    private ListMapEntry first;

    public void set(String key, String value) {
        ListMapEntry curr = first;
        Boolean found = false;
        while (curr.getNext() != null && !found) {
            if (curr.getKey().equals(key)) {
                curr.setValue(value);
                found = true;
            }
            curr = curr.getNext();
        }
        if (!found) {
            ListMapEntry newMapEntry = new ListMapEntry(key, value);
            curr.setNext(newMapEntry);
        }

    }

    public String get(String key) {
        ListMapEntry curr = first;
        while (curr.getNext() != null) {
            if (curr.getKey().equals(key)) {
                return curr.getValue();
            }
            curr = curr.getNext();
        }
        return null;
    }

    public int size() {
        ListMapEntry curr = first;
        int i = 0;
        while (curr.getNext() != null) {
            i++;
            curr = curr.getNext();
        }
        return i;
    }

}
