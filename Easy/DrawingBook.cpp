int pageCount(int n, int p)
{
    int answer = 0;

    int toFirst = 1;
    int toLast = (n / 2) + 1;

    int toGoal = (p / 2) + 1;

    if (toGoal - toFirst > toLast - toGoal)
        answer = toLast - toGoal;
    else
        answer = toGoal - toFirst;

    return answer;
}