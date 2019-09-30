#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	char ch;
	cin>>ch;
	int m;
	m=(n+1)/2;
	int j;
	j=(int)sqrt(m);
	//cout<<j<<end;
	int cnt=0;
	for(int i=j;i>0;i--)
	{
		int t=j-i;
		while(t){
			cout<<" ";
			t--;
		}
		for(int k=0;k<2*i-1;k++)
		{
			
			cout<<ch;
			cnt++;
		}
		cout<<endl;
	}
	for(int i=2;i<=j;i++)
	{
		int t=j-i;
		while(t){
			cout<<" ";
			t--;
		}
		for(int k=0;k<2*i-1;k++)
		{
			cout<<ch;
			cnt++;
		}
		cout<<endl;
	}
	if(cnt!=n)
		cout<<n-cnt;
	cout<<endl;
	return 0;
}	