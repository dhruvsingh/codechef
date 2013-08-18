#include<iostream.h>
#include<iomanip>

using namespace std;

int main()
{
int i,j,n,c,noofplans;
float defaultrate,usage,actualtot,months,callingrate,costofplan,plantot,cost[100],min=0;
cin>>n;
cout<<setprecision(2);
for(i=1;i<=n;i++)
 {
  cin>>defaultrate;
  cin>>usage;
  cin>>noofplans;
  actualtot=defaultrate*usage;
  for(j=1;j<=noofplans;j++)
  {
   cin>>months;
   cin>>callingrate;
   cin>>costofplan;
   plantot=((costofplan/months)+(callingrate*usage));
   cost[j]=plantot;
  }
 
for (int k=1;k<=noofplans; k++)
{
  if (k==1) 
     min=cost[k];
  else
    if (cost[k]<min) 
    min=cost[k];
    
}
  
  if(min<actualtot)
    cout<<j-1<<'\n';
  else
  cout<<'0'<<'\n';
 }
return 0;
}
