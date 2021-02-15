#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,i=0;//n=size of array
	cout<<"Enter the size of the array : ";
	cin>>n;
	long long int arr[n];
	cout<<"Enter the array elements :";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int max_index=0,freq=1;//assuming 1st index as major element & freq =1
	for(i=1;i<n;i++)// this loop finds the majority element
	{
		if(arr[max_index]==arr[i])//when quals the 1st element incriments freq
		{
			freq++;
		}
		else//when element is diff, then decriments freq
		{
			freq--;
		}
		if(freq==0)// when freq becomes zero, it describes that there is no major element till that index
		{          //and assumes next element as major and keeps track of freq
			freq=1;
			max_index=i;
		}
	}
	freq=0;
	for(i=0;i<n;i++)//this loop actually finds the freq of majority elment
	{
		if(arr[i]==arr[max_index])
		{
			freq++;
		}
	}
	if(freq>(n/2))// when freq more than (n/2), then it is major element
	{
		cout<<"Majority element is "<<arr[max_index];
	}
	else// else not
	{
		cout<<"There is no Majority element in the array";
	}
}
