#include <algorithm>
#include <iostream>
#include <vector>

using namespace  std;

class States
{
    std::vector<std::vector<int>> matrix;
    std::vector<std::vector<int>> states;
    int cityCounts;

	bool HasCity(int city)
	{
        for (auto& cities : states)
        {
            if (std::find(cities.begin(), cities.end(), city) != cities.end())
                return true;
        }
        return false;
	}
public:

    States(int citites)
    {
        cityCounts = citites;
    }

    void AddCity(vector<int> city )
    {
        matrix.push_back(city);
    }

    void AddCoupled(vector<int>& state, int city)
    {
        if (std::find(state.begin(), state.end(), city) != state.end())
            return;

        state.push_back(city);
        for(int i = 0; i < cityCounts; i ++)
        {
            if (matrix[city][i] != 0)
				AddCoupled(state, i);
        }
    }

    void Parse()
    {
	    for (int i = 0 ; i < cityCounts; i ++)
	    {
		    if (HasCity(i))
                continue;


            vector<int> state;
            AddCoupled(state, i);
            states.push_back(state);

	    }
    }

    int GetStatesCount()
    {
        return states.size();
    }

};

int main() {
    int count;
    std::cin >> count;

    States states(count);
    for (int i = 0; i < count; i++)
    {
        std::vector<int> city;

        for (int j = 0; j < count; j++)
        {
            int temp;
            std::cin >> temp;
			city.push_back(temp);
        }
        states.AddCity(city);

    }
    states.Parse();

    cout << states.GetStatesCount();

    return 0;
}