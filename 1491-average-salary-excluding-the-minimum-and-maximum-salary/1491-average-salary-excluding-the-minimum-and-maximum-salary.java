class Solution {
    public double average(int[] salary) {
    int min=salary[0],max=salary[0];
    long sum=0;
    for(int s:salary)
    {
        sum+=s;
        if(s<min)
        min=s;
        else if(s>max)
        max=s;
    }
    return (double)(sum-min-max)/(salary.length-2);
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna