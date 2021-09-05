#include <bits/stdc++.h>
using namespace std;
vector<string> weightedUniformStrings(string s, vector<int> queries) {
    unordered_set<int> st;
    vector<string> vs;
    int sum=0;
            for(int i=1;i<s.size();i++)
            {
                sum+=((s[i-1]-'a')+1);
                st.insert(sum);
                if(s[i]!=s[i-1])
                        sum=0;        
            }
            st.insert(sum+(s[s.size()-1]-'a')+1);
            for(int i=0;i<queries.size();i++)
              if(st.find(queries[i])!=st.end())
                 vs.push_back("Yes");
             else
                 vs.push_back("No");
    return(vs);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int n;
    cin>>s>>n;
    vector<int> queries(n);
    for (int i = 0; i <n; i++) 
        cin>>queries[i];
    vector<string> result = weightedUniformStrings(s, queries);
    for (size_t i = 0; i < result.size(); i++)
        cout << result[i]<<"\n";
    return 0;
}
