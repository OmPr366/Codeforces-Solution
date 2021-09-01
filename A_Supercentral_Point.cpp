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
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

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

void chll_suru_ho_ja(){
    //Code Here
    int n;
    in n;
    int cor[n];
    int cor1[n];
    
    int r[n]={0},l[n]={0},t[n]={0},b[n]={0};
    for (int i = 0; i < n; i++)
    {
        in cor[i];
        in cor1[i];
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (cor[i]==cor[j] && cor1[i]>cor1[j])
            {
                b[i]++;
            }
            else if (cor[i]==cor[j] && cor1[i]<cor1[j])
            {
                t[i]++;
            }
            else if (cor[i]>cor[j] && cor1[i]==cor1[j])
            {
                l[i]++;
            }
            else if (cor[i]<cor[j] && cor1[i]==cor1[j])
            {
                r[i]++;
            }
            
        }
        
        
    }
    int count= 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i]>0 && t[i]>0 && l[i]>0 && r[i]>0)
        {
            count++;
        }
        
    }
    out count << nline;
    
    
    
}

/*<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Test Cases >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/



int main()
{
#ifndef OmPr
    // freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
    fastio();
    ll T = 1;
    // cin >> T;
    
    while(T--)
    {
        chll_suru_ho_ja();
    }
    return 0;
}

