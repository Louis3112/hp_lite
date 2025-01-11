#include <iostream>
#include <ctime>
#include <cmath>
#include <map>
#include <string.h>
#include <fstream>
using namespace std;

void Waktu();
void SaranBMI(double, double, double);
void SimpanNotes(string&, string& );
string BukaNotes(string& fileName);

int main(){
    
    int Opsi;
    char Home = 'y'; // Start Program
        cout << endl;
        cout << "=============================================" << endl;
        cout << "=============================================" << endl;
        cout << "=============== FORTIC LITE 7 ===============" << endl;
        cout << "=========== By Kelompok 7 TI 23C ============" << endl;
        cout << "=============================================" << endl;
        Waktu();
        cout << "========== Klik Enter untuk membuka =========" << endl;
        cin.get();

    while (Home == 'y') {
        // Menu Utama
        cout << endl;
        Waktu();
        cout << "=============================================" << endl;
        cout << "=========== Aplikasi yang tersedia ==========" << endl;
        cout << "1. Kalkulator" << endl;
        cout << "2. Aplikasi Konversi Jarak" << endl;
        cout << "3. Aplikasi Konversi Berat" << endl; 
        cout << "4. Aplikasi BMI " << endl;
        cout << "5. Aplikasi Note" << endl;
        cout << "6. Game Suit " << endl;
        cout << "7. Game Angka Jackpot " << endl;
        cout << "8. Keluar " << endl << endl;
        cin >> Opsi;

        switch (Opsi) {
            case 1: { // Kalkulator 
                char Kalkulator = 'y';

                while (Kalkulator == 'y') {
                    double A, B, Hasil;
                    char Perhitungan;

                    cout << endl;
                    cout << "=============================================" << endl;
                    cout << "================ Kalkulator =================" << endl;
                    cout << "=============================================" << endl;
                    cout << "============= Masukkan nilai A ==============" << endl;
                    cin >> A;
                    cout << endl;

                    cout << "============= Masukkan nilai B ==============" << endl;
                    cin >> B;
                    cout << endl;

                    cout << "========= Pilih operasi aritmatika ==========" << endl;
                    cout << "=============== + - * / % ^ =================" << endl;
                    cin >> Perhitungan;

                    switch (Perhitungan) {
                        case '+': // +
                            Hasil = A + B;
                            cout << "Hasil dari " << A << " + " << B << " adalah " << Hasil << endl;
                            break;

                        case '-': // - 
                            Hasil = A - B;
                            cout << "Hasil dari " << A << " - " << B << " adalah " << Hasil << endl;
                            break;

                        case '*': // *
                            Hasil = A * B;
                            cout << "Hasil dari " << A << " * " << B << " adalah " << Hasil << endl;
                            break;

                        case '/':
                            if (B == 0) {
                                cout << "Nilai tidak valid, angka tidak boleh 0" << endl; // Karena angka tidak bisa dibagi nol
                            } else {
                                Hasil = A / B;
                                cout << "Hasil dari " << A << " / " << B << " adalah " << Hasil << endl;
                            }
                            break;

                        case '%':
                            Hasil = fmod(A, B); // fmod untuk modulus dengan floating
                            cout << "Hasil dari " << A << " % " << B << " adalah " << Hasil << endl;
                            break;
                        
                        case '^':
                            Hasil = pow(A, B);
                            cout << "Hasil dari " << A << " pangkat " << B << " adalah " << Hasil << endl; 
                            break;

                        default:
                            cout << "Operasi tidak valid, program terhenti" << endl;
                            break;
                    }
                    cout << endl;
                    cout << "Apakah anda ingin menghitung kembali? (y/n): " << endl;
                    cin >> Kalkulator;
                }
                break;
            }

            case 2: { // Aplikasi Konversi Jarak
                char KonversiJarak = 'y';

                while (KonversiJarak == 'y') {
                    int PilihanKonversi;

                    cout << endl;
                    cout << "=============================================" << endl;
                    cout << "============== Konversi Jarak ===============" << endl;
                    cout << "=============================================" << endl;
                    cout << "====== Jarak apa yang ingin anda hitung =====" << endl;
                    cout << "1. Jarak Meter, Kilometer, Mil" << endl;
                    cout << "2. Jarak Km, Hm, dam, m, dm, cm,mm" << endl;
                    
                    cin >> PilihanKonversi;
                    
                    switch (PilihanKonversi) {
                        case 1: {
                            int PilihanKonversi1;

                            cout << endl;
                            cout << "=============================================" << endl;
                            cout << "===== Apa jarak yang ingin anda hitung ======" << endl;
                            cout << "1. Meter" << endl;
                            cout << "2. Kilometer" << endl;
                            cout << "3. Mil" << endl;

                            cin >> PilihanKonversi1;

                            if (PilihanKonversi1 == 1){
                                double NilaiMeter;
                                cout << endl;
                                cout << "=============================================" << endl;
                                cout << "==== Masukkan nilai yang akan dihitung ====" << endl;
                                cin >> NilaiMeter;
                                double JarakKilometer = NilaiMeter / 1000.0;
                                double JarakMil = NilaiMeter / 1609.34;
                                cout << "Konversi dari " << NilaiMeter << " m adalah " << JarakKilometer << " km dan " << JarakMil << " mil" << endl;
                            } 
                            
                            else if (PilihanKonversi1 == 2) {
                                double NilaiKilometer;
                                cout << endl;
                                cout << "=============================================" << endl;
                                cout << "==== Masukkan nilai yang akan dihitung ====" << endl;
                                cin >> NilaiKilometer;
                                double JarakMeter = NilaiKilometer * 1000.0;
                                double JarakMil = NilaiKilometer / 1.60934;
                                cout << "Konversi dari " << NilaiKilometer << " km adalah " << JarakMeter << " m dan " << JarakMil << " mil" << endl;

                            } 
                            
                            else if (PilihanKonversi1 == 3) {
                                double NilaiMil;
                                cout << endl;
                                cout << "=============================================" << endl;
                                cout << "==== Masukkan nilai yang akan dihitung ====" << endl;
                                cin >> NilaiMil;
                                double JarakMeter = NilaiMil * 1609.34;
                                double JarakKilometer = NilaiMil * 1.60934;
                                cout << "Konversi dari " << NilaiMil << " mil adalah " << JarakMeter << " m dan " << JarakKilometer << " km" << endl;

                            } 
                            else {
                                cout << "Operasi tidak valid, program terhenti" << endl;
                            }
                            
                            break; 
                        }
                        case 2: {
                            int Nilai;
                            map <string, double > KonversiJarak = { // Map digunakan untuk mengaitkan antara 1 string dengan 1 data
                                {"km", 1000000.0},
                                {"hm", 100000.0},
                                {"dam", 10000.0},
                                {"m", 1000.0},
                                {"dm", 100.0},
                                {"cm", 10.0},
                                {"mm", 1.0}};

                            string JarakAwal, JarakAkhir;
                            cout << endl;
                            cout << "Masukkan satuan awal (km, hm, dam, m, dm, cm, mm): ";
                            cin >> JarakAwal;   

                            cout << endl;
                            cout << "Masukkan Nilai: ";
                            cin >> Nilai;

                            cout << endl;
                            cout << "Masukkan satuan akhir (km, hm, dam, m, dm, cm, mm): ";
                            cin >> JarakAkhir;

                            if (KonversiJarak.find(JarakAwal) != KonversiJarak.end() && KonversiJarak.find(JarakAkhir) != KonversiJarak.end()) // Mencari satuan yg dimasukkan pada Konversi Jarak. Jika ditemukan, maka akan lgsg dijalankan 
                            { 
                                double Hasil = Nilai * (KonversiJarak[JarakAwal] / KonversiJarak[JarakAkhir]); // int dari Konversi Jarak akan dihitung
                                cout << Nilai << " " << JarakAwal << " = " << Hasil << " " << JarakAkhir << endl;
                            }
                            
                            else {
                                 cout << "Pilihan tidak valid. Program berhenti." << endl;
                            }
                            break;
                        }
                        default:
                            cout << "Pilihan tidak valid. Program berhenti." << endl;
                            break;
                    }
                    cout << endl;
                    cout << "Apakah anda ingin menghitung kembali? (y/n): ";
                    cin >> KonversiJarak;
                }

                break; 
            }

            case 3: { // Aplikasi Konversi Berat
                char KonversiBerat = 'y';

                while (KonversiBerat == 'y'){

                    int PilihanKonversi;
                    cout << endl;
                    cout << "=============================================" << endl;
                    cout << "=============== Konversi Berat ==============" << endl;
                    cout << "=============================================" << endl;
                    cout << "===== Berat apa yang ingin anda hitung? =====" << endl;
                    cout << "1. Kilogram" << endl;
                    cout << "2. Liter" << endl;
                    cout << "3. Ons" << endl;
                    cout << "4. Pon" << endl;
                    cout << "5. Gram" << endl;
                    
                    cin >> PilihanKonversi;
                    
                    switch (PilihanKonversi){
                    case 1 :{

                    double NilaiKilogram;
                    cout << endl;
                    cout << "=============================================" << endl;
                    cout << "========= Masukkan nilai kilogram ===========" << endl;
                    cout << "=============================================" << endl;
                    cin >> NilaiKilogram; 
                    
                    int BeratKilogram;
                    cout << endl;
                    cout << "=============================================" << endl;
                    cout << "== Konversikan berat yang ingin ada hitung ==" << endl;
                    cout << "1. Liter" << endl;
                    cout << "2. Ons" << endl;
                    cout << "3. Pon" << endl;
                    cout << "4. Gram" << endl;
                    cin >> BeratKilogram;

                    switch (BeratKilogram){
                        case 1 :{
                        double HasilLiter = NilaiKilogram * 1;
                        cout << NilaiKilogram << " kg = " << HasilLiter << " liter" << endl;
                        break;
                        }

                        case 2 :{ 
                        double HasilOns = NilaiKilogram * 35.274;
                        cout << NilaiKilogram << " kg = " << HasilOns << " ons" << endl;
                        break;
                        }

                        case 3 :{
                        double HasilPon = NilaiKilogram * 2.205;
                        cout << NilaiKilogram << " kg = " << HasilPon << " pon" << endl;
                        break;
                        }

                        case 4 :{
                        double HasilGram = NilaiKilogram * 1000;
                        cout << NilaiKilogram << " kg = " << HasilGram << " gram" << endl;
                        break;
                        }
                        
                        default:
                        cout << "Pilihan tidak valid. Program berhenti." << endl;
                        break;
                        
                        }
                    }
                    break;

                    case 2:{
                    double NilaiLiter;
                    cout << endl;
                    cout << "=============================================" << endl;
                    cout << "=========== Masukkan nilai liter ============" << endl;
                    cout << "=============================================" << endl;
                    cin >> NilaiLiter; 

                    int BeratLiter;
                    cout << endl;
                    cout << "=============================================" << endl;
                    cout << "== Konversikan berat yang ingin ada hitung ==" << endl;
                    cout << "1. Kilogram" << endl;
                    cout << "2. Ons" << endl;
                    cout << "3. Pon" << endl;
                    cout << "4. Gram" << endl;
                    cin >> BeratLiter;

                    switch (BeratLiter){
                        case 1 :{
                        double HasilKilogram1 = NilaiLiter * 1;
                        cout << NilaiLiter<< " liter = " << HasilKilogram1 << " kg" << endl;
                        break;
                        }

                        case 2 :{ 
                        double HasilOns1 = NilaiLiter * 35.274;
                        cout << NilaiLiter<< " liter = " << HasilOns1 << " ons" << endl;
                        break;
                        }

                        case 3 :{
                        double HasilPon1 = NilaiLiter * 2.205;
                        cout << NilaiLiter << " liter = " << HasilPon1 << " pon" << endl;
                        break;
                        }

                        case 4 :{
                        double HasilGram1 = NilaiLiter * 1000;
                        cout << NilaiLiter << " liter = " << HasilGram1 << " gram" << endl;
                        break;
                        }
                        
                        default:
                        cout << "Pilihan tidak valid. Program berhenti." << endl;
                        break;
                        
                        }
                    }
                    break;

                    case 3:{
                    double NilaiOns;
                    cout << endl;
                    cout << "=============================================" << endl;
                    cout << "============ Masukkan nilai ons =============" << endl;
                    cout << "=============================================" << endl;
                    cin >> NilaiOns; 

                    int BeratOns;
                    cout << endl;
                    cout << "=============================================" << endl;
                    cout << "== Konversikan berat yang ingin ada hitung ==" << endl;
                    cout << "1. Kilogram" << endl;
                    cout << "2. Liter" << endl;
                    cout << "3. Pon" << endl;
                    cout << "4. Gram" << endl;
                    cin >> BeratOns;

                    switch (BeratOns){
                        case 1 :{ 
                        double HasilKilogram2 = NilaiOns * 0.028;
                        cout << NilaiOns<< " ons = " << HasilKilogram2 << " kg" << endl;
                        break;
                        }

                        case 2 :{ 
                        double HasilLiter2 = NilaiOns * 0.028;
                        cout << NilaiOns<< " ons = " << HasilLiter2 << " liter" << endl;
                        break;
                        }

                        case 3 :{
                        double HasilPon2 = NilaiOns * 0.0625;
                        cout << NilaiOns << " ons = " << HasilPon2 << " pon" << endl;
                        break;
                        }

                        case 4 :{
                        double HasilGram2 = NilaiOns * 28.35;
                        cout << NilaiOns << " ons = " << HasilGram2 << " gram" << endl;
                        break;
                        }
                        
                        default:
                        cout << "Pilihan tidak valid. Program berhenti." << endl;
                        break;
                        
                        }
                    }
                    break;

                    case 4:{ 
                    double NilaiPon;
                    cout << endl;
                    cout << "=============================================" << endl;
                    cout << "=========== Masukkan nilai pon ==============" << endl;
                    cout << "=============================================" << endl;
                    cin >> NilaiPon;

                    int BeratPon;
                    cout << endl;
                    cout << "=============================================" << endl;
                    cout << "== Konversikan berat yang ingin ada hitung ==" << endl;
                    cout << "1. Kilogram" << endl;
                    cout << "2. Liter" << endl;
                    cout << "3. Ons" << endl;
                    cout << "4. Gram" << endl;
                    cin >> BeratPon;

                    switch (BeratPon){
                        case 1 :{ 
                        double HasilKilogram3 = NilaiPon * 0.453;
                        cout << NilaiPon<< " pon = " << HasilKilogram3 << " kg" << endl;
                        break;
                        }

                        case 2 :{ 
                        double HasilLiter3 = NilaiPon * 0.45;
                        cout << NilaiPon<< " pon = " << HasilLiter3 << " liter" << endl;
                        break;
                        }

                        case 3 :{
                        double HasilOns3 = NilaiPon * 16;
                        cout << NilaiPon << " pon = " << HasilOns3 << " ons" << endl;
                        break;
                        }

                        case 4 :{    
                        double HasilGram3 = NilaiPon * 453;
                        cout << NilaiPon << " pon = " << HasilGram3 << " gram" << endl;
                        break;
                        }
                        
                        default:
                        cout << "Pilihan tidak valid. Program berhenti." << endl;
                        break;
                        
                        }
                    }
                    break;

                    case 5:{
                    double NilaiGram;
                    cout << endl;
                    cout << "=============================================" << endl;
                    cout << "============ Masukkan nilai gram ============" << endl;
                    cout << "=============================================" << endl;
                    cin >> NilaiGram;
                    
                    int BeratGram;
                    cout << endl;
                    cout << "=============================================" << endl;
                    cout << "== Konversikan berat yang ingin ada hitung ==" << endl;
                    cout << "1. Kilogram" << endl;
                    cout << "2. Liter" << endl;
                    cout << "3. Ons" << endl;
                    cout << "4. Pon" << endl;
                    cin >> BeratGram;

                    switch (BeratGram){
                        case 1 :{ 
                        double HasilKilogram4 = NilaiGram * 0.001;
                        cout << NilaiGram << " gram = " << HasilKilogram4 << " kg" << endl;
                        break;
                        }

                        case 2 :{ 
                        double HasilLiter4 = NilaiGram * 0.001;
                        cout << NilaiGram << " gram = " << HasilLiter4 << " liter" << endl;
                        break;
                        }

                        case 3 :{
                        double HasilOns4 = NilaiGram * 0.035;
                        cout << NilaiGram << " gram = " << HasilOns4 << " ons" << endl;
                        break;
                        }

                        case 4 :{
                        double HasilPon4 = NilaiGram * 0.002204;
                        cout << NilaiGram << " gram = " << HasilPon4 << " pon" << endl;
                        break;
                        }
                        
                        default:
                        cout << "Pilihan tidak valid. Program berhenti." << endl;
                        break;
                        
                        }
                    }
                    break;
                    
                    default:
                    cout << "Pilihan tidak valid. Program berhenti." << endl;
                    break;
                }
                cout << "Apakah anda ingin menghitung kembali? (y/n): ";
                cin >> KonversiBerat;
            }
            break;
        }

            case 4: { // Aplikasi BMI
                char PenghitungBMI = 'y';

                while (PenghitungBMI == 'y'){
                    double Berat, Tinggi, BMI;
                    cout << endl;
                    cout << "=============================================" << endl;
                    cout << "=============== Penghitung BMI ==============" << endl;
                    cout << "=============================================" << endl;
                    cout << "Masukkan berat badan (kg): ";
                    cin >> Berat ;
                    cout << "Masukkan tinggi badan (m): ";
                    cin >> Tinggi; 
                    cout << endl;

                    BMI = Berat / (Tinggi * Tinggi);
                    SaranBMI(BMI, Berat, Tinggi);

                    cout << "Apakah anda ingin menghitung BMI anda kembali? (y/n): ";
                    cin >> PenghitungBMI;
            
                }
                break;  
            }
            
            case 5: { // Aplikasi Note 
                string LokasiNotes = "notes.txt";
                string Notes;

                // Membuka catatan
                Notes = BukaNotes(LokasiNotes);
                cout << "=============================================" << endl;
                cout << "============= Aplikasi Notes ================" << endl;
                cout << "=============================================" << endl;
                cout << "Catatan sebelumnya: " << endl << Notes << endl;
                cout << "=============================================" << endl << endl;
                cout << "Masukkan catatan baru" << endl;
                cout << "(Ctrl+Z lalu Enter untuk menyimpan dokumen dan keluar): " << endl;
        
                // Menuliskan notes
                string line;
                    while (getline(cin, line)) {
                    Notes += line + "\n";
                }

                // Simpan Notes dengan Ctrl+Z (untuk menutup notes.txt)
                SimpanNotes(LokasiNotes, Notes);
                
                return Home;
        break;
    }

            case 6: { // Game Suit 
            char Suit;
            int Pilih;
            
            a:  
                cout << endl;
                cout << "=============================================" << endl;
                cout << "================= GAME SUIT =================" << endl;
                cout << "=============================================" << endl << endl;
                cout << "Pilih karakter yang ingin kamu gunakan" << endl << endl;
                cout << " 1. GAJAH" << endl; 
                cout << " 2. SEMUT" << endl;
                cout << " 3. ORANG" << endl;
                cin >> Pilih;
                
                if(Pilih==1){
                    cout << "\n Kamu = GAJAH" << endl;
                        srand(time(NULL));
                        int com = rand() % 10;
                        if (com<=3 && com>=1){
                            cout << " Computer = GAJAH" << endl << endl;
                            cout << " ==============" << endl;
                            cout << " === SERI ! ===" << endl;
                            cout << " ==============" << endl;
                        }
        
                        else if (com<=6 && com>=4){
                            cout << " Computer = ORANG" << "\n\n";
                            cout << " =====================" << endl;
                            cout << " === Kamu Menang ! ===" << endl;
                            cout << " =====================" << endl;
                        }

                        else{
                            cout << " Computer = SEMUT" << "\n\n";
                            cout << " ====================" << endl;
                            cout << " === Kamu Kalah ! ===" << endl;
                            cout << " ====================" << endl;
                        }
                    cout << endl;
                }
    
                else if(Pilih==2){
                    cout << "\n Kamu = SEMUT" << endl;
                    srand(time(NULL));
                    int com = rand() % 10;
                    if (com<=3 && com>=1){
                            cout << " Computer = SEMUT" << "\n\n";
                            cout << " ==============" << endl;
                            cout << " === SERI ! ===" << endl;
                            cout << " ==============" << endl;
                        } 
        
                        else if (com<=6 && com>=4){
                            cout << " Computer = GAJAH" << "\n\n";
                            cout << " =====================" << endl;
                            cout << " === Kamu Menang ! ===" << endl;
                            cout << " =====================" << endl;
                        }
        
                        else {
                            cout << " Computer = ORANG" << "\n\n";
                            cout << " ====================" << endl;
                            cout << " === Kamu Kalah ! ===" << endl;
                            cout << " ====================" << endl;
                        }
                    cout << endl;
                }
    
                else if(Pilih==3){
                cout << "\n Kamu = ORANG" << endl;
                srand(time(NULL));
                int com = rand() % 10;
                if (com<=3 && com>=1){
                        cout << " Computer = ORANG" << "\n\n";
                        cout << " ==============" << endl;
                        cout << " === SERI ! ===" << endl;
                        cout << " ==============" << endl;
                    }
                
                else if (com<=6 && com>=4){
                        cout << " Computer = SEMUT" << "\n\n";
                        cout << " =====================" << endl;
                        cout << " === Kamu Menang ! ===" << endl;
                        cout << " =====================" << endl;
                    }

                else{
                        cout << " Computer = GAJAH" << "\n\n";
                        cout << " ====================" << endl;
                        cout << " === Kamu Kalah ! ===" << endl;
                        cout << " ====================" << endl;
                    }
                cout << endl;
                }
                
            else{
            cout << "Pilihan tidak valid. Program berhenti." << endl;
        }

    cout << "Apakah anda ingin bermain kembali? (y/n): ";
    cin >> Suit;
        
        b:
            if (Suit == 'y'){
                system ("cls");
                goto a;
            }
        break;
        }

            case 7: { // Game Angka Jackpot
                
                char AngkaJackpot = 'y';
                char MenuAngkaJackpot = 'n';

                while (AngkaJackpot == 'y') {
                    srand(time(0));
                int AngkaGacor = rand() % 101; 
                int TebakAngka;
                int Nyawa = 0;

                cout << endl;
                cout << "=============================================" << endl;
                cout << "=============== Angka Jackpot ===============" << endl;
                cout << "=============================================" << endl;
                cout << "=============================================" << endl
                    << endl;

                cout << "Hi, namaku Gacor. Selamat datang di Game Angka Jackpot" << endl;
                cout << "Aku punya satu angka di pikiranku yang harus kamu tebak, Angka tersebut berada di range 1-100" << endl << endl;

                cout << "Kamu punya 10 kesempatan untuk menebak angka tersebut" << endl;
                cout << "Selamat bermain" << endl;
                cout << "Klik Enter untuk memulai permainan" << endl;
                cin.get();

                do {
                    cout << endl;
                    cout << "Masukkan angka tebakanmu" << endl;
                    cin >> TebakAngka;
                    Nyawa++;

                    if (TebakAngka < AngkaGacor) {
                        cout << "Angka masih terlalu kecil" << endl;
                    } else if (TebakAngka > AngkaGacor) {
                        cout << "Angka masih terlalu besar" << endl;
                    }

                    if (Nyawa == 11) {
                        cout << endl;
                        cout << "Yah.. Kamu gagal, kamu sudah menebak 10 angka dan hasilnya salah semua" << endl;
                        cout << "Angka yang ada di pikiranku adalah angka " << AngkaGacor << endl << endl;
                        MenuAngkaJackpot = 'n'; 
                    }

                } while (TebakAngka != AngkaGacor);

                cout << endl;
                cout << "Selamat!! Kamu Berhasil menebak angka yang ada di pikiranku!" << endl;
                cout << "yaitu angka " << AngkaGacor << endl << endl;

                cout << "Apakah anda ingin bermain kembali? (y/n): ";
                cin >> MenuAngkaJackpot;    
                cout << endl;

                AngkaJackpot = MenuAngkaJackpot;
            }
            break;
        }
            
            case 8: { // Keluar
            char Keluar;
            cout << endl;
            cout << "Apakah anda yakin ingin keluar dari program? (y/n)" << endl;
            cin >> Keluar;
                if (Keluar == 'y'){
                    cout << "Terima kasih" << endl;
                    Home = 'n';
                }

                else if (Keluar == 'n'){
                    }

                else{
                    cout << "Input tidak valid" << endl;
                }      
            }
            break;

            default: 
            cout << "Operasi tidak valid, program berhenti" << endl;
            }
        }
return 0;        
}

