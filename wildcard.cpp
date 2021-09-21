#include"bits/stdc++.h"
using namespace std;
#define take_input freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define t(x)  int n; cin>>n;
#define ll long long
#define t(x)  int n; cin>>n;
#define w(x)  int q; cin>>x; while(q--)
#define pb    push_back;
#define cheetah ios_base::sync_with_stdio(false); cin.tie(0);
#define mod   1000000007
//<------------------------------------------------------------------------------->

 int solve(vector<int>arr,int n){
  //int n= arr.size();
  pair<int,int>p[n];
  for(int i=0; i<n; i++){
   p[i].first=arr[i];
   p[i].second=i;
  }
  sort(p,p+n);
  vector<bool>vis(n,false);
  int ans=0;
  for(int i=0; i<n; i++){
    int old= p[i].second;
   if(vis[i]==true || old ==i)
    continue;
   int cycle=0;
   while(vis[i]==false){
    vis[i]=true;
    int next=p[i].second;
    i=p[i].second;
    cycle+=1;
   }
   ans+=cycle-1;
  }
  return ans;
 }


 int main(){
  take_input;
  cheetah;
  t(x);
  vector<int> arr;
   for(int i=0; i<n; i++){
    int x;
    cin>>x;
    arr.push_back(x);
   }
    cout<<solve(arr,n)<<endl;
  return 0;
 }