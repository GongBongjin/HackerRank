string timeConversion(string s)
{
    string str = "";

    int hh = 0;
    hh = stoi(s.substr(0, 2));

    if (s[s.size() - 2] == 'A')
    {
        if (hh == 12)
        {
            hh = 0;
            str.replace(0, 2, '0' + to_string(hh));
        }
        else if (hh < 10)
            str.replace(0, 2, '0' + to_string(hh));
        else
            str.replace(0, 2, to_string(hh));;
    }

    if (s[s.size() - 2] == 'P')
    {
        if (hh == 12)
        {
            str.replace(0, 2, to_string(hh));
        }
        else
        {
            hh += 12;
            str.replace(0, 2, to_string(hh));
        }

    }

    for (int i = 2; i < s.size() - 2; i++)
        str.push_back(s[i]);

    return str;
}