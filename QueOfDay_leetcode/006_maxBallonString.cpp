class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int cnt = 0;

        while (true) {
            string s = "balloon";
            bool possible = true;

            for (char c : s) {
                int pos = text.find(c);

                if (pos == string::npos) {
                    possible = false;
                    break;
                }

                text.erase(pos, 1);
            }

            if (!possible)
                break;

            cnt++;
        }

        return cnt;
    }
};