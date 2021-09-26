#include<bits/stdc++.h>
using namespace std;
int main(){
double h,m,x;
scanf("%lf %lf",&h,&m);
 x=(0.5*11*m)-30*h;
if(x<0){
  x*=-1;
     }
if(x<=180)
printf("%.10lf\n",x);
else
printf("%.10lf\n",360-x);



}
