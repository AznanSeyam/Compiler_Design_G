#include<bits/stdc++.h>
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
using namespace std;
int main(){speed;long long test;cin>>test;while(test--){
	string s;
	vector<string>ov;
	vector<string>cons;
	vector<string>var;
	cin>>s;
	string op="+-/*=%<>!";
	string fixed = "0123456789.";
	string variable="abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i <s.size(); i++)
	{
		for (int j = 0; j <op.size(); j++)
		{
			if(s[i]==op[j])
			{
				string temp1;
				temp1=s[i];
				ov.push_back(temp1);
			}
			if(s[i]==fixed[j])
			{
				string temp2;
				temp2=s[i];
				cons.push_back(temp2);
			}
			if(s[i]==variable[j])
			{
				string temp3;
				temp3=s[i];
				var.push_back(temp3);
			}
		}
	}
	cout<<"operator = ";
	for (int i = 0; i <ov.size(); i++)
	{
		cout<<ov[i];
	}
	cout<<"\n";
	cout<<"constant = ";
	for (int i = 0; i <cons.size(); i++)
	{
		cout<<cons[i];
	}
	cout<<"\n";
	cout<<"variable = ";
	for (int i = 0; i <var.size(); i++)
	{
		cout<<var[i];
	}
}return 0;}