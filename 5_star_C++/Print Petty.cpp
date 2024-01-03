#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
                    //Using cout manipulators
        cout<<hex<<left<<showbase<<nouppercase<<(long)A<<"\n";
        cout<<dec<<right<<setw(15)<<setfill('_')<<showpos<<fixed<<setprecision(2)<<B<<"\n";
        cout<<scientific<<uppercase<<noshowpos<<setprecision(9)<<C<<"\n";
    
	}
	return 0;

}
