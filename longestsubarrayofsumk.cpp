#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i=0,j=0,mx=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int sum=0;
        while(j<n){
            sum+=arr[j];
            if(sum<k){
                j++;
            }
            else if(sum==k){
                mx=max(mx,j-i+1);
                j++;
            }
            else if(sum>k){
                while(sum>k){
                    sum-=arr[i];
                    i++;
                }
                j++;
            }
        }
        cout<<mx<<endl;
}
