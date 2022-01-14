#include<iostream>
#include<vector>
using namespace std;

int main(){
    int i,j,m,n;
    cout<<"Enter the no of rows and columns:";
    cin>>m>>n;
   vector<vector<int> > arr(m, vector<int>(n));
    cout<<"Enter matrix: "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];    
        }
    }

    for(int i=0;i<arr.size();i++){
        int svj=0;
        for(int j=0;j<arr[i].size();i++){
            if(arr[i][j]<arr[i][svj])
            svj = j;
        }
        bool flag = true;
        for(int k=0;k<arr.size();k++){
            if(arr[k][svj]>arr[i][svj]){
            flag = false;
            break;
            }
        }
        if(flag == true){
        cout<<arr[i][svj];
        return;
        }
    }
    cout<<"INVALID INPUT";
}