vector<int> gradingStudents(vector<int> grades)
{
    vector<int> passingScore;
    int di;
    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i] < 38)
        {
            passingScore.push_back(grades[i]);
            continue;
        }

        di = 5 - (grades[i] % 5);

        if (di < 3)
            passingScore.push_back(grades[i] + di);

        else
            passingScore.push_back(grades[i]);
    }

    return passingScore;
}