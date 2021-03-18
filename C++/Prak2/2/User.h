#ifndef USER_H
#define USER_H

#include <cstring>

class User {
    public:
        // ctor, parameter: nama pengguna
        User(char* nama);
        
        // cctor
        User(const User& cuser);

        // dtor
        // selain implementasi, print juga "User <nama user> deleted<endl>"
        // Contoh:
        // User A deleted
        //
        ~User();

        // Asumsi: musik unik, parameter: judul musik
        void addFavouriteMusic(char* judul);
        void deleteFavouriteMusic(char* judul);
        
        void setName(char* name2);
        char* getName() const;
        int getNumOfFavouriteMusic() const;

        // format print:
        // <No>. <Judul musik><endl>
        // contoh:
        // 1. Starship - Nicki Minaj
        // 2. To Be Human - Sia, Labrinth
        //
        // jika tidak ada musik, print: "No music in your favourite list<endl>"
        void viewMusicList() const;

        static int getNumOfUser();
    protected:
        char* name;
        int num_of_favourite_music; // jumlah musik yang ada pada music_list
        char** music_list; // daftar judul musik
        static int n_user;
};

#endif