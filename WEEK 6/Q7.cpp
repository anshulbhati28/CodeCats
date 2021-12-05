#include<iostream>
#include<unordered_map>
#include<math.h>
using namespace std;

bool check(string s, string t){
        unordered_map<int,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
            m[t[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(abs(m[i])>3)
            return false;
        }
        return true;
}
int main(){
    string word1 = "abcdeef", word2 = "abaaacc";
    int num = check(word1,word2);
    if(num==0)
    cout<<"FALSE";
    else
    cout<<"TRUE";
    return 0;
}