#include <sstream>
#include <fstream>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(int argc,char *argv[]){
  string ho,dem,ten,que;
  bool foundH = false;
  bool foundD = false;
  bool foundT = false;
  bool foundTU = false;
  bool foundQ = false;
  int tuoi;
  for(int i = 1; i < argc; ++i){
    string tukhoa(argv[i]);
    if(tukhoa == "-h"){
      ho = argv[i+1];
      foundH = true;
    }else if(tukhoa == "-d"){
      dem = argv[i+1];
      foundD = true;
    }else if(tukhoa == "-t"){
      foundT = true;
      ten = argv[i+1];
    }else if(tukhoa == "-tu"){
      foundTU = true;
      tuoi = stoi(argv[i+1]);
    }else if(tukhoa == "-q"){
      foundQ = true;
      que = argv[i+1];
    }
  }
  if(!foundH){
    cout<<"Khong tim thay ho, mac dinh la Nguyen\n";
    ho = "Nguyen";
  }  if(!foundD){
    cout<<"Khong tim thay ten dem, mac dinh la Van\n";
    dem = "Van";
  }  if(!foundT){
    cout<<"Khong tim thay ten, mac dinh la A\n";
    ten = "A";
  }  if(!foundTU){
    cout<<"Khong tim thay tuoi, mac dinh la 16\n";
    tuoi = 16;
  }  if(!foundQ){
    cout<<"Khong tim thay ho, mac dinh la ThaiBinh\n";
    que = "ThaiBinh";
  }
  cout << "Ho ten: "<< ho << " "<<dem<<" "<<ten<<endl;
  cout << "Tuoi: "<<tuoi<<endl;
  cout << "Que quan: "<<que<<endl;
}