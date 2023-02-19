void bonAppetit(vector<int> bill, int k, int b)
{
    int total = 0;
    int AnnaBill = 0;

    for (int i = 0; i < bill.size(); i++)
    {
        total += bill[i];

        if (i != k)
            AnnaBill += bill[i];
    }

    AnnaBill /= 2;

    if (total - (total - AnnaBill) == b)
        cout << "Bon Appetit";
    else
        cout << total - AnnaBill - b;
}