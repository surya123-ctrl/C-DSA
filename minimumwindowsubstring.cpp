#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,K;
    cin >> N >> K;
    int Arr[N];
    for(int i=0;i<N;i++)
    cin >> Arr[i];
    int i=0,j=0;
        long long sum=0;
        long long mx=INT_MIN;
        while(j<N){
            sum+=Arr[j];
            if(j-i+1<K)
                j++;
            else if(j-i+1==K){
                mx=max(mx,sum);
                sum-=Arr[i];
                i++;
                j++;
            }
        }
    cout << mx;
    return 0;
}