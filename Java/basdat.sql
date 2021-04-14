/*
BACKUP QUERY PENAMBAHAN DATA



mysql -u tubes -ppahlawan45 -h s2.frederon.com
mysqldump -u tubes -ppahlawan45 -h s2.frederon.com summer_olympics > olympics.sql
*/

INSERT INTO Atlet(namaDepan,namaBelakang,jenisKelamin,tanggalLahir,kewarganegaraan,idPelatih) VALUES 
("Usain", "Bolt", "L", DATE'1986-07-21', "Jamaica", 1),
("Kevin", "Sukamuljo", "L", DATE'1995-07-02', "Indonesia", 3),
("Marcus", "Gideon", "L", DATE'1991-03-09', "Indonesia", 3),
("Michael", "Phelps", "L", DATE'1985-06-30', "Amerika Serikat", 2),
("Mark", "Spitz", "L", DATE'1950-02-10', "Amerika Serikat", 5);
INSERT INTO Atlet(namaDepan,namaBelakang,jenisKelamin,tanggalLahir,kewarganegaraan,idPelatih) VALUES
("Alvin", "Wilta", "L", DATE'2001-04-17', "Indonesia", 7),
("Jonathan", "Jahja", "L", DATE'2001-03-02', "Indonesia", 7),
("Epata", "Tuah", "L", DATE'2001-08-30', "Indonesia", 7),
("Jeane", "Mikha", "P", DATE'2001-10-03', "Indonesia", 7),
("Frederic", "Ronaldi", "L", DATE'2001-09-19', "Indonesia", 7),
("Engimon", "Aktif", "L", DATE'2001-01-13', "Indonesia", 7);
INSERT INTO Atlet(namaDepan,namaBelakang,jenisKelamin,tanggalLahir,kewarganegaraan,idPelatih) VALUES
("Mitya","Vladik","P",DATE'2001-11-11', "Rusia",8),
("Yegor","Natalya","L",DATE'2001-11-11', "Rusia",8),
("Mefodiy","Zinoviy","P",DATE'2001-11-11', "Rusia",8),
("Seva","Moisey","P",DATE'2001-11-11', "Rusia",8),
("Fedot","Dorofei","L",DATE'2001-11-11', "Rusia",8),
("Alyosha","Taisia","P",DATE'2001-11-11', "Rusia",8);
("Hiroyuki","Endo","L",DATE"1986-12-16", "Jepang",5),
("Yuta","Watanabe","L",DATE"1997-06-13", "Jepang",5);


INSERT INTO Atlet_Mengikuti VALUES
(1, "Atletik"),
(2, "Badminton"),
(3, "Badminton"),
(4, "Renang"),
(5, "Renang");

INSERT INTO Atlet_Mengikuti_Tim VALUES
(7, 2),
(8, 2),
(9, 2),
(10, 2),
(11, 2),
(12, 2),
(13, 3),
(14, 3),
(15, 3),
(16, 3),
(17, 3),
(18, 3);

INSERT INTO Review_Hotel VALUES
(1,3,2,"Kamarnya bagus", 4),
(1,3,3,"Kasurnya kotak", 3),
(2,2,4,"Food is good", 4),
(2,5,5,"Would sleep here again", 5),
(4,1,1,"AC too cold", 1);

INSERT INTO Pelatih(namaDepan, namaBelakang, jenisKelamin, tanggalLahir, kewarganegaraan) VALUES
("Charles", "Dunsley", "L", DATE "1973-05-13", "Kolumbia"),
("Meghan", "Kirk", "P", DATE "1980-03-04", "Amerika Serikat"),
("Budi", "Budiman", "L", DATE "1978-02-17", "Indonesia"),
("Nurhayati", "Sungkar", "P", DATE "1984-11-20", "Indonesia"),
("Debbie", "Markle", "P", DATE "1990-10-26", "Amerika Serikat"),
("Latifa", "Dwiyanti", "P", DATE "1990-05-10", "Indonesia");

