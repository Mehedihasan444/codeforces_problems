#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin >> s;
int flag=0;
for(int i=0;i<s.length();i++){
    if (s[i] == 'H')
    {
        cout << "YES" << endl;
        flag=1;
        break;
    }
    else if (s[i] == 'Q')
    {
        cout << "YES" << endl;
        flag=1;
        break;
    }
    else if (s[i] == '9')
    {
        cout << "YES" << endl;
        flag=1;
        break;
    }


    
}
if (flag==0)
{
    cout << "NO" << endl;
}


    return 0;
}