
#include<bits/stdc++.h>
using namespace std;
int main(){
    string  s1,s2;
    int i,cnt=0;
    cin>>s1;
    reverse(s1.begin(),s1.end());
    for(i=0;i<s1.size();i++){
        if(cnt==3){
            s2+=",";
            s2+=s1[i];
            cnt=0;
        }
        else {
            s2+=s1[i];
        }
        cnt++;
    }
  reverse(s2.begin(),s2.end());
cout<<s2;

return 0;
}
