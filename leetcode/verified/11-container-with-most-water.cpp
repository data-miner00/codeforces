/**
 *    Author            : Shaun Chong 
 *    Created           : August 14, 2023 5:15 PM
 *    Problem Name      : 11. Container With Most Water
 *    Problem Url       : https://leetcode.com/problems/container-with-most-water/
 *    Submission Url    : https://leetcode.com/problems/container-with-most-water/submissions/1020952696/
 *    Solution Language : C++
 *    Solution Status   : Time Limit Exceeded
 *    Solution Time     : N/A
 *    Solution Space    : N/A
**/
class Attempt1 {
public:
    int maxArea(vector<int>& height) {
        int maxVolume = 0;
        for (int i = 0; i < height.size(); i++) {
            for (int j = i + 1; j < height.size(); j++) {
                int volume = min(height[i], height[j]) * (j - i);
                maxVolume = max(volume, maxVolume);
            }
        }

        return maxVolume;
    }
};

/**
 *    Author            : Shaun Chong 
 *    Created           : August 14, 2023 6:47 PM
 *    Problem Name      : 11. Container With Most Water
 *    Problem Url       : https://leetcode.com/problems/container-with-most-water/
 *    Submission Url    : https://leetcode.com/problems/container-with-most-water/submissions/1020994663/
 *    Solution Language : C++
 *    Solution Status   : Wrong Answer
 *    Solution Time     : N/A
 *    Solution Space    : N/A
**/
class Attempt2 {
public:
    int maxArea(vector<int>& height) {
        int maxVolume = 0;
        pair<int, int>* prevPair = nullptr;
        vector<pair<int, int>> indexedHeight;
        for (int i = 0; i < height.size(); ++i) {
            indexedHeight.push_back(make_pair(height[i], i));
        }

        sort(indexedHeight.begin(), indexedHeight.end(),
            [](const pair<int, int>& a, const pair<int, int>& b) {
                return a.first < b.first;
            });


        for (int i = 1; i < indexedHeight.size(); ++i) {
            if (indexedHeight[i].first == 0) continue;

			const int currentMax = min(indexedHeight[i - 1].first, indexedHeight[i].first);
			const int distance = abs(indexedHeight[i].second - indexedHeight[i - 1].second);

			const int currentVolume = currentMax * distance;
			maxVolume = max(currentVolume, maxVolume);

            if (i > 1 && indexedHeight[i - 1].first == indexedHeight[i].first) {
                const int currentMax = min((*prevPair).first, indexedHeight[i].first);
				const int distance = abs(indexedHeight[i].second - (*prevPair).second);

				const int currentVolume = currentMax * distance;
				maxVolume = max(currentVolume, maxVolume);
            }
            else {
                prevPair = &indexedHeight[i - 1];
            }
        }

        return maxVolume;
    }
};

/**
 *    Author            : Shaun Chong (GPT Assisted)
 *    Created           : August 14, 2023 7:24 PM
 *    Problem Name      : 11. Container With Most Water
 *    Problem Url       : https://leetcode.com/problems/container-with-most-water/
 *    Submission Url    : https://leetcode.com/problems/container-with-most-water/submissions/1021038995/
 *    Solution Language : C++
 *    Solution Status   : Accepted
 *    Solution Time     : 76 ms (Beats 76.55% of users with C++)
 *    Solution Space    : 59.08 MB (Beats 24.47% of users with C++)
**/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            int minHeight = min(height[left], height[right]);
            int width = right - left;
            int area = minHeight * width;
            maxArea = max(maxArea, area);

            if (height[left] < height[right]) {
                ++left;
            } else {
                --right;
            }
        }

        return maxArea;
    }
};
