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
