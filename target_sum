#include<bits/stdc++.h>
int count_sss_diff(int a[],int n,int val)
{
  int t[n+1][val+1];
  for(int i=0;i<n+1;i++)
    for(int j=0;j<val+1;j++)
    {
      if(i==0)
      {
        t[i][j]=0;
      }
      if(j==0)
      {
        t[i][j]=1;
      }
    }
  for(int i=1;i<n+1;i++)
  {
    for(int j=1;j<val+1;j++)
    {
      if(a[i-1]<=j)
      {
        t[i][j]=t[i-1][j-a[i-1]]+t[i-1][j];
      }
      else
      {
        t[i][j]=t[i-1][j];
      }
    }
  }
  return t[n][val];
}
int main()
{
  int a[]={1,1,2,3};
  int t_sum=1;
  int n=sizeof(a)/sizeof(a[0]);
  int val;
  int sum=0;
  for(int i=0;i<n;i++)
  {
      sum+=a[i];
  }
  val=(t_sum+sum)/2;
  std:: cout<<(count_sss_diff(a,n,val));
  return 0;
}
