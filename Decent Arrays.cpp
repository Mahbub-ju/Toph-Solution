#include<bits/stdc++.h>
using namespace std;
int main(){
int n,c=0;
cin>>n;
int a[100];
for(int i=0;i<n;i++){
  cin>>a[i];

}
for(int i=1;i<n-1;i++){
  if(a[i]<a[i-1]){
    c++;
    break;
  }
}
if(c)cout<<"No";
else cout<<"Yes";
}
