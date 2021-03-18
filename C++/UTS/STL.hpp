#ifndef TRIPLET_HPP
#define TRIPLET_HPP

#include <iostream>

template <class T, class U, class V>
class Triplet {
private:
    T first;
    U second;
    V third;
public:
    Triplet(T first, U second, V third) {
        this->first = first;
        this->second = second;
        this->third = third;
    }

    T getFirst() {
        return this->first;
    }

    U getSecond() {
        return this->second;
    }

    V getThird() {
        return this->third;
    }

    bool operator=(const Triplet& teripelet) {
        if (
            this->first == teripelet.first && 
            this->second == teripelet.second && 
            this->third == teripelet.third
        ) {
            return true;
        } else {
            return false;
        }
    }
};

#endif