#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int angka;
    int acak;
    int tebak;
    int nyawa = 3;
    srand(static_cast<unsigned int>(time(0)));

    nilai :
    cout << "Masukan angka antara (10-100) : "; cin >> angka;
    if(angka < 10 || angka > 100){
        goto nilai;
    }
    acak = rand()%angka + 1;
    cout << "Tebak angka antara 1 sampai : " << angka << endl;
    cout << "Cheat : " << acak <<endl;

    while(nyawa>0){
        cout << "Masukan tebakan anda : "; cin >> tebak;
        if(tebak > acak){
            cout << "Tebakan anda terlalu besar" << endl;
            cout << "Sisa nyawa : " << nyawa-1 << endl;;
        }else if(tebak < acak){
            cout << "Tebakan anda terlalu kecil" << endl;
            cout << "Sisa nyawa : " << nyawa-1 << endl;;
        }else if(tebak == acak){
            cout << "Jawaban Benar" << endl;
            break;
        }
        nyawa--;
    }

    return 0;
}
