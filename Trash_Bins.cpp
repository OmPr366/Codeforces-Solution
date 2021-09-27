/*~~~~~~~~~OmPr~~~~~~~~~~~~~ */
#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define nline "\n"
#define in cin >>
#define out cout <<  
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define ll long long
#define ld long double
#define sll set<ll>
#define vll vector<ll>
#define mll map<ll, ll>
#define pll pair<ll, ll>
#define gri greater<long long>()
#define set_bits __builtin_popcountll
#define fastio() ios_base::sync_with_stdio(false);cout.tie(NULL);

#ifndef OmPr
#define debug(x) cerr << #x <<" = "; _print(x); cerr << " ";
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(string t) {cerr << t;}

template <class T> void _print(set <T> v);
template <class T> void _print(vector <T> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Solution >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>/

void chll_suru_ho_ja(){
    //Code Here
    ll check1 = 0, check2 = 0;
        ll left = 0, right = 0;
        static int check=1;
        ll n;
        cin >> n;
        string s;
        cin >> s;

        int leftArr[n] ;

        int rightArr[n];
        for (int i = 0; i < n; i++)
        {
            rightArr[i]= -1;
        }
        
        ll count = 0;
        int one = 0;
        for (int i = 0; i < n; i++)
        {
            count++;
            if (s[i]=='1')
            {
                one = 1;
                leftArr[i]=0;
                count = 0;
            } else if(one==1) 
            {
                
               leftArr[i]=count;
            }else{
                leftArr[i]=n;
            }
            cout<<leftArr[i]<<" ";
            
        }
        // cout<<nline;
        count = 0;
        one = 0;
        for (int i = n-1; i >=0; i--)
        {
            count++;
            if (s[i]=='1')
            {
                one =1;
                rightArr[i]=0;
                count = 0;
            } else if (one==1)
            {
                rightArr[i]=count;
            }
            
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout<<rightArr[i]<<" ";
        // }
        
        
        int ans = 0;
        ans+= rightArr[0];
        for (int i = 1; i < n-1; i++)
        {
            if (rightArr[i]==-1)
            {
                ans+= leftArr[i];
            }else
            ans+= min(leftArr[i],rightArr[i]);
        }
        ans+= leftArr[n-1];
        
 

        cout << "Case #" << check++ << ": " << ans << nline;
    
}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Test Cases >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>/



int main()
{
#ifndef OmPr
    ///freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
    fastio();
    ll T = 1;
    cin >> T;
    
    while(T--)
    {
        chll_suru_ho_ja();
    }
    return 0;
}