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
    //�v��7-2�q�Ʀr
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

    //�v��7-3²���|�h�B�� (���n)
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
        result = (float) num1 / num2; //(float)�@�w�n�[�A�_�h�|���Ӽ�
    }
    printf("ANS: %f\n", result);
    */

    //�v��7-5 switch case
    // switch(��ƭ�or�r��)
    //  {
    //    case ��Ʊ`�ƭ�or�r��:
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
    //�v��7-6 ID�d��
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
    //�v��8-1�q�Ʀr�m��
    //�v��8-2�s�W�q�����Ʋέp
    /*
    int guess, ans, count=0;
    ans = 5;
    //���q�@���A�]while�A�t�Τ��í�w�ӥB�@���q���N���ζiwhile�A�W�[�į�
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
    //�v��8-3 �D���w�Ӽƥ���ƩM
    //�v��8-4 �s�W����(���]�t0)
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
    //�v��8-5 �L�X1��N
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
    //�v��8-6 do {...} while (�P�_��); -->�Ω�ܤְ���1���j��
    //�v��8-7 �ƦX��ȹB��l{+= -= *= /= %=}
    //        ���W����B��l{++ --} (���I)
    //int a=0, b;
    //b = ++a; -->a=1, b=1
    //b = a++; -->a=2, b=1
    //a = a++; -->���w�q�欰

    //�v��8-8 ���O���B�p��
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
