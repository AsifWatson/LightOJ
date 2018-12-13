#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,s1[26],s2[26],a;
    char str1[1000],str2[1000];
    scanf("%d",&t);
    getchar();
    for(int i=1;i<=t;i++)
    {
        a=0;
        gets(str1);
        gets(str2);
        for(int j=0;j<26;j++)
        {
            s1[j]=0;
            s2[j]=0;
        }
        for(int j=0;j<strlen(str1);j++)
        {
            if(str1[j]>='A' && str1[j]<='Z')
            {
                s1[str1[j]-'A']++;
            }
            if(str1[j]>='a' && str1[j]<='z')
            {
                s1[str1[j]-'a']++;
            }
        }
        for(int j=0;j<strlen(str2);j++)
        {
            if(str2[j]>='A' && str2[j]<='Z')
            {
                s2[str2[j]-'A']++;
            }
            if(str2[j]>='a' && str2[j]<='z')
            {
                s2[str2[j]-'a']++;
            }
        }

        for(int j=0;j<26;j++)
        {
            if(s1[j]!=s2[j])
            {
                a=1;
                break;
            }
        }
        if(a==0)
            printf("Case %d: Yes\n",i);
        if(a==1)
            printf("Case %d: No\n",i);
    }
    return 0;
}
