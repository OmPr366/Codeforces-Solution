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

// /<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Solution >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>/

void chll_suru_ho_ja()
{
    //Code Here
    int t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string str;
    cin >> str;
    int x = sx - ex;
    int y = sy - ey;

    int e = 1;
    int s = 1;
    int w = 1;
    int n = 1;

    if (x > 0)
    {
        w = w * x;
        w--;
    }
    else if (x < 0)
    {
        e *= abs(x) ;
        e--;
    }
    else
    {
        e = 0, w = 0;
    }

    if (y > 0)
    {
        s = abs(s * y) ;
        s--;
    }
    else if (y < 0)
    {
        n = abs(n * y);
        n--;
    }
    else
    {
        n = 0, s = 0;
    }
    debug(s);
    debug(n);
    debug(e);
    debug(w);
    vector<char> v1;
    while (s>0)
    {
        s--;
        v1.push_back('s');
    }
    while (n>0)
    {
        n--;
        v1.push_back('n');
    }
    while (e>0)
    {
        e--;
        v1.push_back('e');
    }
    while (w>0)
    {
        w--;
        v1.push_back('w');
    }

    int size = v1.size();
    int check = 0, k = 0;

    for (int i = 0; i < t; i++)
    {
        if (v1[k] == str[i])
        {
            check++;
            k++;
            if (k >=size)
            {
                cout << check;
                return;
            }
        }
    }
    cout << "-1";
}

// /<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Test Cases >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>/

int main()
{
#ifndef OmPr
    ///freopen("output.txt", "w", stdout);
    freopen("debug.txt", "w", stderr);
#endif
    fastio();
    ll T = 1;
    // cin >> T;
    //

    while (T--)
    {
        chll_suru_ho_ja();
    }
    return 0;
}