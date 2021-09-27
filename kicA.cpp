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
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cout.tie(NULL);

#ifndef OmPr
#define debug(x)         \
    cerr << #x << " = "; \
    _print(x);           \
    cerr << " ";
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(ld t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(string t) { cerr << t; }

template <class T>
void _print(set<T> v);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Solution >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>/

void chll_suru_ho_ja()
{
    //Code Here
    static int yess = 1;
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    for (int i = 0; i < n; i++)
    {   int zero =0;
        int c = 0;
        for (int j = i; j < n; j++)
        {
            
            if (s[j] == '1')
            {
                if (j != i)
                {
                    /* code */
                    c++;
                }
                break;
            }
            if (j != i)
            {
                /* code */
                c++;
            }
        }
        
        
        int d = 0;

        for (int j = i; j >= 0; j--)
        {

            if (s[j] == '1')
            {
                if (j != i)
                {
                    /* code */
                    d++;
                }

                break;
            }
            if (j != i)
            {
                
                d++;
            }
        }
        debug(c);
        debug(d);
        
        int ans;
        if (i==n-1)
        {
             ans = max(c,d);
        }else if (i==0 && s[0]!='1')
        {
            ans = max(c,d);
        } else
        
         ans = min(c,d);
        
        
        debug(ans);
        count += ans;
        debug(count);
    }
    cout << "Case #" << yess++ << ": " << count << endl;
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

    while (T--)
    {
        chll_suru_ho_ja();
    }
    return 0;
}