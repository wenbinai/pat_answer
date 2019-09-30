#include <bits/stdc++.h>

using namespace std;

struct stu
{
	char str[20];
	int a;
	int b;
}s[1005];
int arr[1005];
int main()
{
	//freopen("in.txt","r",stdin);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		// cin>>s[n].str;
		scanf("%s%d%d",s[n].str,&s[n].a,&s[n].b);
	}
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
		cin>>arr[i];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(s[j].a==arr[i]){
				printf("%s%d\n",s[j].str,s[j].b);
			}
		}
	}
	return 0;
}