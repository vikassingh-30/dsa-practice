#include <bits/stdc++.h>
using namespace std;

int main(){
   int arr[]={100,80,60,81,70,75,80};
   int n=sizeof(arr)/sizeof(arr[0]);
   stack<int> st;
   st.push(0);
    int pgi[n];//previous greater index
    pgi[0]=-1;
    for(int i=1;i<n;i++){
        while(arr[i]>=arr[st.top()] && st.size()>0) st.pop();
        if(st.size()>0) pgi[i]=st.top();
        else pgi[i]=-1;
        st.push(i);
    }
    //print
    for(int i=0;i<n;i++){
        cout<<i-pgi[i]<<" ";
    }
}
