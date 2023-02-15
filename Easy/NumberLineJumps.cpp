string kangaroo(int x1, int v1, int x2, int v2)
{
    string answer = "";
    int k1 = x1;
    int k2 = x2;

    if (x1 < x2)
    {
        if (v1 <= v2)
            answer = "NO";
        else
        {
            while (k1 < k2)
            {
                k1 += v1;
                k2 += v2;

                if (k1 == k2)
                {
                    answer = "YES";
                    break;
                }
                else
                    answer = "NO";
            }
        }
    }
    else
    {
        if (v1 >= v2)
            answer = "NO";
        else
        {
            while (k1 > k2)
            {
                k1 += v1;
                k2 += v2;

                if (k1 == k2)
                {
                    answer = "YES";
                    break;
                }
                else
                    answer = "NO";
            }
        }
    }
    return answer;
}