public class Solution
{
    public int[] ExclusiveTime(int n, IList<string> logs)
    {
        var executionTime = new int[n];
        Stack<int> functions = new Stack<int>();
        int prevStartTime = 0;

        foreach (var log in logs)
        {
            var function = log.Split(":");
            int id = int.Parse(function[0]);
            string callType = function[1];
            int timestamp = int.Parse(function[2]);

            if (callType == "start")
            {
                if (functions.Count > 0)
                {
                    executionTime[functions.Peek()] += timestamp - prevStartTime;
                }

                functions.Push(id);
                prevStartTime = timestamp;
            }
            else
            {
                executionTime[functions.Pop()] += timestamp - prevStartTime + 1;
                prevStartTime = timestamp + 1;
            }
        }
        return executionTime;
    }
}