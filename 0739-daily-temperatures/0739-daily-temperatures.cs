 public class Solution
 {
     public int[] DailyTemperatures(int[] temperatures)
     {
         int[] answers = new int[temperatures.Length];
         Stack<int> temps = new Stack<int>();

         for (int temp = 0; temp < temperatures.Length; temp++)
         {
             while (temps.Count > 0 && temperatures[temp] > temperatures[temps.Peek()])
             {
                var peek = temps.Pop();
                 answers[peek] = temp - peek;
             }
             temps.Push(temp);
         }
         return answers;
     }
 }