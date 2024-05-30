#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int m;
        scanf("%d",&m);
        char s[105][105]={};
        for(int i=0;i<m;i++) scanf("%s",s[i]);
        for(int i=0;i<m-1;i++)
        {
            char t1[105]={},t2[105]={};
            for(int j=i;j<m;j++)
            {
                strcpy(t1,s[i]);
                strcat(t1,s[j]);
                strcpy(t2,s[j]);
                strcat(t2,s[i]);
                if(strcmp(t1,t2)<0)
                {
                    strcpy(t1,s[i]);
                    strcpy(s[i],s[j]);
                    strcpy(s[j],t1);
                }
            }
        }
        for(int i=0;i<m;i++) printf("%s",s[i]);
        printf("\n");
    }
}
