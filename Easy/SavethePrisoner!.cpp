int saveThePrisoner(int n, int m, int s)
{
    int answer = 0;

    answer = (m - 1 + s - 1) % n;

    return answer + 1;
}