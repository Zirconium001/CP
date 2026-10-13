#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int i,j;
    cin>>s;
    for (i=0;i<s.length()-1;i++) {
        for (j=0;j<s.length()-1;j++) {
            if (s[j] > s[j+2]) {
                if (s[j] == 43) {
                    continue;
                } else
                    swap(s[j], s[j+2]);
            }
        }
    }
    for (i=0;i<s.length();i++) {
        cout<<s[i];
    }
    return 0;
}
