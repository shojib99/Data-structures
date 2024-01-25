#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1="Data Structure";
    string s2=s1.substr(6,10);
    string s3="Lab";
    string mrg=s2+" "+s3;
    string s4=mrg;
    cout<<"s2:"<<s2<<endl;
    cout<<"s4:"<<s4<<endl;
    string newSubs =s4.substr(9,4);
    cout<<newSubs<<endl;
    string s5="Theory";
    newSubs.replace(0,5,s5);
    cout<<newSubs<<endl;

    return 0;
}
