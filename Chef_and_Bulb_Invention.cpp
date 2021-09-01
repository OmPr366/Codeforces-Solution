/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~OmPr~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
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

/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Solution >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

int chll_suru_ho_ja(){
    //Code Here
    int n,p,k, count = 0;
    in n>>p>>k;

    int arr[n], frq[n]={0};
    int x = p%k, pos= 0;
    for (int i = x; i < n; i+k)
    {
        
        if (i%k == x)
        {
            pos++;
            
        }
        if (i==p)
        {
            break;
        }
        

    

    }

    int diff = max(p,k) - min(k,p);
    
    
    
    // 10 p=5 5

    // 0 5 -> 0    0 5 -> 0
    // 1 5 -> 1
    // 2 5 -> 2
    // 3 5 -> 3
    // 4 5 -> 4
    // 5 5 -> 0
    // 6 5 -> 1
    // 7 5 -> 2  7-5 =2  2% 5 
    // 8 5 -> 3
    // 9 5 -> 4
    return 0;
}

/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Test Cases >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/



int main()
{
#ifndef OmPr
    ///freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
    fastio();
    ll T ;
    cin >> T;
    
    while(T--)
    {
        chll_suru_ho_ja();
    }
    return 0;
}