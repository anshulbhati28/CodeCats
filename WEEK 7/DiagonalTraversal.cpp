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

    for(int g=0;g<arr[0].size();g++){
        for(j=g,i=0;j<arr[0].size();i++,j++){
            cout<<arr[i][j];
        }
    }
}

