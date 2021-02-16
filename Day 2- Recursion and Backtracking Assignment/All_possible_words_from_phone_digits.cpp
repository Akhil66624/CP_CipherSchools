#include <bits/stdc++.h>
using namespace std;

vector<string> keypad ={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void possiblecomb_recursive(string digits, vector<string>& result, int index, string resSoFar) 
{
    if (index == digits.size()) 
	{
        result.push_back(resSoFar);
        return;
    } 

    string possibleMoves = keypad[digits[index] - '0'];
    for (int i = 0; i < possibleMoves.size(); i++)
	{
        resSoFar.push_back(possibleMoves[i]);
        possiblecomb_recursive(digits, result, index + 1, resSoFar);
        resSoFar.pop_back();
    }

}
vector<string> possiblecomb(string digits) 
{
    if (digits.empty()) {
        return vector<string>{};
    }
    vector<string> result;
    possiblecomb_recursive(digits, result, 0, "");
    return result;
}
int main()
{
	string str;
	vector<string> res;
	cout<<"Enter the sequence of numbers :";
	cin>>str;
	res=possiblecomb(str);\
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i]<<endl;
	}
}
