#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>
#include<cstring>
using namespace std;
int main(){
    int n,k,b;cin>>n>>k>>b;
    int a[100001]={0};
    for(int i=1;i<=b;i++){
        int x;cin>>x;
        a[x]=1;
    }
    int cnt=0;
    for(int i=1;i<=k;i++) if(a[i]==1) cnt++;
    int ans=cnt;
    for(int i=k+1;i<=n;i++){
        cnt=cnt-a[i-k]+a[i];
        ans=min(ans,cnt);
    }
    cout<<ans<<endl;
}