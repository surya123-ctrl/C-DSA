#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans;
    list<int> l;
    int i=0,j=0;
    while(j<n){
        while(l.size()>0 && l.back() < arr[j]){
            l.pop_back();
        }
        l.push_back(arr[j]);
        if(j-i+1 < k){
            j++;
        }
        else if(j-i+1 == k){
            ans.push_back(l.front());
            if(l.front() == arr[i]){
                l.pop_front();
            }
            i++;
            j++;
        }
    }
    for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}
