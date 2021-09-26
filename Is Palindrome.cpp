#include<bits/stdc++.h>
using namespace std;
/*
int main(){

string s1,s2;
cin>>s1;
s2=s1;
reverse(s1.begin(),s1.end());
if(s1==s2)
  cout<<"Yes"<<endl;
else
  cout<<"No"<<endl;

}
*/
int main(){

  string s;

  cin>>s;
  int len,cnt=0;
  len=s.size();
  for(int i=0;i<len/2;i++){

    if(s[i]!=s[len-i-1]){
      cnt++;
      break;
    }

  }
  if(cnt)
    cout<<"NO"<<endl;
  else cout<<"Yes"<<endl;

}
