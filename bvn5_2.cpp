#include <sstream>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc,char* argv[]){
  string path = argv[1];
  int nodeID = stoi(argv[2]);
  float w = stof(argv[3]);
  ifstream file(path);
  if(!file){
    cout<<"Unable to read file!\n";
    exit(0);
  }
  ofstream outfile("/home/vuthoai/codeC/C-NangCao/output.txt", ios_base::app);
  outfile << "Diem co trong so tu nodei lon hon trong so da truyen la: "<<endl;
  string temp;
  getline(file,temp);
  while (getline(file,temp))
  {3
    stringstream ss(temp);
    string token;
    getline(ss, token, ',');
    int nodei = stoi(token);
    getline(ss, token, ',');
    int nodej = stoi(token);
    getline(ss, token, ',');
    float trongso = stof(token);
    if(nodej == nodeID && trongso > w){
      outfile << nodei << " " << trongso<<endl;
    }
  }
  file.close();
  outfile.close();
  return 0;
}