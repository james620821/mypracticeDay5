#include <stdio.h>
int main()
{
    /*
    int grade;
    printf("Please enter the grade: ");
    scanf("%d", &grade);
    if (grade >= 60)
    {
        printf("PASS");
    }
    else
    {
        printf("FAIL");
    }
    */
    //影片7-2猜數字
    /*
    int guess, ans = 4;
    printf("Please enter your guess: ");
    scanf("%d", &guess);
    if (guess == ans)
    {
        printf("Correct!");
    }
    else if (guess > ans)
    {
        printf("Too large!");
    }
    else
    {
        printf("Too small!");
    }
    */

    //影片7-3簡易四則運算 (重要)
    /*
    char op;
    int num1, num2;
    double result;
    scanf("%d%c%d", &num1, &op, &num2);
    if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    }
    else if (op == '/')
    {
        result = (float) num1 / num2; //(float)一定要加，否則會取商數
    }
    printf("ANS: %f\n", result);
    */

    //影片7-5 switch case
    // switch(整數值or字元)
    //  {
    //    case 整數常數值or字元:
    //       .........;
    //        break;
    //    default:
    //        .......;
    //  }
    /*
    char op;
    int num1, num2;
    double result;
    scanf("%d%c%d", &num1, &op, &num2);
    switch (op)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = (float)num1 / num2;
            break;
    }
    printf("ANS: %f\n", result);
    */
    //影片7-6 ID查詢
    /*
    int ID;
    printf("ID: ");
    scanf("%d", &ID);
    switch (ID)
    {
        case 2:
            printf("John");
            break;
        case 13:
            printf("Mary");
            break;
        case 16:
            printf("Amy");
            break;
        default :
            printf("Not found.");
    }
    */
    //影片8-1猜數字練習
    //影片8-2新增猜的次數統計
    /*
    int guess, ans, count=0;
    ans = 5;
    //先猜一次再跑while，系統比較穩定而且一次猜中就不用進while，增加效能
    printf("Please enter your guess: ");
    scanf("%d", &guess);
    count = count + 1;
    while (guess != ans)
    {
        if (guess > ans)
        {
            printf("Too large!\n");
        }
        else if (guess < ans)
        {
            printf("Too small!\n");
        }
        printf("Please enter your guess: ");
        scanf("%d", &guess);
        count = count + 1;
    }
    printf("Correct!\n");
    printf("You guess %d times\n", count);
    */
    //影片8-3 求不定個數正整數和
    //影片8-4 新增平均(不包含0)
    /*
    int num, count = 0, sum = 0;
    double average;
    printf("Please enter the numbers (quit: 0):\n");
    scanf("%d", &num);
    sum = sum + num;
    while (num != 0)
    {
        scanf("%d", &num);
        count = count + 1;
        sum = sum + num;
    }
    if (count == 0)
    {
        printf("The average is N/A\n");
    }
    else
    {
        average = (float)sum / count;
        printf("The sum is %d\n", sum);
        printf("The average is %1f\n", average);
    }
    */
    //影片8-5 印出1到N
    /*
    int a = 1, num;
    printf("Please enter the number: ");
    scanf("%d", &num);
    while (a <= num)
    {
        printf("%d\n", a);
        a = a + 1;
    }
    */
    //影片8-6 do {...} while (判斷式); -->用於至少執行1次迴圈
    //影片8-7 複合賦值運算子{+= -= *= /= %=}
    //        遞增遞減運算子{++ --} (重點)
    //int a=0, b;
    //b = ++a; -->a=1, b=1
    //b = a++; -->a=2, b=1
    //a = a++; -->未定義行為

    //影片8-8 消費金額計算
    int num, price, sum = 0, count = 0;
    printf("Please enter the goods number: (1~5 quit:0)\n");
    scanf("%d", &num);
    while(num != 0)
    {
        switch (num)
        {
            case 1:
                sum += 90;
                break;
            case 2:
                sum += 75;
                break;
            case 3:
                sum += 83;
                break;
            case 4:
                sum += 89;
                break;
            case 5:
                sum += 71;
                break;
            default :
                printf("error ID\n");
        }
        scanf("%d", &num);
    }
    printf("Total: %d",sum);
    return 0;
}
