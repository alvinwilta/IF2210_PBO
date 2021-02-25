// file PremiumUser.cpp
/*
    Nama: Alvin Wilta
    NIM: 13519163
    Ruang: 07
    Tanggal: 25/02/2021
    Topik: Praktikum 2
*/

#include "User.h"
#include "PremiumUser.h"
#include <iostream>
using namespace std;

PremiumUser::PremiumUser(char* user): User::User(user) {
    this->active = true;
    this->num_of_music_downloaded = 0;
}

PremiumUser::PremiumUser(const PremiumUser& prem): User::User(prem) {
    this->active = prem.active;
    this->num_of_music_downloaded = prem.num_of_music_downloaded;
}

PremiumUser::~PremiumUser() {
    
}

void PremiumUser::downloadMusic(char* judul) {
    if (!active) {
        cout << "Activate premium account to download music" << endl;
    } else {
        cout << "Music downloaded: " << judul;
        ++this->num_of_music_downloaded;
    }
}

void PremiumUser::activatePremium() {
    this->active = true;
}

void PremiumUser::inactivatePremium() {
    this->active = false;
}

int PremiumUser::getNumOfMusicDownloaded() const {
    return this->num_of_music_downloaded;
}

bool PremiumUser::getPremiumStatus() const {
    return this->active;
}