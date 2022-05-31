#include <sstream>
#include <fstream>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]){
  int n;
  int mode;
  float time,r;
  bool foundN = false;
  bool foundMode = false;
  bool foundTime = false;
  bool foundR = false;
  for(int i = 1; i< argc; ++i){
    string tukhoa(argv[i]);
    if(tukhoa =="-n"){
      n = stoi(argv[i+1]);
      foundN = true;
    }
    else if(tukhoa =="-mode"){
      mode = stoi(argv[i+1]);
      foundMode = true;
    }
    else if(tukhoa == "-time"){
      time = stod(argv[i+1]);
      foundTime = true;
    }
    else if(tukhoa == "-r"){
      r= stod(argv[i+1]);
      foundR = true;
    }
  }
  if(!foundN){
    cout << "Khong tim thay n, cho n mac dinh = 100\n";
    n=100;
  }
    if(!foundMode){
    cout << "Khong tim thay mode, cho n mac dinh = 100\n";
    mode=100;
  }  if(!foundTime){
    cout << "Khong tim thay time, cho n mac dinh = 100\n";
    time=100;
  }  if(!foundR){
    cout << "Khong tim thay r, cho n mac dinh = 100\n";
    r=100;
  }
  cout <<"n = "<<n<<endl<<"mode = "<<mode<<endl<<"time = "<<time<<endl<<"r = "<<r<<endl;
  return 0;
}