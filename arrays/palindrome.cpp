bool is_palindrome(int num){
    int reverse = 0;
    int reminder = 0;
    int orginal_num = num;

    while (num>0){
        
        reminder = num %10;
        reverse = reverse * 10 + reminder;
        num = num /10;
    }
    
    if (orginal_num == reverse) {
        return true;
    } 
    return false;

}
