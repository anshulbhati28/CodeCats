#include<iostream>
#include<string>
using namespace std;

int main(){
    int count = 0;
    string jewels = "aA";
    string stones = "aAAbbbb";

    for(int i=0;stones[i]!='\0';i++){
        for(int j=0;jewels[j]!='\0';j++){
            if(stones[i]==jewels[j])
            count++;
        }
    }
    cout << count;
}