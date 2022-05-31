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
  int id;
  double x, y;
};

double khoangcach(Node a, Node b)
{
  return sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
}

int main(int argc, char *argv[])
{
  string path = argv[1];
  int nodeId = stoi(argv[2]);
  int n = stoi(argv[3]);
  ifstream file(path);
  if (!file)
  {
    cout << "Unable to read file!\n";
    exit(0);
  }
  ofstream outfile("/home/vuthoai/codeC/C-NangCao/sim.txt", ios_base::app);
  string temp;
  set<int> point;
  map<double, Node> gannhat;
  vector<Node> allpoint;
  getline(file, temp);
  getline(file, temp);
  getline(file, temp);
  cout << "In ra cac diem co cot 3 = 1:\n";
  while (getline(file, temp))
  {
    allpoint.push_back(Node());
    stringstream ss(temp);
    string token;
    getline(ss, token, ' ');
    int id = stoi(token);
    allpoint[id].id = id;
    getline(ss, token, ' ');
    double value1 = stod(token);
    allpoint[id].x = value1;
    getline(ss, token, ' ');
    double value2 = stod(token);
    allpoint[id].y = value2;
    getline(ss, token, ' ');
    int cot3 = stoi(token);
    if (cot3 == 1)
    {
      // cout << id << " " << value1 << " " << value2 << endl;
    }
    outfile << id << " " << value1 << " " << value2 << endl;
    point.insert(value1);
    point.insert(value2);
  }

  cout << "\nIn ra so lan di cua cac toa do: \n";
  for (auto p : point)
  {
    int count = 0;
    for (auto point : allpoint)
    {
      gannhat.insert(pair<double,Node>(khoangcach(point,allpoint[nodeId]),point));
      if (point.x == p || point.y == p)
        count++;
    }
    cout << " Toa do " << p << " di " << count << " lan.\n";
  }
  outfile << endl << n << " diem co vi tri gan nodeId " << nodeId << " la:\n";
  map<double, Node>::iterator i;
  int j = 0;
  for(i = gannhat.begin(); i != gannhat.end(); i++){
    if(j <= n){
      outfile << i->second.id << " " << i->second.x << " " << i->second.y << endl;
      j++;
    }else{
      break;
    }
  }

  return 0;
}