package Java.Responsi09;

import java.lang.System;

/*
-----1-----
Number of A objects: 0
Number of B objects: 0
Number of C objects: 0
Number of D objects: 0
Number of E objects: 0
-----------

-----2-----
ctor1 A
ctor1 B
ctor1 E
ctor2 A >> x = 10, y = 5
ctor2 C >> x = 10, y = 5
ctor2 A >> x = 3, y = 3
ctor2 D >> x = 3, y = 3
Number of A objects: 3
Number of B objects: 1
Number of C objects: 1
Number of D objects: 1
Number of E objects: 1
-----------

-----3-----
ctor2 A >> x = 1, y = 2
ctor2 B >> x = 1, y = 2
ctor2 E >> x = 1, y = 2
ctor2 A >> x = 1, y = 1
ctor2 C >> x = 1, y = 1
ctor2 A >> x = 1, y = 1
ctor2 D >> x = 1, y = 1
ctor2 A >> x = 1, y = 2
ctor2 A >> x = 1, y = 1
ctor2 B >> x = 1, y = 1
show B >> x = 1, y = 1
show A >> x = 1, y = 1
show B >> x = 1, y = 2
show C >> x = 1, y = 1
show A >> x = 1, y = 2
-----------

-----4-----
ctor2 A >> x = 14, y = 4
ctor2 C >> x = 14, y = 4
ctor2 A >> x = 15, y = 8
ctor2 C >> x = 15, y = 8
ctor2 A >> x = 11, y = 3
ctor2 A >> x = 12, y = 5
ctor2 B >> x = 12, y = 5
ctor2 A >> x = 10, y = 1
ctor2 A >> x = 16, y = 6
ctor2 D >> x = 16, y = 6
ctor2 A >> x = 17, y = 7
ctor2 D >> x = 17, y = 7
ctor2 A >> x = 18, y = 9
ctor2 B >> x = 18, y = 9
ctor2 E >> x = 18, y = 9
ctor2 A >> x = 13, y = 2
ctor2 B >> x = 13, y = 2
ctor2 A >> x = 19, y = 0
ctor2 B >> x = 19, y = 0
ctor2 E >> x = 19, y = 0
calc D >> result = 96
calc D >> result = 119
calc A >> result = 11
calc B >> result = 17
calc E >> result = 190
calc B >> result = 15
calc C >> result = 10
calc C >> result = 7
calc E >> result = 189
calc A >> result = 10
-----------

Number of A objects: 18
Number of B objects: 7
Number of C objects: 4
Number of D objects: 4
Number of E objects: 4
*/
public class Main {
    public static void main(String[] args) {
        printSepHead(1);
        printStat();
        printSepTail();

        printSepHead(2);
        E e21 = new E();
        C c21 = new C(10, 5);
        D d21 = new D(3, 3);
        printStat();
        printSepTail();

        printSepHead(3);
        E e31 = new E(1, 2);
        C c31 = new C(1, 1);
        D d31 = new D(1, 1);
        A a31 = new A(1, 2);
        B b31 = new B(1, 1);
        b31.show();
        d31.show();
        e31.show();
        c31.show();
        a31.show();
        printSepTail();

        printSepHead(4);
        C c41 = new C(14, 4);
        C c42 = new C(15, 8);
        A a41 = new A(11, 3);
        B b41 = new B(12, 5);
        A a42 = new A(10, 1);
        D d41 = new D(16, 6);
        D d42 = new D(17, 7);
        E e41 = new E(18, 9);
        B b42 = new B(13, 2);
        E e42 = new E(19, 0);
        d41.calc();
        d42.calc();
        a41.calc();
        b41.calc();
        e42.calc();
        b42.calc();
        c41.calc();
        c42.calc();
        e41.calc();
        a42.calc();
        printSepTail();
        printStat();
    }

    private static void printSepHead(int n) {
        System.out.println("-----" + n + "-----");
    }

    private static void printSepTail() {
        System.out.println("-----------\n");
    }

    private static void printStat() {
        A.stat();
        B.stat();
        C.stat();
        D.stat();
        E.stat();
    }
}