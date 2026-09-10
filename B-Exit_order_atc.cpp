#include <iostream>
using namespace std;

int main() {
    int N;cin>>N;
    int st=1,end=10;
    for (int ctr=1;ctr<=N;ctr++){
        int curr;cin>>curr;
        if (!(curr>=st && curr<=end)){
            cout<<"No"<<endl; return 0;
        }
        if(ctr%10==0){
            st+=10;
            end+=10;
        }
    }
    cout<<"Yes"<<endl;
}