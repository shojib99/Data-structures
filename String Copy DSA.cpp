#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline (cin,s);
    char news[20];
    s.copy(news,4,2);
    news[4]='\0';
    cout<<news;

    return 0;
}
