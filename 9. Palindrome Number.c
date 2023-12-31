// Optimal Solution found
bool isPalindrome(int x){
   long rem=0,sum=0,num=x;
   while(x>0)
   {
        rem=x%10; //1%10
        sum=sum*10+rem; //10*1
        x/=10; //10/1
   }
    if(sum==num)
        return true;
    else
        return false;
}

// My Solution (Constraint: Can't convert integer to string)
bool isPalindrome(int x){
    if(x<0)
    {
        return false;
    }
    else
    {
        int countDigits=0;
        int test=x;
        while(test>0)
        {
            test=test/10;
            countDigits++;
        }
        long long int tens=10;
        int y=0;
        long long int div=1;
        while(countDigits>0)
        {
            int temp=x%tens;
            // printf("%d\n",temp);
            temp=temp/div;
            y+=temp*pow(10,(countDigits-1));
            countDigits--;
            tens*=10;
            div*=10;
        }
        if (x==y)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
