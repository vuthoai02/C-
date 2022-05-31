#include <sstream>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>

using namespace std;

struct Node
{
  int id;
  float x,y;
};

float khoangcach(Node a, Node b){
  return sqrt( pow((a.x - b.x),2)+ pow((a.y - b.y),2));
}


int main(int argc,char* argv[]){
  string path = argv[1];
  int nodeID = stoi(argv[2]);
  int n = argv[3];
  ifstream file(path);
  if(!file){
    cout<<"Unable to read file!\n";
    exit(0);
  }
  vector<Node> node;
  string temp;
  getline(file,temp);
  while (getline(file,temp))
  {
    node.push_back(Node());
    stringstream ss(temp);
    string token;
    getline(ss, token, ',');
    int id = stoi(token);
    node[id].id = id;
    getline(ss, token, ',');
    node[id].x = stof(token);
    getline(ss, token, ',');
    node[id].y = stof(token);
  }
  int idMin = -1;
  int min = khoangcach(node[0],node[nodeID]);
  for(int i = 1; i < node.size(); i++){
    if(nodeID != i){
      if(khoangcach(node[nodeID],node[i]) < min){
        idMin = node[i].id;
        min = khoangcach(node[nodeID],node[i]);
      }
    }
  }
  ofstream outfile("/home/vuthoai/codeC/C-NangCao/output.txt", ios_base::app);
  if(idMin != -1){
    outfile << "Id cua node co khoang cach gan node can tim nhat = " << idMin;
  }else{
    outfile << "Xem lai tien trinh";
  }
  file.close();
  outfile.close();
  return 0;
}