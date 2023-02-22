int designerPdfViewer(vector<int> h, string word)
{
    int answer = 0;

    vector<int> height = {};

    for (int i = 0; i < word.size(); i++)
    {
        height.push_back(h[word[i] - 'a']);
    }

    answer = (word.size()) * (*max_element(height.begin(), height.end()));

    return answer;
}