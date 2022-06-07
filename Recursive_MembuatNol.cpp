//Nama :M. Iqbal Nasmi Makarim
//NPM : G1A021094
//Kelas : Informatika B

#include<iostream>
using namespace std;
int zero(int angka)
{
static int hitung=0;
    if(angka>0)
    {

        if(angka%10==0)
        hitung++;

        zero(angka/10);
    }
    return hitung;
}
int main()
{
    int n;
    cout<<"---------Menghitung Jumlah Angka Nol---------"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"Masukkan angka :";
    cin>>n;
    cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
    cout<<"Banyak angka nol : "<<zero(n);
}
