#include<bits/stdc++.h>
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
using namespace std;
	
int main(){speed;long long test;cin>>test;while(test--){
	
	string s;
	vector<string>v;
	cin>>s;
	string op="+-/*=%";
	for (int i = 0; i <s.size(); i++)
	{
		for (int j = 0; j <op.size(); j++)
		{
			if(s[i]==op[j])
			{
				string temp;
				temp=s[i];
				v.push_back(temp);
			}
		}
	}
	for (int i = 0; i <v.size(); i++)
	{
		cout<<v[i];
	}
	
}return 0;}