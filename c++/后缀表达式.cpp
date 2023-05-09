#include <stdio.h>

#include <string.h>


char stack[50], str[50], post[50]; // ����ջ�����ʽ�ַ��������ջ

int top1 = -1, top2 = -1;

 

char Pop( char c )

{

    if (c == 'D') return '/';

    if (c == 'C') return '*';

    if (c == 'B') return '+';

    if (c == 'A') return '-';

}

 

void Compare( char c ) // �����ַ����Ƚ����ȼ�������stackִ����Ӧ�Ĳ���

{

    if (c == ')') // �������������

    {

        while (stack[top1] != '(' && top1 != -1) // һֱ��ջֱ��������һ�������Ż�ջ��

        {

            post[++top2] = Pop(stack[top1]); // ���������ջ

            post[++top2] = ' ';

            stack[top1--] = '\0'; // ջ������

        }

        stack[top1--] = '\0'; // ��ʱstack[top1]Ϊ�����ţ�ֱ�ӵ�������

    }

    else // ����������Ĳ�����

    {

        while (stack[top1] >= c && stack[top1] != '(' && top1 != -1) // һֱ��ջֱ���������ȼ���С���������Ż�ջ��

        {

            post[++top2] = Pop(stack[top1]); // ���������ջ

            post[++top2] = ' ';

            stack[top1--] = '\0'; // ջ������

        }

        stack[++top1] = c;

    }

}

 

int main(void)

{

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)

    {

        if (str[i] == '(')

            stack[++top1] = str[i]; // ������ֱ����ջ

        else if (str[i] == '-' && (i == 0 || str[i - 1] == '(')) // ���Ž������ջ

            post[++top2] = str[i];

        else if (str[i] == '+' && (i == 0 || str[i - 1] == '(')) // ��������ֱ������

            continue;

        else if (str[i] == '-' && i !=0 && str[i - 1] != '(') // ����

            Compare('A');

        else if (str[i] == '+' && i != 0 && str[i - 1] != '(') // �Ӻ�

            Compare('B');

        else if (str[i] == '*') // �˺�

            Compare('C');

        else if (str[i] == '/') // ����

            Compare('D');

        else if (str[i] == ')') // ������

            Compare(')');

        else

        { // �Դ����������ַ�����õķ�����һ��ͬ�ʣ�ֻ��������Ͻ�������

            post[++top2] = str[i];

            if (str[i + 1] == '+' || str[i + 1] == '-' || str[i + 1] == '*'

                || str[i + 1] == '/' || str[i + 1] == '(' || str[i + 1] == ')' || str[i + 1] == '\0')

                post[++top2] = ' '; // ���һλ�ո�

        }

    }

 

    while (top1 != -1) // ջ��ʣ�������ȫ�����

    {

        post[++top2] = Pop(stack[top1--]);

        post[++top2] = ' ';

    }

    if (post[top2] == ' ')

        post[top2--] = '\0'; // �����β�Ƕ���ո���ɾ����

    printf("%s", post);

 

    return 0;

}
