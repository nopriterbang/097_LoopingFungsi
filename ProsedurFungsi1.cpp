#include <iostream>
using namespace std;

string nama;
int nXpander, nPorsche, nAvanza, nBrio, nLambhorgini;
int hXpander = 300, hPorsche = 8000, hAvanza = 250, hBrio = 200, hLambhorgini = 6000;

void main(){
    cout << "Nama Pembeli : ";
    cin >> nama;
    cout << "Jumlah Xpander :";
    cin >> nXpander;

    cout << "Jumlah Porsche  :";
    cin >> nPorsche;

    cout << "Jumlah Avanza :";
    cin >> nAvanza;

    cout << "Jumlah Brio :";
    cin >> nBrio;

    cout << "Jumlah Lambhorgini :";
    cin >> nLambhorgini;
    
}

int TotalHarga(){
    return (nXpander * hXpander) + (nPorsche * hPorsche) + (nAvanza * hAvanza) + (nBrio * hBrio) +(nLambhorgini * hLambhorgini)
}

void display(){
    cout << "Total Harganya" << TotalHarga() << endl;
}

int main(){
    char pilihan
    do{
     input();
     display();
     cout << "Apakah ingin kembali ?";
     cin >> pilihan;
    }while(pilihan == 'y' ||pilihan == 'Y');
}