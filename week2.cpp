#include<iostream>
#include <string>

using namespace std;


struct CauThu
{
  string ten;
  int tuoi;
  float canNang;
  float chieuCao;

  float tinhbmi(){
    float bmi = canNang/chieuCao;
    return bmi;
  }

  void display(){
    cout << ten << "\t" << tuoi << "\t" << chieuCao << "\t" << canNang << "\t" << tinhbmi() << endl;
  }

  bool isFat(){
    if(tinhbmi() > 30) return true;
    return false;
  }
};

int main(){
  CauThu NguyenVanA;
  NguyenVanA.ten = "Van Lam";
  NguyenVanA.canNang = 83.5;
  NguyenVanA.chieuCao = 1.85;

  NguyenVanA.display();
  return 0;
}