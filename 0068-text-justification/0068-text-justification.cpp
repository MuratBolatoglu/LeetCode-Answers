class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int width) {
        vector<string> ans, temp;
        int len = 0;
        vector<vector<string>> lines;
        for (auto& word : words) {
            if (len + temp.size() + word.size() <= width) {
                len += word.size();
                temp.push_back(word);
            } else {
                lines.push_back(temp);
                temp = {word};
                len = word.size();
            }
        }
        lines.push_back(temp);
        int n = lines.size();
        for (size_t i = 0; i < n; i++) {
            string app = "";
            if (i == n - 1 || lines[i].size() == 1) {
                for (size_t j = 0; j < lines[i].size(); j++) {
                    if (j == lines[i].size() - 1) app += lines[i][j];
                    else app += lines[i][j] + " "; 
                }
                while (app.size() < width) app += " "; 
            } else {
                int totalLength = 0;
                for (auto& word : lines[i]) totalLength += word.size();
                int spaceSize = width - totalLength,gaps = lines[i].size() - 1,spacesPerGap = spaceSize / gaps,extraSpaces = spaceSize % gaps;
                for (size_t j = 0; j < lines[i].size(); j++) {
                    app += lines[i][j]; 
                    if (j < lines[i].size() - 1) { 
                        int spaceToAdd = spacesPerGap + (j < extraSpaces ? 1 : 0);
                        app+=string(spaceToAdd, ' ');
                    }
                }
            }
            ans.push_back(app);
        }
        return ans;
    }
};
