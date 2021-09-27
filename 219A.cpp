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
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (s.length() <= 2)
    {
        cout << s;
        return;
    }
    int arr[26] = {0};
    string ans = "";
    if (s.length() % 2 != 0)
    {
        for (int i = 0; i < s.length(); i++)
        {
            arr[s[i] - 97]++;
            // cout<<" "<<arr[s[i]-97];
        }
        int flag = 0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] > 0)
            {
                
                flag++;
            }
            if (flag>1)
            {
                goto p;
            }
            
        }
        cout<<s;
        return;
        
        
    }
p:
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 97]++;
        // cout<<" "<<arr[s[i]-97];
    }
    int flag = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] % n != 0)
        {
            flag++;
            cout << "-1";
            return;
        }
    }
    if (flag == 1)
    {
        cout << s;
        return;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            int x = arr[i] / n;
            for (int z = 0; z < x; z++)
            {
                char x = 'a' + i;

                ans += x;
            }
        }
    }
    // for (int i = 0; i < 26; i++)
    // {
    //     int x = arr[i]/n;
    //     for (int i = 0; i < x; i++)
    //     {
    //         ans+=arr[i];
    //     }

    // }
    for (int i = 0; i < n; i++)
    {
        cout << ans;
    }

    // 6
    // sssfsffssfff
    // sssfffsssfff

    // 2
    // aazz
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
    // cin >> T;

    while (T--)
    {
        chll_suru_ho_ja();
    }
    return 0;
}