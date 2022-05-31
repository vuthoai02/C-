#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
#include <sstream>
#include <set>
#include <map>
#include <unordered_map>

using namespace std;

// void invec(vector<int> vec){
//   for(int x : vec){
//     cout << x << " ";
//   }
//   cout<<endl;
// }

// double tim_kmax(vector<int> vec, int k){
//   sort(vec.begin(),vec.end());
//   invec(vec);
//   return vec[vec.size() - k];
// }

void timx(unordered_map<int,int> count, int x){
  if(count.find(x) != count.end()){
    cout << x << " co ton tai, xuat hien : "<< count[x]<<endl;
  }else{
    cout << "Khong ton tai\n";
  }
}





int main(int argc, char *argv[]){
  // string txt = "A paragraph is a series of related sentences developing a central idea, called the topic. Try to think about paragraphs in terms of thematic unity: a paragraph is a sentence or a group of sentences that supports one central, unified idea. Paragraphs add one idea at a time to your broader argument.";
  // stringstream ss(txt);
  // string word;
  // vector<string> allWords;
  // set<string> danhSachTu;
  // while(ss >> word){
  //   danhSachTu.insert(word);
  //   allWords.push_back(word);
  // }

  // for(auto x : danhSachTu){
  //   int count = 0;
  //   for(auto y : allWords){
  //     if(x == y) count++;
  //   }
  //   cout << x << " : " << count<<endl;
  // }
  // cout << endl;
  vector<int> S = {1,2,3,45,7,65,2,4,9,78,5,26};
  unordered_map<int,int> count;

  for(auto x: S){
    if(count.find(x) != count.end()){
      count[x]++;
    }else{
      count[x] = 1;
    }
  }



  return 0;
}