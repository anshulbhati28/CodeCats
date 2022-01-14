#include<iostream>
#include<vector>
using namespace std;


vector<int> fillonedfromshell(vector<vector<int> >& arr ,int s){
    int minr = s-1;
    int minc = s-1;
    int maxc = arr[0].size()-1;
    int maxr = arr.size()-1;

    int n = 2*(maxr-minr) + 2*(maxc - minc);
    vector<int> oned(n);
    int idx = 0;

    //lw
    for(int i=minr;i<=maxr;i++){
        int j=minc;
        oned[idx]= arr[i][j];
        idx++;
    }

    //bw
    for(int j=minc;j<=maxc;j++){
        int i=maxr;
        oned[idx]= arr[i][j];
        idx++;
    }

    //rw
    for(int i=maxr;i>=minr;i--){
        int j=maxc;
        oned[idx]= arr[i][j];
        idx++;
    }

    //tw
    for(int j=maxc;j>=minc;j--){
        int i=minr;
        oned[idx]= arr[i][j];
        idx++;
    }

    return oned;

}

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

void rotate(vector<int>&oned , int r){
    int sz = oned.size();

    r = r%sz;
    if(r<0)
    r = r+sz;

    reverse(oned, 0,oned.size()-r-1);
    reverse(oned, oned.size()-r,oned.size()-1);
    reverse(oned, 0,oned.size()-1);
}

void fillshellfromoned(vector<vector<int> >& arr ,int s,vector<int> oned){
    int minr = s-1;
    int minc = s-1;
    int maxc = arr[0].size()-1;
    int maxr = arr.size()-1;

    int idx = 0;

    //lw
    for(int i=minr;i<=maxr;i++){
        int j=minc;
         arr[i][j]=oned[idx];
        idx++;
    }

    //bw
    for(int j=minc;j<=maxc;j++){
        int i=maxr;
        arr[i][j]=oned[idx];
        idx++;
    }

    //rw
    for(int i=maxr;i>=minr;i--){
        int j=maxc;
        arr[i][j]=oned[idx];
        idx++;
    }

    //tw
    for(int j=maxc;j>=minc;j--){
        int i=minr;
        arr[i][j]=oned[idx];
        idx++;
    }

}

void rotateShell(vector<vector<int> >&arr, int s, int r){
        vector<int> oned = fillonedfromshell(arr, s);
        rotate(oned,r);
        fillshellfromoned(arr,s,oned);
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
    int n,m,s,r;
    cout<<"Enter the value of n and m:";
    cin>>n>>m;
    vector<vector<int> > arr(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cin>>s>>r;
    rotateShell(arr,s,r);
    display(arr);

}