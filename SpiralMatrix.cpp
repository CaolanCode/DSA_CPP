/*
    Print spiral matrix
 */
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &matrix, int count);
vector<vector<int>> createMatrix();
void SpiralMatrix(vector<vector<int>> matrix);

int main()
{
    vector<vector<int>> matrix = createMatrix();
    SpiralMatrix(matrix);
    
    return 0;
}

void printVector(vector<int> &matrix, int count)
{
    for(int i = 0; i < count; i++)
    {
        cout << matrix[i] << " ";
    }
    cout << endl;
}

vector<vector<int>> createMatrix()
{
    int rows, cols, index = 1;
    
    cout << "How many rows would you like in the vector? ";
    cin >> rows;
    cout << "How many columns would you like in the vector? ";
    cin >> cols;
    
    vector<vector<int>> matrix(rows, vector<int>(cols));
    
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++) matrix[i][j] = index++;
    }
    
    return matrix;
}

void SpiralMatrix(vector<vector<int>> matrix)
{
    int startRow, endRow, startCol, endCol, count, m, n;
    startRow = startCol = count = 0;
    m = matrix.size();
    endRow = m - 1;
    n = matrix[0].size();
    endCol = n - 1;
    vector<int> newMatrix;
    
    while(startRow <= endRow)
    {
       // top row
        for(int i = startCol; i <= endCol; i++)
        {
            newMatrix.push_back(matrix[startRow][i]);
            count++;
        }
        startRow++;
        if(count == m * n) {
            printVector(newMatrix, count);
            break;
        }
        
        // right col
        for(int i = startRow; i <= endRow; i++)
        {
            newMatrix.push_back(matrix[i][endCol]);
            count++;
        }
        endCol--;
        if(count == m * n) {
            printVector(newMatrix, count);
            break;
        }
        
        // bottom row
        for(int i = endCol; i >= startCol; i--)
        {
            newMatrix.push_back(matrix[endRow][i]);
            count++;
        }
        endRow--;
        if(count == m * n) {
            printVector(newMatrix, count);
            break;
        }
        
        // left column
        for(int i = endRow; i >= startRow; i--)
        {
            newMatrix.push_back(matrix[i][startCol]);
            count++;
        }
        startCol++;
        if(count == m * n) {
            printVector(newMatrix, count);
            break;
        }
    }
}
