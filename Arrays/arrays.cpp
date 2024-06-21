#include <iostream>

using namespace std;

int main(){
    // find greatest of numbers
    int totalNum;
    cout << "How many numbers do you want store?" << endl;
    cin >> totalNum;
    if(totalNum <= 0){
        cout << "Invalid input." << endl;
        return 0;
    }

    int arr[totalNum];
    int max;
    cout << "Enter " << totalNum << " numbers:" << endl;
    for (int i = 0; i < totalNum; i++){
        cin >> arr[i];
    }
    max = arr[0];
    for (int i = 1; i < totalNum; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << "Greatest number is  " << max << endl;

    // matrix addition using 2D array
    int m, n;
    cout << "Enter the row size:" << endl;
    cin >> m;
    cout << "Enter the column size:" << endl;
    cin >> n;
    if(!m && !n){
        cout << "Matrix size is 0" << endl;
        return 0;
    }
    int M[m][n], N[m][n];
    cout << "Enter the elements for matrix M:" << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> M[i][j];
        }
    }


    cout << "Enter the elements for matrix N:" << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> N[i][j];
        }
    }

    int sum[m][n];
    cout << "Sum of the matrix is:" << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            sum[i][j] = M[i][j] + N[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}