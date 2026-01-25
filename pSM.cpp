/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: M
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-12-06
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
*/



#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    bool found = false;

    for (int i = A; i <= B; i++) {
        int n = i;
        while (n > 0) {
            int d = n % 10;
            if (d != 4 && d != 7) break;
            n /= 10;
        }
        if (n == 0) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) cout << -1;

    return 0;
}
