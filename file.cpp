#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num;
	cin>>num;
	cout<<num*4<<endl;
	int cp = 20;
	for(int i = 0;i < 10;i++)
	{
		for(int j = i;j < cp-i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}