#include <iostream>
using namespace std;

struct zodiak       //struct
{
    int tanggal;
    int bulan;
    int tahun;
    string zodiak;
};
    zodiak dk[12];  //Variabel Global
    string nama; 
    int jumlah;

void penentuan(){       // Function Untuk menentukan zodiak
    for (int i = 0; i < jumlah; i++){

        if((dk[i].bulan == 3 && dk[i].tanggal >= 21) || dk[i].bulan == 4 && dk[i].tanggal <= 19){
            cout << "Zodiak Anda Adalah: ARIES" << endl;
            cout << endl;

        }else if((dk[i].bulan == 4 && dk[i].tanggal >= 20) || dk[i].bulan == 5 && dk[i].tanggal <= 20){
            cout << "Zodiak Anda Adalah: TAURUS" << endl;
            cout << endl;

        }else if ((dk[i].bulan == 5 && dk[i].tanggal >=21) || (dk[i].bulan == 6 && dk[i].tanggal <= 20)){
            cout << "Zodiak Anda Adalah: GEMINI" << endl;
            cout << endl;

        }else if ((dk[i].bulan == 6 && dk[i].tanggal >= 21) || (dk[i].bulan == 7 && dk[i].tanggal <= 22)){
            cout << "Zodiak Anda Adalah: CANCER" << endl;
            cout << endl;

        }else if ((dk[i].bulan == 7 && dk[i].tanggal >= 23) || (dk[i].bulan == 8 && dk[i].tanggal <= 22)){
            cout << "Zodiak Anda Adalah: LEO" << endl;
            cout << endl;

        }else if ((dk[i].bulan == 8 && dk[i].tanggal >=23) || (dk[i].bulan == 9 && dk[i].tanggal <= 22)){
            cout << "Zodiak Anda Adalah: VIRGO" << endl;
            cout << endl;

        }else if ((dk[i].bulan == 9 && dk[i].tanggal >=23) || (dk[i].bulan == 10 && dk[i].tanggal <= 21)){
            cout << "Zodiak Anda Adalah: LIBRA" << endl;
            cout << endl;

        }else if ((dk[i].bulan == 10 && dk[i].tanggal >=23) || (dk[i].bulan == 11 && dk[i].tanggal <= 21)){
            cout << "Zodiak Anda Adalah: SCORPIO" << endl;
            cout << endl;

        }else if ((dk[i].bulan == 11 && dk[i].tanggal >=22) || (dk[i].bulan == 12 && dk[i].tanggal <= 21)){
            cout << "Zodiak Anda Adalah: SAGITARIUS" << endl;
            cout << endl;

        }else if ((dk[i].bulan == 12 && dk[i].tanggal >=22) || (dk[i].bulan == 1 && dk[i].tanggal <= 19)){
            cout << "Zodiak Anda Adalah: CAPRICORN" << endl;
            cout << endl;

        }else if ((dk[i].bulan == 1 && dk[i].tanggal >=20) || (dk[i].bulan == 2 && dk[i].tanggal <= 18)){
            cout << "Zodiak Anda Adalah: AQUARIUS" << endl;
            cout << endl;

        }else if ((dk[i].bulan == 2 && dk[i].tanggal >=19) || (dk[i].bulan == 3 && dk[i].tanggal <= 20)){
            cout << "Zodiak Anda Adalah: PISCES" << endl;
            cout << endl;

        }
        
    }

}

void keluaran(){    //Function Untuk Output

    cout << "====================ZODIAK MU====================" << endl;
    for (int i = 0; i < jumlah; i++)
    cout << "Tanggal Lahir Anda[tgl - bln - tahun]: " << dk[i].tanggal << "-" << dk[i].bulan << "-" << dk[i].tahun << endl << endl;
    cout << endl;

    penentuan ();
}


int main(){


    cout << "===============CARI ZODIAK MU===============" << endl;         //Input Data
    cout << "Masukan Jumlah Zodiak Yang Ingin Kamu Cari: ";
    cin >> jumlah;
    cout << endl;

    for (int i = 0; i < jumlah; i++){
    cout << "Masukan Tanggal Lahir Kamu (1 digit): ";
    cin >> dk[i].tanggal;
    cout << "Masukan Bulan Lahir Kamu (1 digit): ";
    cin >> dk[i].bulan;
    cout << "Masukan Tahun Lahir Kamu (4 digit): ";
    cin >> dk[i].tahun;
    cout << endl;
    }

    system("cls");

    keluaran();    //Output

    

    return 0;
}