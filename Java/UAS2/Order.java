package UAS2;

import java.util.ArrayDeque;
import java.util.Deque;

public class Order {
    private String name;
    private String restaurant;
    private int total;

    Order(String name, String restaurant) {
        this.name = name;
        this.restaurant = restaurant;
        this.total = 0;
    }

    public String getName() {
        return this.name;
    }

    public String getRestaurant() {
        return this.restaurant;
    }

    public int getTotal() {
        return this.total;
    }

    public void setTotal(int total) {
        this.total = total;
    }
}

public class History {
    private Deque<Order> orderList;

    History() {
        this.orderList = new ArrayDeque<Order>();
    }

    public void addOrder(Order s) {
        this.orderList.add(s);
    }

    // Untuk menghapus history
    private void removeOrder() {
        this.orderList.removeLast();
    }

    public void deleteHistory(int jml) {
        if (orderList.size() < jml) {
            System.out.println("order yang ingin dihapus terlalu banyak!");
        } else {
            for (int i = 0; i < jml; i++) {
                removeOrder();
            }
        }
    }

    public void listOrder() {
        for (Order s : orderList) {
            System.out.println(s.getName());
        }
    }

    /**
     * Menampilkan total pada restoran tertentu
     */
    public int showTotalRestaurant(String restaurant) {
        int ttl = 0;
        for (Order s : orderList) {
            if (s.getRestaurant().equals(restaurant)) {
                ttl += s.getTotal();
            }
        }
        return ttl;
    }

    /**
     * Menampilkan total
     */
    public int showTotal() {
        int ttl = 0;
        for (Order s : orderList) {
            ttl += s.getTotal();
        }
        return ttl;
    }
}