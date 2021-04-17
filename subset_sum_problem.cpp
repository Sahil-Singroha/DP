#include<bits/stdc++.h>
using namespace std;

bool subsetsum(int a[],int n,int sum)
{
    bool t[n+1][sum+1];
    for(int i=0;i<n+1;i++)
      for(int j=0;j<sum+1;j++)
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
      for(int j=1;j<sum+1;j++)
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
            return t[n][sum];
}

int main()
{
    int a[]={2,3,7,8,10};
    int sum=11;
    int n=sizeof(a)/sizeof(a[0]);
   // cout<<"answer is:"<<subsetsum(a,n,sum);
    if(subsetsum(a,n,sum)==true)
    {
        cout<<"available";
    }
    else
    {
        cout<<"unavailable";
    }
    return 0;
}
