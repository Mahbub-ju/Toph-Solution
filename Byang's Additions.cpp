#include<bits/stdc++.h>
using namespace std;
int main(){
int n1,n2,rem1,rem2,c=0;
cin>>n1>>n2;
while(n1>0&&n2>0){

  rem1=n1%10;
  n1/=10;
  rem2=n2%10;
  n2/=10;
  if(rem1+rem2>9){
    c++;
    break;
  }

}
if(c)cout<<"Yes";
else cout<<"No";
}
