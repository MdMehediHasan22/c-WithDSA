#include <iostream>
#include <vector>
#include <queue>
using namespace std;

string assign_command_chain(int N, vector<int>& a) {
    vector<vector<int>> graph(N);
    vector<int> outgoing_count(N, 0);
    vector<int> incoming_count(N, 0);
    queue<int> needs_outgoing;

    // Initialize outgoing_count and needs_outgoing queue
    for (int i = 0; i < N; ++i) {
        outgoing_count[i] = a[i];
        if (a[i] > N - 1) {
            return "-1"; // Impossible to satisfy the constraints
        }
        for (int j = 0; j < a[i]; ++j) {
            needs_outgoing.push(i);
        }
    }

    // Build the graph
    while (!needs_outgoing.empty()) {
        int i = needs_outgoing.front();
        needs_outgoing.pop();

        // Find a suitable target for outgoing edge from i
        for (int j = 0; j < N && outgoing_count[i] > 0; ++j) {
            if (i != j && incoming_count[j] < a[j]) {
                graph[i].push_back(j);
                outgoing_count[i]--;
                incoming_count[j]++;
                if (incoming_count[j] == a[j]) {
                    needs_outgoing.push(j);
                }
            }
        }

        // If we couldn't satisfy outgoing_count[i], it's impossible
        if (outgoing_count[i] > 0) {
            return "-1";
        }
    }

    // Check if all incoming requirements are met
    for (int i = 0; i < N; ++i) {
        if (incoming_count[i] != a[i]) {
            return "-1";
        }
    }

    // Construct the output
    string result;
    int num_edges = 0;
    for (int i = 0; i < N; ++i) {
        for (int j : graph[i]) {
            result += to_string(i + 1) + " " + to_string(j + 1) + "\n";
            num_edges++;
        }
    }
    result = to_string(num_edges) + "\n" + result;

    return result;
}

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; ++i) {
        cin >> a[i];
    }

    // Call the function and print the result
    string result = assign_command_chain(N, a);
    cout << result;

    return 0;
}
