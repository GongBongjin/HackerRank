int sockMerchant(int n, vector<int> ar)
{
    map<int, int> m;

    int answer = 0;
    for (int i = 0; i < ar.size(); i++)
        m[ar[i]]++;
    for (auto map : m)
        answer += map.second / 2;

    return answer;
}