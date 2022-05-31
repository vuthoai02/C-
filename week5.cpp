#include <sstream>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc,char* argv[]){
  string path = argv[1];
  string id = argv[2];
  ifstream file(path);
    if(!file){
    cout<<"Unable to read file!\n";
    exit(0);
  }

  string temp;
  float trungbinh;
  float tongvalue = 0;
  float tongtime = 0;
  int count = 0;
  getline(file,temp);
  while (getline(file,temp))
  {
    stringstream ss(temp);
    string token;
    getline(ss , token, ',');
    if(token != id) continue;
    getline(ss, token, ',');
    tongvalue+=stod(token);
    getline(ss,token,',');
    tongtime+=stod(token);
    count++;
  }
  ofstream outfile("/home/vuthoai/codeC/C-NangCao/week5output.txt", ios_base::app);
  if(count == 0){
    cout << "Khong ton tai" << id << "\n";
    outfile << "Khong ton tai" << id;
  }else{
    cout<< tongvalue/count << " - "<<tongtime/count;
    outfile << tongvalue/count << "-" << tongtime/count;
  }
  file.close();
  outfile.close();
}