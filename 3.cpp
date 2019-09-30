#include <bits/stdc++.h>

using namespace std;

const int N=1005;
int cnt[15];
char str[N];
int main()
{
	cin>>str;
	int n=strlen(str);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<10;j++)
		{
			if(str[i]-'0'==j)
				cnt[j]++;
		}
	}
	for(int j=0;j<10;j++)
	{
		if(cnt[j])
		{
			cout<<j<<":"<<cnt[j]<<endl;
		}
	}
	return 0;
}