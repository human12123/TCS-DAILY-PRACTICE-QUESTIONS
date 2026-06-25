#include<bits/stdc++.h>
using namespace std;
void boundaryTraversal(vector<vector<int>> &arr,int n,int m){
    // Agar sirf ek hi row hai to wahi print krdo edge case
    if(n==1){
        for(int j=0;j<m;j++){
            cout<<arr[0][j]<<" ";
        }
        return; //return krdo
    }
    // Agar sirf ek hi column hai to wahi print krdo
    if(m==1){
        for(int i=0;i<n;i++){
            cout<<arr[i][0]<<" ";
        }
        return;
    }

    // Pehli row left se right
    for(int j=0;j<m;j++){
        cout<<arr[0][j]<<" ";
    }

    // Pehla element already print ho chuka hai
    // to Isliye row 1 se start krnge
    for(int i=1;i<n;i++){
        cout<<arr[i][m-1]<<" ";
    }

    // Last element already print ho gaya
    // to Isliye second last column se ulta chalne lagega
    for(int j=m-2;j>=0;j--){
        cout<<arr[n-1][j]<<" ";
    }

    // Bottom aur top already print ho chuke hain
    //  to Isliye unko skip krnge
    for(int i=n-2;i>=1;i--){
        cout<<arr[i][0]<<" ";
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Boundary Traversal"<<endl;
    boundaryTraversal(arr,n,m);

    return 0;
}