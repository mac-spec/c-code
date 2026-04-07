int arrangeCoins(int n) {
        int row_number=1,complete_rows = 0;
    while(n>=row_number) 
    {
        n=n-row_number; 
        complete_rows++;   
        row_number++;       
    }
return complete_rows;
}
