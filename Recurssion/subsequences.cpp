// Find subsequences using recursion
#include <bits/stdc++.h>
using namespace std;

void printSubsequences(int index, vector<int>& arr, vector<int>& current) {
    // Base case: if index reaches end
    if (index == arr.size()) {
        if (current.empty()) {
            cout << "{}"; // empty subsequence
        } else {
            
            for(int i=0;i<current.size();i++){
            	
            	cout<<current[i]<<" ";
			}
        }
        cout << "\n";
        return;
    }

    // Pick the element
    current.push_back(arr[index]);
    printSubsequences(index + 1, arr, current);

    // Not pick the element
    current.pop_back();
    printSubsequences(index + 1, arr, current);
}

int main() {
    int n;
    cout << "Enter the length of the sequence: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> current;
    cout << "Subsequences are:\n";
    printSubsequences(0, arr, current);

    return 0;
}

