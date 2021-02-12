#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define ll long long
#define PI 3.1415926535897932384626
#define pb push_back
#define mp make_pair
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;


int main() 
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) 
    {
        float a,b;
        cin>>a;
        scanf("%.2f",&b);
        if(a>b)
        printf("%0.2f",b);
        else if(((int)a%5)!=0)
        printf("%0.2f",b);
        else
        printf("%0.2f",b-a-0.5);
    }
    return 0;
}