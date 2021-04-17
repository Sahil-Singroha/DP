#include <bits/stdc++.h>
using namespace std;

int min_sss_dif(int a[],int n,int range)
{
    bool t[n+1][range+1];
    for(int i=0;i<n+1;i++)
      for(int j=0;j<range+1;j++)
        {
           if(i==0)
             {
                t[i][j]=false;
             }
           if(j==0)
            {
              t[i][j]=true;
            }
        }
    for(int i=1;i<n+1;i++)
    {
      for(int j=1;j<range+1;j++)
        {
            if(a[i-1]<=j)
            {
                t[i][j]=(t[i-1][j-a[i-1]]||t[i-1][j]);
            }
            else
                {
                    t[i][j]=t[i-1][j];
                }
        }
    }
    int diff=INT_MAX;
    for(int j=range/2;j>=0;j--)
    {
        if(t[n][j]==true)
        {
            diff=range-2*j;
            break;
        }
    }
    return diff;
}

int main()
{
    int a[]={1,60,21,5};
    int n=sizeof(a)/sizeof(a[0]);
    int range=0;
    for(int i=0;i<n;i++)
    {
        range+=a[i];
    }
    std:: cout<<min_sss_dif;
    return 0;
}