void Waktu (){

    // Memanggil Waktu
    time_t Waktu = time(0); // Waktu dimulai dari 1 Januari 1970
    tm* now = localtime(&Waktu); // Waktu Live

    // Display Tanggal
    cout << "================= " << (now->tm_year + 1900) << '-';
    cout << (now->tm_mon ) << '-';
    cout << now->tm_mday << " ================" << endl;
    
    // Display Waktu
    cout << "=================  " << now->tm_hour << ':';
    cout << now->tm_min << ':';
    cout << now->tm_sec << " =================" << endl;
}
void SaranBMI (double BMI, double Berat, double Tinggi){
    int Pilihan; 
    if (BMI < 18.5) {
            cout << endl;
            cout << "Dengan berat " << Berat << " kg dan tinggi " << Tinggi << " m" << endl;
            cout << "Maka BMI anda adalah " << BMI << endl << endl;

            cout << "Sayangnya, BMI anda masuk dalam kategori RENDAH" << endl; 
            cout << "Anda perlu menaikkan berat badan anda" << endl << endl;
    }

    else if(BMI > 18.5 && BMI < 25){
            cout << endl;
            cout << "Dengan berat " << Berat << " kg dan tinggi " << Tinggi << " m" << endl;
            cout << "Maka BMI anda adalah " << BMI << endl << endl;

            cout << "BMI anda masuk dalam kategori NORMAL" << endl; 
            cout << "Tetap pertahankan berat badan anda dengan menjaga pola hidup yang sehat" << endl << endl;
    }

    else {
            cout << endl;
            cout << "Dengan berat " << Berat << " kg dan tinggi " << Tinggi << " m" << endl;
            cout << "Maka BMI anda adalah " << BMI << endl << endl;

            cout << "BMI anda masuk dalam kategori TINGGi" << endl; 
            cout << "Anda perlu memperhatikan berat badan anda" << endl << endl;
    }
            
            char Saran = 'y';
            while(Saran == 'y'){ 
            cin.ignore();
            cin.get();
            cout << "Saran yang mungkin cocok untuk anda: " << endl;  
                cout << "1. Makan makanan sehat yang kaya nutrisi dan kalori" << endl;
                cout << "2. Membangun kebiasaaan rutin berolahraga" << endl;
                cout << "3. Mengurangi merokok dan alkohol" << endl;
                cout << "4. Mengurangi stress" << endl;
                cout << "Masukkan angka untuk mengetahui saran lebih lanjut" << endl;  
                cin >> Pilihan;
                cout << endl;
                
                switch(Pilihan){
                                case 1: {
                                    cout << "Makan rutin sebanyak 3x sehari yang terdiri atas karbohidrat, protein, lemak, dan serat" << endl << endl;
                                    
                                    cout << "Contoh makanan yang dapat dimakan untuk diet" << endl;
                                    cout << "1. Nasi putih secukupnya (1.5 kepal nasi)" << endl;
                                    cout << "2. Telur" << endl; 
                                    cout << "3. Daging ayam (paha ataupun dada)" << endl;
                                    cout << "4. Tahu dan Tempe" << endl;
                                    cout << "5. Brokoli" << endl << endl;
                                    cin.ignore();
                                    cin.get();

                                    cout << "6. Bayam" << endl;
                                    cout << "7. Buah Alpukat" << endl;
                                    cout << "8. Buah Pisang" << endl;
                                    cout << "9. Cokelat Hitam" << endl;
                                    cout << "10. Susu" << endl << endl;
                                    cin.get();
                                    }
                                break;

                                case 2: {
                                    cout << "Lakukan olahraga apapun yang anda senangi dan anda sukai" << endl;
                                    cout << "Akan lebih baik jika anda memiliki teman atau komunitas yang menyukai olahraga yang sama" << endl << endl;
                                    cin.ignore();
                                    cin.get();

                                    cout << "Jika anda bingung olahraga apa yang dapat membuat berat badan proporsional, anda bisa memilih salah satu dari olahrga di bawah ini" << endl;
                                    cout << "1. Renang" << endl; 
                                    cout << "2. Zumba"<< endl;
                                    cout << "3. Gym" << endl;
                                    cout << "4. Jogging" << endl;
                                    cout << "5. Basket" << endl;
                                    cin.get();
                                    }
                                break;

                                case 3: {
                                    cout << "Merokok mengandung nikotin yang dapat mengacaukan sirkulasi hormon pada tubuh dan menurunkan nafsu makan." << endl << endl;

                                    cout << "Alkohol juga merusak metabolisme dan menyebabkan penyakit hati" << endl;
                                    cin.get();
                                    }
                                break;

                                case 4: {
                                    cout << "Stress dapat mengurangi nafsu makan dan mempengaruhi metabolisme tubuh" << endl;
                                    cout << "Cara untuk mengatasi stress adalah " << endl << endl;
                                    
                                    cout << "1. Jangan terlalu overthinking terhadap sesuatu" << endl;
                                    cout << "2. Melakukan hobi secara teratur" << endl;
                                    cout << "3. Punya tempat untuk bercerita" << endl;
                                    cout << "4. Melakukan meditasi" << endl;
                                    cout << "5. Membuat kebiasaan yang baru" << endl;
                                    cin.get();
                                }
                                break;

                                default:
                                    cout << "Pilihan tidak valid. Program berhenti." << endl;
                                    break;
                            }
                    cout << endl;
                    cout << "Apakah anda ingin membuka saran yang lain? (y/n): " << endl;
                    cin >> Saran;
                    cout << endl;
                }

}

void SimpanNotes(string& LokasiNotes, string& Notes) {
    ofstream file(LokasiNotes);
        if (file.is_open()) { 
            file << Notes; // Mencatat isi Notes
            file.close(); 
            cout << "Notes berhasil disimpan" << endl;
            }
        else {
            cout << "File tidak bisa dibuka untuk menulis" << endl;
    }
}
string BukaNotes(string& LokasiNotes) {
    ifstream file(LokasiNotes);
    string notes;
        if (file.is_open()) {
            getline(file, notes, '\0'); //Membaca notes 
            file.close();
            } 
        else {
            cout << "File tidak bisa dibuka untuk membaca" << endl;
        }
    return notes;
}