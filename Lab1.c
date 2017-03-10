

int money(int inp, int tm){
    int sum;
    if ((tm > 0) && (tm < 30)){
        sum = inp - 0.1 * inp;
    }
    if ((tm > 30) && (tm < 120)){
        sum = inp + 0.02 * inp;
    }
    if ((tm > 121) && (tm < 240)){
        sum = inp + 0.06 * inp;
    }
    if ((tm > 241) && (tm < 365)){
        sum = inp + 0.12 * inp;
    }
    return sum;
}

int main(){
    int input, output, time;
    printf("Вклад: ");
    scanf("%d", &input);
    printf("Срок: ");
    scanf("%d", &time);
    if (input < 10000){
        printf("Минимальная сумма вклада 10000 рублей\n");
    }
    else if(input < 100000){
        output = money(input, time);
        printf("Сумма вклада на выходе: %d\n", output);
    }
    else{
        output = money2(input, time);
        printf("Сумма вклада на выходе: %d\n", output);
    }
    return 0;
    
}
