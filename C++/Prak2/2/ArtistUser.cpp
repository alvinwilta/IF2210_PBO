<<<<<<< HEAD:C++/Prak2/2/ArtistUser.cpp
// file ArtistUser.cpp
/*
    Nama: Alvin Wilta
    NIM: 13519163
    Ruang: 07
    Tanggal: 25/02/2021
    Topik: Praktikum 2
*/

#include <iostream>
#include "ArtistUser.h"
#include "User.h"
using namespace std;

int ArtistUser::num_of_artist = 0;

ArtistUser::ArtistUser(char* nama): User::User(nama) {
    this->num_of_music_uploaded = 0; // jumlah musik dalam uploaded_music_list
    this->uploaded_music_list = new char*[100];
    ++num_of_artist;
}

ArtistUser::ArtistUser(const ArtistUser& cuser): User::User(cuser) {
    this->num_of_music_uploaded = cuser.num_of_music_uploaded;
    this->uploaded_music_list = new char*[100];
    for (int i=0; i<this->num_of_music_uploaded; i++) {
        this->uploaded_music_list[i] = cuser.uploaded_music_list[i];
    }
}

ArtistUser::~ArtistUser() {
    cout << "Artist user " << this->name << " deleted.";
    delete uploaded_music_list;

}

void ArtistUser::uploadMusic(char* judulMusik) {
    if (this->num_of_music_uploaded<=100) {
        bool duplikat = false;
        for (int i=0; i<this->num_of_music_uploaded;i++) {
            if (strcmp(this->uploaded_music_list[i],judulMusik)==0) {
                duplikat = true;
                break;
            }
        }
        if (!duplikat) {
            this->uploaded_music_list[num_of_music_uploaded] = judulMusik;
            ++this->num_of_music_uploaded;
        }
    }
}

void ArtistUser::deleteUploadedMusic(char* judulMusik) {
    int index;
    for (int i = 0; i < this->num_of_music_uploaded; i++) {
        if (strcmp(judulMusik, this->uploaded_music_list[i]) == 0) {
            index = i;
            break;
        }
    }

    for (int i = index; i < this->num_of_favourite_music; ++i) {
        this->uploaded_music_list[i] = this->uploaded_music_list[i+1];
    }

    this->num_of_favourite_music--;
}

void ArtistUser::viewUploadedMusicList() const {
    if (this->num_of_music_uploaded==0) {
        cout << "No music uploaded" << endl;
    } else {
        for (int i=0; i<this->num_of_favourite_music;i++) {
            cout << i+1 << ". " << music_list[i] << endl;
        }
    }
}

int ArtistUser::getNumOfMusicUploaded() const {
    return this->num_of_music_uploaded;
}

int ArtistUser::getNumOfArtist() {
    return num_of_artist;
=======
// file ArtistUser.cpp
/*
    Nama: Alvin Wilta
    NIM: 13519163
    Ruang: 07
    Tanggal: 25/02/2021
    Topik: Praktikum 2
*/

#include <iostream>
#include "ArtistUser.h"
#include "User.h"
using namespace std;

int ArtistUser::num_of_artist = 0;

ArtistUser::ArtistUser(char* nama): User::User(nama) {
    this->num_of_music_uploaded = 0; // jumlah musik dalam uploaded_music_list
    this->uploaded_music_list = new char*[100];
    ++num_of_artist;
}

ArtistUser::ArtistUser(const ArtistUser& cuser): User::User(cuser) {
    this->num_of_music_uploaded = cuser.num_of_music_uploaded;
    this->uploaded_music_list = new char*[100];
    for (int i=0; i<this->num_of_music_uploaded; i++) {
        this->uploaded_music_list[i] = cuser.uploaded_music_list[i];
    }
}

ArtistUser::~ArtistUser() {
    cout << "Artist user " << this->name << " deleted.";
    delete uploaded_music_list;

}

void ArtistUser::uploadMusic(char* judulMusik) {
    if (this->num_of_music_uploaded<=100) {
        bool duplikat = false;
        for (int i=0; i<this->num_of_music_uploaded;i++) {
            if (strcmp(this->uploaded_music_list[i],judulMusik)==0) {
                duplikat = true;
                break;
            }
        }
        if (!duplikat) {
            this->uploaded_music_list[num_of_music_uploaded] = judulMusik;
            ++this->num_of_music_uploaded;
        }
    }
}

void ArtistUser::deleteUploadedMusic(char* judulMusik) {
    int index;
    for (int i = 0; i < this->num_of_music_uploaded; i++) {
        if (strcmp(judulMusik, this->uploaded_music_list[i]) == 0) {
            index = i;
            break;
        }
    }

    for (int i = index; i < this->num_of_favourite_music; ++i) {
        this->uploaded_music_list[i] = this->uploaded_music_list[i+1];
    }

    this->num_of_favourite_music--;
}

void ArtistUser::viewUploadedMusicList() const {
    if (this->num_of_music_uploaded==0) {
        cout << "No music uploaded" << endl;
    } else {
        for (int i=0; i<this->num_of_favourite_music;i++) {
            cout << i+1 << ". " << music_list[i] << endl;
        }
    }
}

int ArtistUser::getNumOfMusicUploaded() const {
    return this->num_of_music_uploaded;
}

int ArtistUser::getNumOfArtist() {
    return num_of_artist;
>>>>>>> 020a0707d724f62f2bf3b7b05577c1fe971d6154:Prak2/2/ArtistUser.cpp
}