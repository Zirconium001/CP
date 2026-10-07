
//dirty code (rickshawala code)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, j;
    cin>>n;
    int arr[n][3];
    for (i=0;i<n;i++) {
        for (j=0;j<3;j++) {
            cin>>arr[i][j];
        }
    }
    int count=0, sum=0;
    for (i=0;i<n;i++) {
        for (j=0;j<3;j++) {
            sum=sum+arr[i][j];
        }
        if (sum>=2) {
            count++;
        }
        sum=0;
    }
    cout<<count;
    return 0;
}


//time-space complexity
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2)
            count++;
    }
    cout << count;
    return 0;
}
