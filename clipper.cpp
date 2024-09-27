#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to check if it's possible to encrypt information in the image
void encrypt_information(int n, int m, vector<int>& image_bytes, string& secret_info) {
    vector<int> secret_info_bits;
    
    // Convert secret_info from string to vector of integers (0 or 1)
    for (char ch : secret_info) {
        int byte = ch - '0';
        for (int i = 7; i >= 0; --i) {
            secret_info_bits.push_back((byte >> i) & 1);
        }
    }
    
    // Iterate over each possible starting byte in the image
    for (int start_byte_index = 0; start_byte_index < n; ++start_byte_index) {
        int current_index = start_byte_index;
        int modified_bits = 0;
        bool possible = true;
        
        // Try to match secret_info_bits with image_bytes starting from current_index
        for (int bit : secret_info_bits) {
            if (current_index >= n) {
                possible = false;
                break;
            }
            
            // Extract LSB of image_bytes[current_index]
            int lsb = image_bytes[current_index] & 1;
            
            // Check if we need to modify this bit
            if (lsb != bit) {
                ++modified_bits;
            }
            
            // Move to the next bit in the image
            ++current_index;
        }
        
        // If we managed to match all bits of secret_info_bits, print the result
        if (possible) {
            cout << "Yes" << endl;
            cout << modified_bits << " " << start_byte_index + 1 << endl;
            return;
        }
    }
    
    // If no valid scheme found
    cout << "No" << endl;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> image_bytes(n);
    for (int i = 0; i < n; ++i) {
        cin >> image_bytes[i];
    }
    
    string secret_info;
    cin.ignore(); // Ignore the newline after reading n and m
    getline(cin, secret_info);
    
    // Ensure that secret_info has exactly m bytes
    if (secret_info.size() != m) {
        cerr << "Error: Secret information size mismatch!" << endl;
        return 1;
    }
    
    // Process the encryption
    encrypt_information(n, m * 8, image_bytes, secret_info);
    
    return 0;
}
