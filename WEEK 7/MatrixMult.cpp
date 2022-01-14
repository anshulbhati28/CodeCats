#include<iostream>
using namespace std;

int main(){
    int arr1[2][3];
    int i,j,k;
    cout<<"Enter 1st matrix: "<<endl;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            cin>>arr1[i][j];    
        }
    }
    cout<<"Enter 2nd matrix: "<<endl;
    int arr2[3][2];
    for( i=0;i<3;i++){
        for(j=0;j<2;j++){
            cin>>arr2[i][j];  
        }
    }
    int arr3[2][2];
     for(i = 0; i < 2; ++i)
        for(j = 0; j < 2; ++j)
        {
            arr3[i][j]=0;
        }
    
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<3;k++){
            arr3[i][j] += (arr1[i][k])*(arr2[k][j]);
            }
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            cout<<" "<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
