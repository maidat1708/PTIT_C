#include<bits/stdc++.h>
using namespace std;
int main ()
{
  long long a,b,c;
  scanf ("%lld%lld%lld",&a,&b,&c);
  long long n=(c-b)%(a-b);
  long long m=(c-b)/(a-b);
  if (n==0) printf ("%lld",m);
  else printf ("%lld",m+1);
}
