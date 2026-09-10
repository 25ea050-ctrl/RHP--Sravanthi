#include <iostream>
#include <vector>
#define ll long long int
using namespace std;
int main() {
    int N;cin>>N;
    vector<int>a(N),b(N);
    for (int i=0;i<N;i++) cin>>a[i];
    for (int i=0;i<N;i++) cin>>b[i];
    ll amore=0,bmore=0;
    for(int i=0;i<N;i++){
        if (a[i]>b[i]){
            amore+=(a[i]-b[i]);
        }
        else if(b[i]>a[i]){
            bmore+=(b[i]-a[i]);
        }
    }
    if(amore==0){
        cout<<"No"<<endl; return 0;
    }
    ll amwt=(bmore/amore)+2;
    vector<ll> ans;
    
    for (int i=0;i<N;i++){
    if (a[i]<=b[i]) ans.push_back(1);
    else ans.push_back(amwt);
    }
    cout<<"Yes"<<endl;
    for(ll s: ans){
        cout<<s<<" ";
    }
    cout<<endl;

}