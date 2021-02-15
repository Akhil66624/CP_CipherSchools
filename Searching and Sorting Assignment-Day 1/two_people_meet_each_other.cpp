#include<bits/stdc++.h>
using namespace std;
 int main()
 {
 	/* code */
 	long long int x1=0,x2=0,v1=0,v2=0,relDistance=0,relSpeed=0;
 	cout<<"Enter the positions and their velocities : ";
 	cin>>x1>>x2>>v1>>v2;
    relDistance=abs(x1-x2);
    relSpeed=abs(v1-v2);
    if((x1<x2) && (v1<=v2)) //when x1 is before x2 and it's speed is less than x2(v1<=v2)
    {
    	cout<<"No"<<endl;
    	exit(0);
    }
    if((x1>x2) && (v1>=v2))//when x1 is ahead x2 and it's speed is greater than x2(v1<=v2)
    {
    	cout<<"No"<<endl;
    	exit(0);
    }
    if((relDistance % relSpeed)==0)/*when the relative distance is divisible by relative speed
    then they meet*/
    {
    	cout<<"Yes"<<endl;
    }
    else//if not divisible then they don't meet
    {
    	cout<<"No"<<endl;
    }
 	return 0;
 }
