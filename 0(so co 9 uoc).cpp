#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N=31625;
    bool check[31625];
    for (int i=2;i<=N;i++)
    {
        check[i]=1;
    }
    for (int i=2;i<=N;i++)
    {
        if (check[i])
        {
            for (int j=2*i;j<=N;j+=i)
            {
                check[j]=0;
            }
        }
    }
    vector<long long> v;
    for(int i=2;i<=N;i++) if(check[i]) v.push_back(i*i);
    int count=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>n) break;
        if(pow(v[i],4)<=n) count++;
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]*v[j]<=n) count++;
            else break;
        }
    }
    printf("%d",count);
}
