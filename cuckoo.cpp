#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int countDivisors(int N, int T) {
    int target = T - 1;
    int count = 0;

   
    if (target == 0) {
        return N;
    }
    
  
    for (int i = 1; i * i <= target; ++i) {
        if (target % i == 0) {
            
            if (i <= N) {
                ++count;
            }
           
            if (i != target / i && target / i <= N) {
                ++count;
            }
        }
    }

    return count;
}

int main() {
    int Q;
    cin >> Q;
    
    vector<pair<int, int>> testCases(Q);
    for (int i = 0; i < Q; ++i) {
        int N, T;
        cin >> N >> T;
        testCases[i] = {N, T};
    }
    
    for (const auto &testCase : testCases) {
        int N = testCase.first;
        int T = testCase.second;
        cout << countDivisors(N, T) << endl;
    }
    
    return 0;
}
