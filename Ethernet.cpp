#include <iostream>
#include <iomanip>
using namespace std;

double calculateProbability(int n, int m) {
    // Edge case: if m > n, it's impossible
    if (m > n) return 0.0;
    
    // Initialize DP table
    double dp[n + 1][n + 1];
    dp[0][0] = 1.0;
    
    // Process each cable
    for (int k = 1; k <= n; ++k) {
        for (int c = 0; c <= k; ++c) {
            if (k == 1 && c == 1) {
                dp[k][c] = dp[k - 1][c - 1] * m / k;
            } else if (k - c <= m) {
                dp[k][c] = dp[k - 1][c] * (k - m) / k;
            } else {
                dp[k][c] = dp[k - 1][c] * (k - m) / k + dp[k - 1][c - 1] * m / k;
            }
        }
    }
    
    // Probability that the nth cable is in the nth port
    if (n - m < 0 || n - m > n) return 0.0;
    return dp[n][n - m];
}

int main() {
    int n, m;
    cin >> n >> m;
    
    // Calculate the probability
    double probability = calculateProbability(n, m);
    
    // Output the result formatted to 8 decimal places
    cout << fixed << setprecision(8) << probability << endl;
    
    return 0;
}

