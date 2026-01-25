/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: J
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-12-06
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        bool prime = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }

        if (prime)
            cout << i << " ";
    }

    return 0;
}
