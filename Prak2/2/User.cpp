// file User.cpp
/*
    Nama: Alvin Wilta
    NIM: 13519163
    Ruang: 07
    Tanggal: 25/02/2021
    Topik: Praktikum 2
*/

#include "User.h"
#include <cstring>
#include <iostream>
using namespace std;

int User::n_user = 0;

User::User(char* str) {
    this->name = str;
    this->num_of_favourite_music = 0;
    this->music_list = new char*[100];
    ++n_user;
}

User::User(const User& cuser) {
    this->name = cuser.name;
    this->num_of_favourite_music = cuser.num_of_favourite_music;
    this->music_list = new char*[100];
    for (int i=0; i<cuser.num_of_favourite_music; i++) {
        this->music_list[i] = cuser.music_list[i];
    }
}

User::~User() {
    delete this->music_list;
    --n_user;
}

void User::addFavouriteMusic(char* judul) {
    if (num_of_favourite_music<=100) { // mengecek apakah list penuh
        bool duplikat = false;
        for (int i=0; i<this->num_of_favourite_music; i++) {
            if (strcmp(this->music_list[i],judul)==0) {
                duplikat = true;
                break;
            }
        }
        if (!duplikat) {
            this->music_list[num_of_favourite_music] = judul;
            ++this->num_of_favourite_music;
        }
    }
}

void User::deleteFavouriteMusic(char* judul) {
    if (this->num_of_favourite_music > 0) {
        int index;
        for (int i = 0; i < this->num_of_favourite_music; ++i) {
            if (strcmp(judul, this->music_list[i]) == 0) {
                index = i;
                break;
            }
        }

        for (int i = index; i < this->num_of_favourite_music; ++i) {
            this->music_list[i] = this->music_list[i+1];
        }

        this->num_of_favourite_music--;
    }
}

void User::setName(char* name2) {
    this->name = name2;
}

char* User::getName() const {
    return this->name;
}

int User::getNumOfFavouriteMusic() const {
    return this->num_of_favourite_music;
}

void User::viewMusicList() const {
    if (this->num_of_favourite_music==0) {
        cout << "No music in your favourite list" << endl;
    } else {
        for (int i=0; i<this->num_of_favourite_music;i++) {
            cout << i+1 << ". " << music_list[i] << endl;
        }
    }
}

int User::getNumOfUser() {
    return User::n_user;
}