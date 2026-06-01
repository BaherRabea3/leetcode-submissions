public class Solution {
     public string MinWindow(string s, string t)
 {
      int[] window = new int[128];
      int[] need   = new int[128];
      
      foreach (char c in t)
          need[c]++;
      
      int left = 0, right = 0;
      int start = -1, minSize = int.MaxValue;
      int count = 0;
      while (right < s.Length)
      {
          window[s[right]]++;
          if (need[s[right]] >= window[s[right]])
              count++;
      
          while (count == t.Length)
          {
              if(right - left + 1 < minSize)
                {
                    minSize = right - left + 1;
                    start = left;
                }
      
              if (need[s[left]] >= window[s[left]])
                  count--;
              window[s[left]]--;
              left++;
          }
      
          right++;
      }
      return start < 0 ? "" : s.Substring(start, minSize);
 }
}
