#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {

        int k;
        cin >> k;
        int c = 0;
        int num = 1;
        while (c < k) {
            if (num % 3 != 0 && num % 10 != 3) {
                c++;
                if (c == k) {
                    cout << num << endl;
                }
            }
            num++;
        }
    }
}