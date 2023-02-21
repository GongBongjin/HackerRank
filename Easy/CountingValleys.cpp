int countingValleys(int steps, string path)
{
    int stair = 0;
    int answer = 0;
    for (int i = 0; i < path.size(); i++)
    {
        if (path[i] == 'U')
        {
            stair++;
            if (stair == 0)
                answer++;
        }
        else if (path[i] == 'D')
            stair--;
    }

    return answer;
}