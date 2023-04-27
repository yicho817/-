// 運算器.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
/*
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
int is_num(const char* n) {
    int num;
    if (sscanf(n, "%d", &num) == 1) {
        //printf("%d", n);
        return n;
    }
        else {
        printf("這不是數字");
        return 0;
    }
}
*/

int main()
{
    start:
    
    int num1;
    int num2;
    char op;
    int square = 1;
    char c;
    char input[1024] = {0};
    char* p;
    char* num1_str;
    char* op_str;
    char* num2_str;

    p = &input[0];


    //fflush(stdin);

    //int c;
    //while ((c = getchar()) != '\n' && c != EOF) {} // 清空输入缓冲区

    // 讀取整行输入
    printf("請輸入要計算的算式 計算值請勿大於2147483647 輸入太多會輸出錯誤唷\n格式請參考 數字1 運算元(只接受 + - * / %% ^) 數字2 :\t");
    fgets(input, sizeof(input), stdin);  
    /*
    num1_str = strstr(input, "1234567890"); // 查找字符串中是否包含数字 1
    op_str = strpbrk(input, "+-* /%^"); // 查找字符串中是否包含运算符
    num2_str = strpbrk(op_str, "1234567890"); // 从运算符位置开始查找字符串中是否包含数字
    if (num1_str && op_str && num2_str) { // 如果找到了数字和运算符
        num1 = atoi(num1_str); // 将字符串转换为整数
        num2 = atoi(num2_str);
        op = *op_str; // 获取运算符
        printf("num1=%d, op=%c, num2=%d\n", num1, op, num2);
    }
    else { // 如果没找到数字或者运算符
        printf("输入值无效或不足三个变量！\n");
    }
    */

    
    
    /*
    for (int i = 0; i < 1024; i++)
    {
        printf("p[%d]=%s",i,*(p+i));
    }
    printf("%s",input);*/
    //char* p1;
    //char* p2;
    //char* p3;
 
    /*
    printf("請輸入要計算的第一個數字: ");
    scanf_s("%d", &num1);
    //is_num(num1);
    //fflush(stdin);
    printf("請輸入要計算的運算元(只接受 + - * / %% ^): ");
    //op = getchar();
    scanf_s(" %c", &op, 1);
        printf("請輸入要計算的第二個數字: ");
    scanf_s("%d", &num2);
    */
    /*
    if (scanf_s("請輸入要計算的算式:"" %d"" %c"" %d", &num1, &op, &num2) != 3) {
        printf("整行輸入格式錯誤 請重新輸入\n");
        goto start;
    }
    else {
        // 對輸入的表達式進行計算
        if (op == '+') {
            printf("Result: %d\n", num1 + num2);
        }

        else if (op == '-') {
            printf("Result: %d\n", num1 - num2);
        }
        else if (op == '*') {
            printf("Result: %d\n", num1 * num2);
        }
        else if (op == '/') {
            printf("Result: %d\n", num1 / num2);
        }
        else if (op == '%') {
            printf("Result: %d\n", num1 % num2);
        }

        else if (op == '^') {
            for (int n = 1; n <= num2; n++) {
                square = square * num1;
                printf("Result: %d\n", square);
            }
            printf("Result: %d\n", square);
        }

        else {
            printf("運算元輸入格式錯誤 請重新輸入\n");
            goto start;
        }
    }
    */
    /*
        char op;

        printf("Enter an operator (+, -, *, /): ");
        op = getchar();

        if (op == '+') {
            printf("It's the '+' operator.\n");
        }
        else if (op == '-') {
            printf("It's the '-' operator.\n");
        }
        else if (op == '*') {
            printf("It's the '*' operator.\n");
        }
        else if (op == '/') {
            printf("It's the '/' operator.\n");
        }
        else {
            printf("Invalid operator.\n");
        }

        return 0;
    
  */  
    
    //if (sscanf_s(input, " %d %c %d", &num1, &op, 1, &num2) == 3 &&getchar() == '\n') { // 使用 sscanf_s() 解析输入值
    if (sscanf_s(input, "%d %c %d%c", &num1, &op, 1, &num2, &c, 1) == 4 && c == '\n') {

        //if (scanf_s(" %d"" %c"" %d", &num1, &op,1, &num2) == 3) {   
        //if (sscanf_s(input, "%*d %c%*d", &c, 1) != 1) {
        //if (sscanf_s(input, "%*s%c", &c, 1) == 0) {

            if (op == '+') {
                printf("Result: %d\n", num1 + num2);
            }
            else if (op == '-') {
                printf("Result: %d\n", num1 - num2);
            }
            else if (op == '*') {
                printf("Result: %d\n", num1 * num2);
            }
            else if (op == '/') {
                printf("Result: %d\n", num1 / num2);
            }
            else if (op == '%') {
                printf("Result: %d\n", num1 % num2);
            }
            else if (op == '^') {
                for (int n = 1; n <= num2; n++) {
                    //printf("num %d ^ %d = %d \n",  num1,n);
                    square = square * num1;
                    printf("num %d ^ %d = %d \n", num1, n, square);
                    //printf("square %d * num %d\n", square, num1);
                }
                printf("square: %d\n", square);
            }
            else {
                printf("運算元輸入格式錯誤 請重新輸入\n");
                while ((c = getchar()) != '\n' && c != EOF) {}
                goto start;
            }
        //}
        //else {
        //    printf("輸入太多 請重新輸入\n");
        //    goto start;
        //}
    }
    else {
            printf("輸入格式錯誤 請重新輸入\n");
            while ((c = getchar()) != '\n' && c != EOF) {}
            goto start;
        }
  
/*
if (scanf_s(" %d", &num1) == 1) {
    if (scanf_s(" %c", &op, 1) == 1) {
        if (scanf_s(" %d", &num2) == 1) {
            if (scanf_s(" %c", &c, 1) == 0) {
                if (op == '+') {
                    printf("Result: %d\n", num1 + num2);
                }
                else if (op == '-') {
                    printf("Result: %d\n", num1 - num2);
                }
                else if (op == '*') {
                    printf("Result: %d\n", num1 * num2);
                }
                else if (op == '/') {
                    printf("Result: %d\n", num1 / num2);
                }
                else if (op == '%') {
                    printf("Result: %d\n", num1 % num2);
                }
                else if (op == '^') {
                    for (int n = 1; n <= num2; n++) {
                        square = square * num1;
                        printf("Result: %d\n", square);
                    }
                    printf("Result: %d\n", square);
                }
                else {
                    printf("運算元輸入格式錯誤 請重新輸入\n");
                    goto start;
                }
            }
        }
    }
}
else {
    printf("輸入格式錯誤 請重新輸入\n");
    goto start;
}
  */

    result:
    printf("還需要重複計算嗎 請輸入Y or N:\t");
    char rt;
    
    scanf_s("%c",  &rt, 1);

    if (rt == 'Y'|| rt == 'y') {
        while ((c = getchar()) != '\n' && c != EOF) {}
        goto start;
        }
    else if (rt == 'N'|| rt == 'n') {
        goto end;
    }
    else {
        printf("Y or N輸入格式錯誤 請重新輸入\n");
        goto result;
    }
    end:
    return 0;
    
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
