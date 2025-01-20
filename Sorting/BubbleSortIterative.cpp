#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;   // to keep track if any element is out of position
  
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<int> a(n)
    for(int i = 0; i < n; i++) cin >> a[i];
    
    bubbleSort(arr);
    
    for(auto i: arr) cout << i <<" ";
    
    return 0;
}
