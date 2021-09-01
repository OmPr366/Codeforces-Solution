    #include <bits/stdc++.h>
    #define ll long long int
    using namespace std;
     
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string s1;
        cin >> s1;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] != 'a' && s1[i] != 'e' && s1[i] != 'i' && s1[i] != 'o' && s1[i] != 'u'&&s1[i] != 'A' && s1[i]&& s1[i] != 'y'&& s1[i] != 'Y'&& != 'E' && s1[i] != 'I' && s1[i] != 'O' && s1[i] != 'U')
            {
                s1[i] = tolower(s1[i]);
                cout<<"."<<s1[i];
                
            }
        }
     
        
        
     
        return 0;
    }