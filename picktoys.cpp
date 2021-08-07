#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    unordered_map<char,int>m;
    int i=0,j=0,mx=0;
    while(j<str.length()){
        m[str[j]]++;
        if(m.size()<2){
            j++;
        }
        else if(m.size()==2){
            mx=max(mx,j-i+1);
            j++;
        }
        else if(m.size()>2){
            while(m.size()>2){
                m[str[i]]--;
                if(m[str[i]]==0){
                    m.erase(str[i]);
                }
                i++;
            }
            j++;
        }
    }
    cout<<mx;
    return 0;
}