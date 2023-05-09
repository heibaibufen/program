#include <stdio.h>

#include <string.h>


char stack[50], str[50], post[50]; // 符号栈，表达式字符串，输出栈

int top1 = -1, top2 = -1;

 

char Pop( char c )

{

    if (c == 'D') return '/';

    if (c == 'C') return '*';

    if (c == 'B') return '+';

    if (c == 'A') return '-';

}

 

void Compare( char c ) // 传入字符来比较优先级进而对stack执行相应的操作

{

    if (c == ')') // 如果遇到右括号

    {

        while (stack[top1] != '(' && top1 != -1) // 一直出栈直到遇到第一个左括号或栈空

        {

            post[++top2] = Pop(stack[top1]); // 弹出到输出栈

            post[++top2] = ' ';

            stack[top1--] = '\0'; // 栈顶下移

        }

        stack[top1--] = '\0'; // 此时stack[top1]为左括号，直接弹出即可

    }

    else // 如果是其他的操作符

    {

        while (stack[top1] >= c && stack[top1] != '(' && top1 != -1) // 一直出栈直到遇到优先级更小或者左括号或栈空

        {

            post[++top2] = Pop(stack[top1]); // 弹出到输出栈

            post[++top2] = ' ';

            stack[top1--] = '\0'; // 栈顶下移

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

            stack[++top1] = str[i]; // 左括号直接入栈

        else if (str[i] == '-' && (i == 0 || str[i - 1] == '(')) // 负号进入输出栈

            post[++top2] = str[i];

        else if (str[i] == '+' && (i == 0 || str[i - 1] == '(')) // 遇到正号直接跳过

            continue;

        else if (str[i] == '-' && i !=0 && str[i - 1] != '(') // 减号

            Compare('A');

        else if (str[i] == '+' && i != 0 && str[i - 1] != '(') // 加号

            Compare('B');

        else if (str[i] == '*') // 乘号

            Compare('C');

        else if (str[i] == '/') // 除号

            Compare('D');

        else if (str[i] == ')') // 右括号

            Compare(')');

        else

        { // 对待运算符外的字符，最好的方法是一视同仁，只在运算符上进行限制

            post[++top2] = str[i];

            if (str[i + 1] == '+' || str[i + 1] == '-' || str[i + 1] == '*'

                || str[i + 1] == '/' || str[i + 1] == '(' || str[i + 1] == ')' || str[i + 1] == '\0')

                post[++top2] = ' '; // 输出一位空格

        }

    }

 

    while (top1 != -1) // 栈中剩余运算符全部输出

    {

        post[++top2] = Pop(stack[top1--]);

        post[++top2] = ' ';

    }

    if (post[top2] == ' ')

        post[top2--] = '\0'; // 如果结尾是多余空格则删除掉

    printf("%s", post);

 

    return 0;

}
