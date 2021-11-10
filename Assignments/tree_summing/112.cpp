#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <algorithm>
#include <sstream>

using namespace std;

bool my_isdigit(char ch)
{
    return std::isdigit(static_cast<unsigned char>(ch));
}

struct Node{
  int data;
  Node* left;
  Node* right;
  Node():data{0},left{nullptr},right{nullptr}{}
  Node(int d):data{d},left{nullptr},right{nullptr}{}
};

char ch;
string sch="";
string lisp="";
int answer = 0;

int main() {
  while(cin>>sch){
    if(my_isdigit(*sch.c_str())){
          
      if(lisp.size() > 0){
        cout<<lisp<<endl;
      }
      
      lisp = "";
      cout<<sch<<endl;
    }else{
      lisp += sch;
    }
  }
  cout<<lisp<<endl;
} 