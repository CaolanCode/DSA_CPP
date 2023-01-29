/*
    Given an integer numRows, return the first numRows of Pascal's triangle.
 */
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

vector<vector<int> > generate(int numRows);
vector<int> sum(vector<int> resultRow);

int main()
{
    int numRows = 5;
    vector<vector<int> > result;
    
    result = generate(numRows);
    
    for(int i = 0; i < result.size(); i++)
    {
        for(int j = 0; j < result[i].size(); j++) cout << result[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}

vector<vector<int> > generate(int numRows)
{
    vector<vector<int> > result;
    
    result.push_back({1});
    if(numRows == 1) return result;
    
    result.push_back({1,1});
    if(numRows == 2) return result;
    
    for(int i = 2; i < numRows; i++)
    {
        vector<int> temp = sum(result[i-1]);
        temp.insert(temp.begin(), 1);
        temp.push_back(1);
        result.push_back(temp);
    }
    
    return result;
}

vector<int> sum(vector<int> resultRow)
{
    vector<int> temp;
    for(int i = 0; i < resultRow.size()-1; i++)
    {
        temp.push_back(resultRow[i] + resultRow[i+1]);
    }
    return temp;
}
