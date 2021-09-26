#include<bits/stdc++.h>
using namespace std;
int main(){
int row,col,c=0;

cin>>row >>col;
char ch[row+5][col+5];
int ar[row+5][col+5];
for(int i=1;i<=row;i++){
  for(int j=1;j<=col;j++){
    cin>>ch[i][j];
    ar[i][j]=1;
  }
}

for(int i=1;i<=row;i++){
  for(int j=1;j<=col;j++){
    if(ch[i][j]=='*'){
      ar[i][j]=0;
      ar[i][j+1]=0;
      ar[i][j-1]=0;
      ar[i+1][j]=0;
      ar[i-1][j]=0;
    }
  }
}
for(int i=1;i<=row;i++){
  for(int j=1;j<=col;j++){
    if(ar[i][j]==1){
        c++;

    }
  }
}
cout<<c;
}
