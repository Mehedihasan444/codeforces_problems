#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
    cin>>s;
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
       if (s[i]!='+')
       {
        cout<<s[i];
       }
       if (i!=s.size()-1 && s[i]!='+')
       {
        cout<<"+";
       }
       
       
    }
    
    // cout<<s<<endl;
    return 0;
}