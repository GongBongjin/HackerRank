string dayOfProgrammer(int year)
{
    string result = "";

    if (year <= 1917)
    {
        if (year % 4 == 0)
        {
            result = "12.09.";
        }
        else
        {
            result = "13.09.";
        }
    }
    else if (year >= 1919)
    {
        if (year % 400 == 0)
        {
            result = "12.09.";
        }
        else if (year % 4 == 0)
        {
            if (year % 100 != 0)
            {
                result = "12.09.";
            }
            else
            {
                result = "13.09.";
            }
        }
        else
        {
            result = "13.09.";
        }
    }
    else
    {
        result = "26.09.";
    }

    return result + to_string(year);
}