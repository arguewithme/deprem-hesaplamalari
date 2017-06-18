/*
Bu proje Fikri Elmas'ın deprem karşılaştırma algoritması kullanılarak sadece eğlence amacıyla yazılmıştır.
*/
#include <iostream>
#include <locale>
#include <cmath>
using namespace std;
long birinciBuyukluk,
    ikinciBuyukluk,
    buyuklukFarki,
    buyuklukKati,
    buyuklukKatSayisi;
    long enerjiFarki;
int main()
{
    setlocale (LC_ALL, "Turkish");
    cout << "Deprem Karşılaştırma Yazılımı Alpha" << endl;
    cout << "Deprem Büyüklüklerini Giriniz: " << endl;
    cin >> birinciBuyukluk >> ikinciBuyukluk;
    buyuklukFarki = abs(birinciBuyukluk - ikinciBuyukluk);
    buyuklukKatSayisi = double((buyuklukFarki * 1000) / 1000);
    buyuklukKati = pow(10, buyuklukKatSayisi);
    enerjiFarki = pow(10 , (1.5*buyuklukKatSayisi));
    do
    {
    cout << "Büyüklük Farkı: " << buyuklukFarki << "\n";
    cout << "Büyüklüğü " << ikinciBuyukluk << " olan deprem, büyüklüğü " << birinciBuyukluk << " olan depremden;" << endl;
    cout << buyuklukKati << " kat kadar büyüktür ve " << enerjiFarki << " kat daha güçlü enerji yayar." << endl;
    break;
    }
    while(birinciBuyukluk>=-3 && ikinciBuyukluk<=10);
    return 0;
}
