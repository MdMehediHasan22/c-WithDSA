#include <iostream>
#include <vector>
using namespace std;

// Function to construct the command chain graph
string construct_command_chain(int N, vector<int>& a) {
    // Check if it's possible to create the command chain
    for (int i = 0; i < N; ++i) {
        if (a[i] > N - 1) {
            return "-1"; // Impossible to satisfy the conditions
        }
    }

    // Construct the output
    string result = to_string(N - 1) + "\n"; // Number of edges
    for (int i = 1; i < N; ++i) {
        result += "1 " + to_string(i + 1) + "\n";
    }

    return result;
}

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    // Call the function to construct the command chain
    string result = construct_command_chain(N, a);

    // Output the result
    cout << result;

    return 0;
}
