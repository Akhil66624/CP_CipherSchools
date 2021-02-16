#include <bits/stdc++.h>
using namespace std;

void generate_all_strings_recursive(string str,vector<string>& res,int start,int end) 
{
    if (start>=end) 
    {
        res.push_back(str);
    }
    else 
    {
        for (int i=start;i<=end;i++) 
        {
            swap(str[i],str[start]);
            generate_all_strings_recursive(str,res,start+1,end);
            swap(str[i],str[start]);
        }
    }
}

vector<string> generate_all_strings(string str) 
{
    vector<string> res;
    generate_all_strings_recursive(str, res, 0,str.size() - 1); 
    return res;
}

int main()
{
	string s;
	cout<<"Enter the string :";
	cin>>s;
    vector<string> result=generate_all_strings(s);
    for(string str:result) 
    {
        cout<<str<<endl;
    }
}
