#include <iostream>
#include <string>
// #include <array>
#include <vector>

using namespace std;

// template <typename T,size_t size>
// void inMang(array<T,size> a){
//   for(int i = 0; i< size; i++){
//     cout << a[i] << " ";
//   }
// }

void invec(vector<int> vec){
  for(int i =0; i< vec.size();i++){
    cout << vec.at(i)<< " ";
  }
  cout << endl;
}

void invec2d(vector<vector<int>> vec){
  for(int i = 0; i < vec.size(); i++){
    invec(vec[i]);
  }
  cout << endl;
}

int main(int argc, char* argv[]){
  // array<int, 4> a = {1,5,8,9};
  // cout<< a.size() << "-" << a.back;
  // inMang(a);

  // vector<int> vec = {1,6,4,7,9,21}; 
  // // vec.resize(10,0);
  // // vec[0] = 1;
  // // vec[2] = 9;
  // // vec.push_back(1);
  // // vec.push_back(2);
  // for(int i = 0; i < vec.size();++i){
  //   if(vec[i]%2!=0) vec.erase(vec.begin() + i);
  //   i--;
  // }
  // invec(vec);

  vector<vector<int>> a ={
    {1,2,8,9},
    {7,2,4,1,3},
    {2}
  }; 
  a = {};
  for(int i =0; i < a.size(); ++i){
    for(int j =0; j < a[i].size(); ++j){
      if(a[i][j] %2 == 0){
        a[i].erase(a[i].begin() + j);
        --j;
      }
    }
  }

  return 0;
}