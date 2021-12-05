#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
    string s = "XVII";
    map<char,int>m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;

    int sum = 0,num,i,len = s.length();
    for(i=0;i<len;){
        if(i==(len-1)||m[s[i]]>= m[s[i]+1]){
            num = m[s[i]];
            i++;
        }
        else{
            num = m[s[i]+1] - m[s[i]];
            i += 2;
        }
        sum += num;
    }
    cout << sum;
}