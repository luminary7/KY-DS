#include "Postfix.h"
#include <iostream>
#include <cstdlib>
#include <cstring>

// 计算以'$'结尾的后缀表达式的值
double Postfix() {
    // 运算数栈
    SqStack OPND;

    // 操作数栈初始化
    InitSqStack(OPND);
    double num = 0.0;

    // 读入后缀式的第一个字符
    char ch = getchar();
    int i = 0;
    char data[100];

    // 表达式没有扫描完毕
    while (ch != '$') {
        i = 0;

        // 拼数，将读入的数字或小数点依次保存在字符数组data中
        while ((ch >= '0' && ch <= '9') || ch == '.') {
            // 必须解决每次要将data清空
            data[i] = ch;
            i++;
            ch = getchar();
        }

        //必须得ch是数字时才转换
        if (i) {
            // 将字符串转换成浮点数
            num = atof(data);

            // 操作数进栈
            Push(OPND, num);
        }
        char a, b;

        // 遇'+'、'-'、'*'、'/'，弹出两个数据进行运算后再压栈
        switch (ch) {

            // 遇到空格，继续读入表达式中下一个字符
            case ' ':
                break;
            case '+':
                Pop(OPND, b);
                Pop(OPND, a);
                Push(OPND, a + b);
                break;
            case '-':
                Pop(OPND, b);
                Pop(OPND, a);
                Push(OPND, a - b);
                break;
            case '*':
                Pop(OPND, b);
                Pop(OPND, a);
                Push(OPND, a * b);
                break;
            case '/':
                Pop(OPND, b);
                Pop(OPND, a);
                Push(OPND, a / b);
                break;
        }

        // 重要！将data数组清空
        memset(data, '\0', sizeof(data));

        // 读入表达式中下一个字符
        ch = getchar();

    }

    // 输出运算结果
    return GetTop(OPND);
}