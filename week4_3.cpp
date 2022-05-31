#include <sstream>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc,char* argv[]){
  ifstream myfile("/home/vuthoai/codeC/C-NangCao/week4_3.txt");
  if(!myfile){
    cout<<"Unable to read file!\n";
    exit(0);
  }

  string temp;
  while (getline(myfile,temp))
  {
    stringstream ss(temp);
    string ten;
    float toan,van;
    float diem = 0;
    ss>>ten>>toan>>van;
    if(toan + van >= 16){
      count ++;
    }
  }
  
  // vector<string> danhsach = {"a 10 9","b 2 7","c 5 8","d 7 9","e 9.5 7"};
  // int count = 0;
  // for(string line : danhsach){
  //   stringstream ss(line);
  //   string ten;
  //   float toan,van;
  //   ss<<line;
  //   ss>>ten;
  //   ss>>toan;
  //   ss>>van;
  //   if((toan+van)/2.0>=8){
  //     count ++;
  //   }
  // }
  // cout<<count;
  return 0;
}