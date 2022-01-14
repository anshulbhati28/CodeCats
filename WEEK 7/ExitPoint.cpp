#include<iostream>
using namespace std;

int main(){
    int r,c;
    int dir=0; // 0-e, 1-s, 2-w, 3-n
    cout<<"Enter the no of rows and columns:";
    cin>>r>>c;
   int arr[r][c];
    cout<<"Enter matrix: "<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];    
        }
    }
    int i=0,j=0;
    while (true)
    {
        dir = (dir+arr[i][j])%4;

        if(dir==0){
            j++;
        }
        else if(dir==1){
            i++;
        }
        else if(dir==2){
            j--;
        }
        else if(dir==3){
            i--;
        }
        if(i<0){i++;break;}
        if(j<0){j++;break;}
        if(j==c){j--;break;}
        if(i==r){i--;break;}
    }
    cout<<i<<endl;
    cout<<j<<endl;
    
    return 0;
}