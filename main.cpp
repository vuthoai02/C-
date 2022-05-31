#include <iostream>
#include<vector>
using namespace std;

// void display(vector<int> &vec){
//   for(auto i: vec){
//     cout<<i<<"\t";
//   };
//   cout<<endl;
// }

// void doisochan(vector<int> &vec){
//   for(int i = 0; i< vec.size();i++){
//     if(vec[i]%2 == 0){
//       vec[i] = 0;
//     }
//   }
// }

struct sasuke{
  string ten;
  int tuoi;
  float cannang;

  void sasukenoi(){
    cout<<ten<<"hello\n";
  }

  void sasukethongtin(){
    cout<<ten<<endl<<tuoi<<endl<<cannang<<endl;
  }
};

int main(){
  // vector<int> vec;
  // vec = {1,2,3,4,5};
  // doisochan(vec);
  // display(vec);

  sasuke hinata;
  hinata.ten="hinata";
  hinata.tuoi = 16;
  hinata.cannang=36;
  return 0;
}