#include "User.h"
#include <iostream>
using std::cout;
using std::endl;


int main() {
    char test[] = "alvin";
    char test2[] = "alvin2";
    char music1[] = "Hey Jude";
    char music2[] = "Breathe";

    User * U1 = new User(test);
    cout << U1->getName() << endl;
    
    U1->setName(test2);
    cout << U1->getName() << endl;
    U1->viewMusicList();
    U1->addFavouriteMusic(music1);
    U1->addFavouriteMusic(music2);
    U1->addFavouriteMusic(music2);
    U1->viewMusicList();
    U1->deleteFavouriteMusic(music2);
    U1->viewMusicList();
}