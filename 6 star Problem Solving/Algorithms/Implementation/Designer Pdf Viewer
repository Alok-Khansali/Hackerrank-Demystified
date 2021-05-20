#include <bits/stdc++.h>
using namespace std;
int designerPdfViewer(vector<int> v, string st) {
    int t=0;
    for(int i=0;i<st.size();i++)
         if(v[st[i]-'a']>t)
            t=v[st[i]-'a'];
    t=t*st.size();
    return(t);
}
int main()
{
    vector<int> h(26);
    for (int i = 0; i < 26; i++) 
           cin>>h[i];
    string word;
    cin>>word;
    int result = designerPdfViewer(h,word);
    cout << result << "\n";
    return 0;
}
