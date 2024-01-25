#include <bits/stdc++.h>
using namespace std;

void print(string txt, string pat)
{
    int found =txt.find(pat);
    while (found !=string::npos)
    {
        cout<< "pattern found index " <<found<<endl;
        found =txt.find(pat, found+1);

    }
}

int main()
{
    string txt = "aaaa" , pat = "aa";
    print(txt, pat);

    return 0;
}
