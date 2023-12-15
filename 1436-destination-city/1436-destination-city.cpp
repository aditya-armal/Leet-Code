class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        std::unordered_set<std::string> startingCities;
        std::unordered_set<std::string> destinationCities;

        for (const auto& path : paths) {
            startingCities.insert(path[0]);
            destinationCities.insert(path[1]);
        }

        for (const auto& city : destinationCities) {
            if (startingCities.find(city) == startingCities.end()) {
                return city;
            }
        }

        return "";
    }
};