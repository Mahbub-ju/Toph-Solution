#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>v;
  vector<int>::iterator it;
int n;
cin>>n;
v.push_back(1);
v.push_back(1);

for(int i=2;i<=n;i++){
    int a=v[i-1]+v[i-2];
    v.push_back(a);

}
if(n==0)
  cout<<v[0];
else
cout<<v[n-1];
}
