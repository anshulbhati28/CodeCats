#include<string>
#include<limits.h>
#include<iterator>
#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;
void FindExtraChar(string str1, string str2 ){
    unordered_map<char,int> m1 ;
    char extra;
    for(int i=1;i<=str2.length();i++){
        m1[str2[i]]++;
    }
    for(int i=1;i<=str1.length();i++){
        m1[str1[i]]--;
    }
        for (int i=1; i < 26;i++){
            if(m1[str2[i]]==1){
                 cout<< str2[i] ;
                 break;
            }
        }
}
    int main(){
        string strA = "abcd";
        string strB = "abcde";
         FindExtraChar(strA,strB);
        return 0;
    }