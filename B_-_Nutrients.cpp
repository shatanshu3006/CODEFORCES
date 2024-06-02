#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    
    // Read number of foods and number of nutrients
    cin >> N >> M;
    
    // Read the required amounts of each nutrient
    vector<int> A(M);
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }
    
    // Read the nutrient quantities in each food
    vector<vector<int> > X(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> X[i][j];
        }
    }
    
    // Calculate the total intake of each nutrient
    vector<int> total(M, 0);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            total[j] += X[i][j];
        }
    }
    
    // Check if the goal is met for all nutrients
    bool goal_met = true;
    for (int j = 0; j < M; ++j) {
        if (total[j] < A[j]) {
            goal_met = false;
            break;
        }
    }
    
    // Output the result
    if (goal_met) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
