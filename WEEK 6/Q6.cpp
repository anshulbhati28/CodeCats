#include<iostream>
using namespace std;

string interpret(string s){
    string ans;
    for(int i=0;i<s.length();){
    if(s[i]=='G'){
    ans += 'G';
    ++i;
    }
   else if(s[i+1]==')'){
        ans += 'o';
        i += 2;
    }
    else {
        ans += "al";
        i += 4;
    } 
    }
    return ans;
}
int main(){
    string input = "G()()(al)";
    cout<< interpret(input);
    return 0;

}