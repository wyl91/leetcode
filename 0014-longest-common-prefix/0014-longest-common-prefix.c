char* longestCommonPrefix(char** strs, int strsSize) {
    for (int j = 0; strs[0][j]; j++) {          // 逐列扫描第一个串
        for (int i = 1; i < strsSize; i++) {
            if (strs[i][j] != strs[0][j]) {     // 第 i 个串该列不匹配
                strs[0][j] = '\0';              // 原地截断，直接当返回值
                return strs[0];
            }
        }
    }
    return strs[0];
}
