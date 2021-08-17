#include "codeblock.h"
using namespace std;

void setZeroes (vector<vector<int>> &matrix, int n ,int m){
    bool isCol = false;
    
    for (int i = 0; i < n; i++) {
            if (matrix[i][0] == 0) {
                isCol = true;
        }
        for (int j = 1; j < m; j++) {
        // If an element is zero, we set the first element of the corresponding row and column to 0
        if (matrix[i][j] == 0) {
            matrix[0][j] = 0;
            matrix[i][0] = 0;
        }
        }
    }

    // Iterate over the array once again and using the first row and first column, update the elements.
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
        if (matrix[i][0] == 0 || matrix[0][j] == 0) {
            matrix[i][j] = 0;
        }
        }
    }

    // See if the first row needs to be set to zero as well
    if (matrix[0][0] == 0) {
        for (int j = 0; j < m; j++) {
        matrix[0][j] = 0;
        }
    }
    if (isCol) {
        for (int i = 0; i < n; i++) {
        matrix[i][0] = 0;
        }
    }
}
int main()
{
    int n, m;
    cout << "Enter Dimensions of Matrix : ";
    cin >> n >> m;
    vector<vector<int>> mat = input(n,m);
    setZeroes(mat,n,m);
    print(mat);
    return 0;
}
// 3 4
// 0 1 2 0
// 3 4 5 2
// 1 3 1 5