int power(int num, int exp){
    int res = 1;
    while(exp){
        res *= num;
        exp--;
    }
    return res;
}
