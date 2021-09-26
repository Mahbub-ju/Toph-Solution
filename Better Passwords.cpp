#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
char ch=s[0];
if(ch>=97){
  ch-=32;
  cout<<ch;
}
else
  cout<<ch;

for(int i=1;i<s.size();i++){
  if(s[i]=='s')
    cout<<"$";
  else if(s[i]=='i')
    cout<<"!";
    else if(s[i]=='o')
    cout<<"()";
    else
    cout<<s[i];
}
cout<<".";
}
