#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

// Function to count inversions using Merge Sort
ll merge_sort_and_count(vector<int>& arr, int left, int right) {
    if (left >= right) return 0;

    int mid = (left + right) / 2;
    ll count = 0;

    count += merge_sort_and_count(arr, left, mid);
    count += merge_sort_and_count(arr, mid + 1, right);

    // Merge step
    int i = left, j = mid + 1;
    vector<int> temp;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
            count += (mid - i + 1); // All elements from i to mid are greater than arr[j]
        }
    }

    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= right) temp.push_back(arr[j++]);

    for (int k = left; k <= right; ++k) arr[k] = temp[k - left];

    return count;
}

int main() {
    int T;
    cin >> T;
    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        int N, M, K;
        cin >> N >> M >> K;
        vector<pair<int, int> > highways(K);
        for (int i = 0; i < K; ++i) {
            cin >> highways[i].first >> highways[i].second;
        }

        // Sort by East city
        sort(highways.begin(), highways.end());

        // Extract West city sequence
        vector<int> westCities(K);
        for (int i = 0; i < K; ++i) {
            westCities[i] = highways[i].second;
        }

        // Count inversions in West city sequence
        ll crossings = merge_sort_and_count(westCities, 0, K - 1);

        cout << "Test case " << caseNum << ": " << crossings << "\n";
    }
    return 0;
}