/*
* Course: Competitive Programming Sessional (CCE-2310)
* Assignment: Codeforces ICPC Assiut University Community
* Problem ID: R
* Author: Sultana Jahan Tahmina (ID:E243419)
* Language/Version: GNU G++20 13.2 (64 bit, winlibs)
* Codeforces Profile: https://codeforces.com/profile/hscsultana22
* Date: 2025-12-06
* Statement: 
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R
*/



#include <iostream>
using namespace std;

int main() {
    int N, M;

    while (cin >> N >> M) {
        if (N <= 0 || M <= 0) break;

        int sum = 0;

        if (N > M) swap(N, M);  // make N the smaller one

        for (int i = N; i <= M; i++) {
            cout << i << " ";
            sum += i;
        }

        cout << "sum =" << sum << "\n";
    }

    return 0;
}
