#include<iostream>
using namespace std;

int main(){
    int i,j,r,c;
    cout<<"Enter the no of rows and columns:";
    cin>>r>>c;
   int arr[r][c];
    cout<<"Enter matrix: "<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j];    
        }
    }
    
    
    for(j=0;j<c;j++){
        if(j%2==0){
            for(i=0;i<r;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for (i = r-1; i>=0; i--)
            {
                cout<<arr[i][j]<<" ";
            }
            
        }
    }
    return 0;
}