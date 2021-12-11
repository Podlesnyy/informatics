#include <iostream>

int main()
{
    using namespace std;

    int n;
    cin >> n;
    int* arr = new int[n];
    for (auto i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (auto i = 0; i < n; i++)
    {
	    const auto current = arr[i];

	    auto is_printed_before = false;
        for (auto j = 0; j < i; j++)
        {
            if (arr[j] == current)
            {
                is_printed_before = true;
                break;
            }
        }

        if (is_printed_before)
            continue;

    	for (int j = i + 1; j < n; j++)
    	{
    		if (arr[j] == current)
    		{
                cout << current << " ";
                break;
    		}
    	}
    }

    delete[] arr;

    return 0;
}