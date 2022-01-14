#include<iostream>
#include<vector>
using namespace std;

int main(){
   int i,j,m,n,a;
    cout<<"Enter the no of rows and columns:";
    cin>>m>>n;
    cout<<"Enter the element to be found:";
    cin>>a;
   vector<vector<int> > arr(m, vector<int>(n));
    cout<<"Enter matrix: "<<endl;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];    
        }
    }
    i=0;j=arr[0].size()-1;
    while(i<arr.size()&&j>=0){
        if(arr[i][j]==a){
        cout<<"Element found at: "<<i<<" "<<j;
        break;
        }
        else if(arr[i][j]>a)
            j--;
        else if(arr[i][j]<a)
            i++;
    }
    
}