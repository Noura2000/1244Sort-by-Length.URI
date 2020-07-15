#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	multimap<int, string,greater<int>>mp;
	int n,size;
	string s,in="";
	cin >> n;
	getline(cin, s);
	while (n--)
	{
		getline(cin, s);
		for (int i = 0; i < s.size(); i++)
		{
			in += s[i];
			if (s[i+1] == ' '||i==s.size()-1)
			{
				if (s[i + 1] == ' ') i++;
				size = in.size();
				mp.insert(make_pair(size, in));
				in = "";
			}
		}
		auto i = mp.begin();
		cout << i->second;
		i++;
		for (; i != mp.end(); i++)
		{
			cout << " " << i->second;
		}
		cout << endl;
		mp.clear();
		in = "";
	}
	return 0;
}