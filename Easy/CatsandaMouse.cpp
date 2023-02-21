string catAndMouse(int x, int y, int z)
{
    string result = "";

    if (abs(x - z) < abs(y - z))
        result = "Cat A";
    else if (abs(x - z) > abs(y - z))
        result = "Cat B";
    else
        result = "Mouse C";

    return result;
}