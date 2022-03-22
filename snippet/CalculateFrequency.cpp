// Reference: https://stackoverflow.com/questions/9370945/finding-the-max-value-in-a-map
#include <iostream>
#include <vector>

void way_one() {
    map<int,unsigned> frequencyCount;
    // This is my attempt to increment the values
    // of the map everytime one of the same numebers 
    for(size_t i = 0; i < v.size(); ++i)
        frequencyCount[v[i]]++;

    unsigned currentMax = 0;
    unsigned checked = 0;
    unsigned maax = 0;
    for(auto it = frequencyCount.cbegin(); it != frequencyCount.cend(); ++it )
        //checked = it->second;
        if (it ->second > currentMax)
        {
            maax = it->first;
        }
        //if(it ->second > currentMax){
        //v = it->first

    cout << " The highest value within the map is: " << maax << endl;
}

void way_two() {
    std::map<int, size_t> frequencyCount;
    using pair_type = decltype(frequencyCount)::value_type;

    for (auto i : v)
        frequencyCount[i]++;

    auto pr = std::max_element
    (
        std::begin(frequencyCount), std::end(frequencyCount),
        [] (const pair_type & p1, const pair_type & p2) {
            return p1.second < p2.second;
        }
    );
    std::cout << "A mode of the vector: " << pr->first << '\n';
}