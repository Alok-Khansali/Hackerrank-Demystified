//Better and Cool Approach
#include<bits/stdc++.h>
using namespace std;
int main(){

    long T,b,w,x,y,z,ans;
    cin >> T;
    for(int i = 1; i <= T; i++){
        cin >> b >> w>> x >> y >> z;
        ans = (b * min(x,y+z)) + (w * min(y,x+z));
        cout << ans <<’\n’;
    }
    return 0;
}
/*
#include <bits/stdc++.h>              //NAIVE
using namespace std;
long taumBday(long b, long w, long bc, long wc, long z) {
    if(bc>wc+z)
      return((w+b)*wc+z*b);
    else if(wc>bc+z)
    return((w+b)*bc+z*w);
       return(bc*b+wc*w);
}
int main()
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        long b,w,bc,wc,z;
        cin>>b>>w>>bc>>wc>>z;
        long result = taumBday(b, w, bc, wc, z);
        cout << result << "\n";
    }
    return 0;
}  
*/
