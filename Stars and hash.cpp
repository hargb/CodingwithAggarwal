#include<iostream>
using namespace std;
int main(){
    // task 1->
    string s;
    getline(cin,s);
    // cnt star and hash
    int c_h = 0;
    int c_s = 0;
    for(int i =0;i<s.length();i++){
        if(s[i] == '*') c_s++;
         else if(s[i] == '#') c_h++;
    }
    cout<<c_s-c_h<<endl;
   
    
    return 0;
}
