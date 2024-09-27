#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int max_permutation_difference(int n) {
   
    string digits = to_string(n);
    
    sort(digits.begin(), digits.end());
    int smallest_perm = stoi(digits);
    
    sort(digits.rbegin(), digits.rend());
    int largest_perm = stoi(digits);
    
    int difference = largest_perm - smallest_perm;
    
    return difference;
}

int main() {
    int n;
    cin >> n;
    cout << max_permutation_difference(n) << endl;
    return 0;
}
