#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char,int>m;
    int i=0,j=0,mx=-1;
    while(j<s.length()){
        m[s[j]]++;
        if(m.size()>j-i+1){
            j++;
        }
        else if(m.size()==j-i+1){
            mx=max(mx,j-i+1);
            j++;
        }
        else if(m.size()<j-i+1){
            while(m.size()<j-i+1){
                m[s[i]]--;
                if(m[s[i]]==0){
                    m.erase(s[i]);
                }
                i++;
            }
            j++;
        }
    }
    cout<<mx;
    return 0;
}
