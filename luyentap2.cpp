#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <set>
#include <math.h>
#include <map>

using namespace std;
struct Node
{
  int nodei,nodej;
  float w;
};

vector<Node> node;
vector<int> groups;

void xuatphat(int groupId){
  ofstream outfile("/home/vuthoai/codeC/C-NangCao/edge.csv");
  for(auto point : groups){
    for(auto no : node){
      if(point == no.nodei){
        outfile << no.nodei << " " << no.nodej << " " << no.w<<endl;
      }
    }
  }
}

int main(int argc, char *argv[])
{
  string path = argv[1];
  int groupId = stoi(argv[2]);
  ifstream file(path);
  if (!file)
  {
    cout << "Unable to read file!\n";
    exit(0);
  }
  string temp;
  getline(file, temp);
  int group = 0;
  int max = 1;
  int count = 0;
  int i = 0;
  while (getline(file, temp))
  {
    int point = 0;
    stringstream ss(temp);
    string token;
    if (group < 5)
    {
      while (getline(ss, token, ','))
      {
        if(groupId == group) groups.push_back(stoi(token));
        point++;
      }
      if (count < point)
      {
        max = group;
        count = point;
      }
      i = 0;
      group++;
    }else{
      node.push_back(Node());
      getline(ss,token,',');
      node[i].nodei = stoi(token);
      getline(ss,token,',');
      node[i].nodej = stoi(token);
      getline(ss,token,',');
      node[i].w = stof(token);
      i++;
    }
  }

  cout << "Nhom " << max << " co so luong diem la lon nhat - " << count << " diem.\n";
  xuatphat(groupId);

  return 0;
}