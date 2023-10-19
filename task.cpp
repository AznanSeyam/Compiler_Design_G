#include<bits/stdc++.h>
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
using namespace std;

int main()
{	
	vector<string>v;
	string Text;
	ifstream MyreadFile("hello.text");
	string op="+-/*=%";
	while ( getline (MyreadFile, Text))
	{
		for(int i=0;i<Text.size(); i++)
			
	{
		for(int j=0;j<op.size();j++)
		{
			if(Text[i]==op[j])
			{
				string temp;
				temp=Text[i];
				v.push_back(temp);
			}
		}
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
	
		MyreadFile.close();
	}

}