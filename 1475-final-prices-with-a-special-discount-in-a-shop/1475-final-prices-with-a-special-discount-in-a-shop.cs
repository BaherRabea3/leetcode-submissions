public class Solution
{
    public int[] FinalPrices(int[] prices)
    {
        Stack<KeyValuePair<int, int>> priceStack = new Stack<KeyValuePair<int, int>>();
        int[] answer = new int[prices.Length];

        int index = 0;
        KeyValuePair<int,int> popPrice = new KeyValuePair<int,int>();
        foreach (int price in prices)
        {
            while (priceStack.Count > 0 && price <= priceStack.Peek().Value)
            {
                popPrice = priceStack.Pop();
                answer[popPrice.Key] = popPrice.Value - price;
            }
            priceStack.Push(new KeyValuePair<int, int>(index++, price));
        }
        while (priceStack.Count > 0)
        {
            popPrice = priceStack.Pop();
            answer[popPrice.Key] = popPrice.Value;
        }
        return answer;
    }
}