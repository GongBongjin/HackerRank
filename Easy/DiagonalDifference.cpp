int diagonalDifference(vector<vector<int>> arr)
{
    int num1 = 0;
    int num2 = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (i == j)
                num1 += arr[i][j];

            if (i + j == arr.size() - 1)
                num2 += arr[i][j];
        }
    }

    return abs(num1 - num2);
}