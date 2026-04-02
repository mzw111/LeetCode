class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions,
                                      vector<int>& healths, string directions) {
        vector<tuple<int, int, char, int>> robo;
        for (int i = 0; i < positions.size(); i++) {
            robo.push_back({positions[i], healths[i], directions[i], i});
        }
        sort(robo.begin(), robo.end());
        stack<int> st;
        for (int i = 0; i < positions.size(); i++) {
            auto& [posi, heal, dir, idx] = robo[i];

            if (dir == 'R') {
                st.push(i);
            } else {
                while (!st.empty() && heal > 0) {
                    int j = st.top();
                    auto& [posi2, heal2, dir2, idx2] = robo[j];
                    if (heal == heal2) {
                        heal = 0;
                        heal2 = 0;
                        st.pop();
                        
                    } else if (heal < heal2) {
                        heal = 0;
                        heal2 = heal2 - 1;
                        
                    } else {
                        heal = heal - 1;
                        heal2 = 0;
                        st.pop();
                        
                    }
                }
            }
        }
        vector<pair<int, int>> remainingW;
        for (auto& [posi, heal, dir, idx] : robo) {
            if (heal > 0) {
                remainingW.push_back({idx, heal});
            }
        }
        sort(remainingW.begin(), remainingW.end());

        vector<int> result;
        for (auto&i: remainingW) {
            result.push_back(i.second);
        }
        return result;
    }
};