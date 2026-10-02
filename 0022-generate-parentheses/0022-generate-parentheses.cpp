class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string cur;
        dfs(res, cur, 0, 0, n);
        return res;
    }

private:
    void dfs(vector<string>& res, string& cur, int open, int close, int n) {
        if ((int)cur.size() == 2 * n) {
            res.push_back(cur);
            return;
        }

        if (open < n) {                  // 还能放左括号
            cur.push_back('(');
            dfs(res, cur, open + 1, close, n);
            cur.pop_back();              // 回溯
        }

        if (close < open) {              // 右括号不能多于左括号
            cur.push_back(')');
            dfs(res, cur, open, close + 1, n);
            cur.pop_back();              // 回溯
        }
    }
};
