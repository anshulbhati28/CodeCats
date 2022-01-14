#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int>&oned , int li, int ri){
    while (li<ri)
    {
        int temp = oned[li];
        oned[li] = oned[ri];
        oned[ri] = temp;

        li++;
        ri--;
    }
    
}
void rotate(vector<vector<int> >& arr){
    int n = arr.size();
    //TRANSPOSE
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    // REVERSING COLUMNS

    for(int i=0;i<n;i++){
        reverse(arr[i].begin(),arr[i].end());
  
}
}
void display(vector<vector<int> >&arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int i,j,n;
    cout<<"Enter the no of rows and columns:";
    cin>>n;
   vector<vector<int> > arr(n, vector<int>(n));
    cout<<"Enter matrix: "<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];    
        }
    }
    rotate(arr);
    display(arr);
}