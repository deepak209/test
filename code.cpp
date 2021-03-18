#include<bits/stdc++.h>
using namespace std;
#define ll long long;
#define fastIO ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define cases(t) int t; cin>>t; while( t-- )
#define endl "\n"
#define debug(x) cerr<<#x<<" is "<<x<<endl
#define fo(i,n) for( i=0;i<n;i++)
#define largest 1e20

typedef vector<int> VI;

// int mem[100000];

void function(){
    cout<<"";  
}

void solve()
{///
    string s;
    cin>>s;
    bool isPossible=true;
    
    for(int i=s.length()-1;i>0 && isPossible;i--)
    {
        if(s[i]=='0'&& s[i-1]!='0')
        {
            continue;
        }
        else if(s[i]=='0'&& s[i-1]=='0')
        {
            while(i>0)
            {
                if(s[i]=='1'&&s[i-1]=='1')
                {
                    isPossible=false;
                    break;
                }
                i--;
            }

        }
    } 
    isPossible ? cout<<"YES"<<endl : cout<<"NO"<<endl;

}

int main()
{
    fastIO; 
    cases(t)
        solve(); 

}


