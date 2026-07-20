// Maximize the Confusion of an Exam
// Difficulty: Medium  |  Topic: String
// https://leetcode.com/problems/maximize-the-confusion-of-an-exam/

class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n = answerKey.size();
        int tfreq = 0, ffreq = 0;
        int maxLen = INT_MIN;
        int maxFreq = INT_MIN;

        int left = 0, right;

        for(right = 0; right<n; right++){
            if(answerKey[right] == 'T') tfreq++;
            else ffreq++;

            maxFreq = max({tfreq, ffreq});
            while((right - left + 1) - maxFreq > k){
                if(answerKey[left] == 'T') tfreq--;
                else ffreq--;
                left++;
                maxFreq = max({tfreq, ffreq});
            }

            maxLen = max(maxLen, (right - left + 1));
        }

        return maxLen;
    }
};