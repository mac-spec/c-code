/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** answer=(char**)malloc(n*sizeof(char**));
    for(int i=1;i<=n;i++)
    {
        answer[i-1]=(char*)malloc(9*sizeof(char*));
        if(i%3==0 && i%5==0)
         strcpy(answer[i-1],"FizzBuzz");
         else if(i%3==0)
         strcpy(answer[i-1],"Fizz");
         else if(i%5==0)
         strcpy(answer[i-1],"Buzz");
         else 
         sprintf(answer[i-1],"%d",i);

    }
    *returnSize=n;
    return answer;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna