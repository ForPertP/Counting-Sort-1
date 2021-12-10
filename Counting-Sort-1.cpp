vector<int> countingSort(vector<int> arr)
{
    vector<int> count(100);
   
    for (const auto n : arr)
    {
        count[n]++;
    }

    return count;
}

