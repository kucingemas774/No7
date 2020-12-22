#ifndef __LIMASSEGITIGA
#define __LIMASSEGITIGA
#include <string>
#include <iostream>

using namespace std;

#include "01-BangunRuang.hpp"

class LimasSegitiga : public BangunRuang{
    public:
        void Inputan(){
            cout<<"\n==Limas Segitiga=="<<endl;
            cout<<"Masukan Nilai Alas : ";cin>>valueA;
            cout<<"Masukan Nilai Tinggi : ";cin>>valueB;
        }
        void Display(){
            Hasil = 0.1667 * valueA * valueB * valueB ; 
            cout<<"Rumus Volume Limas Segitiga : "<<endl;
            cout<<"0.1667 * alas * tinggi * tinggi"<<endl;
            cout<<"0.1667"<<" * "<<valueA<<" * "<<valueB<<" * "<<valueB<<" = "<<Hasil<<endl;
            cout<<"Volume Dari Limas Segitiga : "<<Hasil<<endl;
        }
};

#endif