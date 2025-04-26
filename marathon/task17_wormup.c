int rev(int num){
    int rev = 0;
    while(num){
        rev = rev*10 + num%10;
        num /= 10;
    }
    return rev;
}
int step_polindrom(int num){
    int step = 0;
    while(rev(num) != num){
        num += rev(num);
        step++;
    }
    return step;
}
