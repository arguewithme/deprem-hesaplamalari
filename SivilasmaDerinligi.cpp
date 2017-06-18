#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double mDegeri,
    uzaklikHesabi,
    uzaklikSonucu;
int main(){
    setlocale(LC_ALL, "Turkish");
    cout << "Depremin Sıvılaşma Yapabileceği Uzaklık" << endl;
    cout << "Deprem Büyüklüğünü Girin ( M Değeri ): ";
    cin >> mDegeri;
    if(mDegeri<=0){
        cout << "0 'dan Büyük Bir Değer Girmelisiniz.";
    }
    else{
    uzaklikHesabi = ((0.77 * mDegeri)-3.6);
    uzaklikSonucu = pow(10, uzaklikHesabi);
    cout << "Uzaklık Sonucu ( Kilometre Olarak ): " << setprecision(15) << uzaklikSonucu << endl;
    }
    return 0;
}