INSERT INTO Hotel(namaHotel, alamat, kapasitas) VALUES
("Ueno Hotel", "Ueno", 300),
("Conrad Hotel", "Ginza", 500),
("Sotetsu Grand Fresa", "Odaiba", 400),
("Hotel Metropolitan Tokyo", "Ikebukuro", 300),
("JR Kyushu Hotel Blossom", "Shinjuku", 400);

INSERT INTO Penonton(noKTP, namaDepan, namaBelakang, tanggalLahir, kewarganegaraan) VALUES
("184637584945", "Kuchiyose", "Yamada", DATE "1970-05-23", "Jepang"),
("854329501234", "Minako", "Karada", DATE "1989-07-11", "Jepang"),
("1671031807198900", "Alexander", "Firman", DATE "1989-07-18", "Indonesia"),
("1674442809199900", "Karina", "Irawan", DATE "1999-09-28", "Indonesia"),
("114351353", "Lloyd", "Ackerman", DATE "1979-05-04", "Amerika Serikat");

INSERT INTO Merchandise(noKTP, namaMerchandise, harga) VALUES
("184637584945", "Keychain", 150000),
("854329501234", "Headband", 180000),
("1671031807198900", "T-Shirt", 230000),
("114351353", "T-Shirt", 230000),
("114351353", "Headband", 180000);

INSERT INTO Review_Merchandise(idOrder, komentar, rating) VALUES
((SELECT idOrder FROM Merchandise WHERE noKTP="184637584945" AND namaMerchandise="Keychain"), "It's too expensive!", 2.3),
((SELECT idOrder FROM Merchandise WHERE noKTP="854329501234" AND namaMerchandise="Headband"), "Too cheap for me", 3.3),
((SELECT idOrder FROM Merchandise WHERE noKTP="114351353" AND namaMerchandise="Headband"), "The materials are ok", 4.0),
((SELECT idOrder FROM Merchandise WHERE noKTP="1671031807198900" AND namaMerchandise="T-Shirt"), "Cool Merch!", 4.5),
((SELECT idOrder FROM Merchandise WHERE noKTP="114351353" AND namaMerchandise="T-Shirt"), "Nice Merch!", 4.6);

/*idLokasi namaLokasi kapasitasPenonton*/
INSERT INTO Lokasi VALUES
(1, "Stadion Utama Gelora Bung Karno", 77193),
(2, "Istora Gelora Bung Karno", 7166),
(3, "Stadion Akuatik Gelora Bung Karno", 7600),
(4, "Stadion Gelora Bandung Lautan Api", 40000),
(5, "Stadion Si Jalak Harupat", 27000);

/*Pertandingan (idPertandingan, tanggal, durasi, idLokasi)*/
INSERT INTO Pertandingan VALUES
(1, DATE'2021-04-01', 76, 2), 
(2, DATE'2021-04-02', 60, 1),
(3, DATE'2021-04-03', 60, 5),
(4, DATE'2021-04-04', 60, 4),
(5, DATE'2021-04-05', 120, 3);

/*TIM (idTim, namaTim, jumlahAnggota)*/
INSERT INTO Tim VALUES
(1, "Polar Rangers", 4),
(2, "Naga Jimmies", 4),
(3, "World Conquerors", 8),
(4, "Screaming Komodo" , 10),
(5, "Kasep Barnacle", 5); 

/*Pemesanan_Tiket (idOrder, idPertandingan, kuantitas, noKTP)*/
INSERT INTO Pemesanan_Tiket VALUES
(1, 4, 5, '184637584945'),
(2, 1, 2, '1674442809199900'),
(3, 3, 1, '1671031807198900'),
(4, 2, 10,'114351353'), 
(5, 5, 1, '854329501234');

INSERT INTO Pertandingan(tanggal, durasi, idLokasi) VALUES
(DATE "2021-04-08", 120, 5);

INSERT INTO Skor_Tim(idTim, idPertandingan, skor) VALUES
(2,6,100),
(3,6,40);

UPDATE Tim SET jumlahAnggota=2 WHERE idTim=4;