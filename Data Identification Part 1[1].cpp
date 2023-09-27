#include<bits/stdc++.h>
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
using namespace std;
	
int main(){speed;long long test;cin>>test;while(test--){
	
	string s;
	vector<int>v;
	string fixed = "0123456789.";
	cin>>s;
	for (int i = 0; i <s.size(); i++)
	{
		for (int j = 0; j <fixed.size(); j++)
		{
			if(s[i]==fixed[j])
			{	
				v.push_back(0);
			}
		}
	}
	if(v.size()==s.size()) cout<<"NUMERIC";
	else cout<<"NOT NUMERIC";
	
}return 0;}