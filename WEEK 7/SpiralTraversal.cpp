#include<iostream>
using namespace std;

int main(){
    int i,j,r,c,count =0;
    cout<<"Enter the no of rows and columns:";
    cin>>r>>c;
    int tne = r*c;
   int arr[r][c];
    cout<<"Enter matrix: "<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j];    
        }
    }
    int minr = 0;
    int minc = 0;
    int maxr = r-1;
    int maxc = c-1;
    while (count<tne)
    {
        //Left wall
        for(i=minr;i<=maxr && count<tne;i++){
            j=minc;
            cout<<arr[i][j]<<" ";
            count++;
        }
        minc++;

        //Bottom wall
        for(j=minc; j<=maxc && count<tne;j++){
            i = maxr;
            cout<<arr[i][j]<<" ";
            count++;
        }
        maxr--;

        //Right wall
        for(i=maxr;i>=minr && count<tne;i--){
            j = maxc;
            cout<<arr[i][j]<<" ";
            count++;
        }
        maxc--;

        //Top wall
        for(j=maxc;j>=minc && count<tne;j--){
            i = minr;
            cout<<arr[i][j]<<" ";
            count++;
        }
        minr++;
    }
    

}