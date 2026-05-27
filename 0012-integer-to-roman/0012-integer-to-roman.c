char* intToRoman(int num) {
     static char res[20];
    int  value[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    char *syb[]={"M","CM","D","CD","C","XC","L","XL","X","IX", 
    "V","IV","I"};
    res[0]='\0';
    for(int i=0;i<13;i++)
    {
        while(num>=value[i])
    {
    strcat(res, syb[i]); 
            num -= value[i];    
        }
    }
    return res;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna