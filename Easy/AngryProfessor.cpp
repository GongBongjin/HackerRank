string angryProfessor(int k, vector<int> a)
{
    string answer = "";

    int cnt = 0;

    sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] <= 0)
            cnt++;
        else
            break;
    }

    if (cnt >= k)
        answer = "NO";
    else
        answer = "YES";

    return answer;
}