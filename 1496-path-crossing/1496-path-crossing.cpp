class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<string> visited;
        int x = 0, y = 0;
        visited.insert("0,0");

        for (char direction : path) {
            if (direction == 'N') y++;
            else if (direction == 'S') y--;
            else if (direction == 'E') x++;
            else if (direction == 'W') x--;

            string currentPoint = to_string(x) + "," + to_string(y);

            if (visited.count(currentPoint) > 0) {
                return true;
            }

            visited.insert(currentPoint);
        }

        return false;
    }
};