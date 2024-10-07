// search matrix.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
#include <vector>
#include <string>

bool search(std::vector<std::vector<int>>& a, int t ) //在数组中查找目标值
{
    if (a.empty() || a[0].empty()) return false;
    int row = a.size(), col = a[0].size();
    int m = 0, n = col - 1;
    while (m < row && n >= 0)
    {
        if (a[m][n] == t) return true;
        else if (a[m][n] > t) n--;
        else m++;
    }
    return false;
}

int main()
{
    std::vector<std::vector<int>> a;
    int t = 0;
    int c = 0; //中间值

    std::string ch ;
    int i = 0;
    int flag = 0; //判断输入状态
    int row = 0, col = 0;
    std::getline(std::cin,ch);
    while (flag != 5)
    {
        if (ch[i] == '=' && flag == 0) flag = 1;//开始获取数组
        if (ch[i] == '[' && flag == 1) flag = 2;//开始获取每行数据
        if (ch[i] == '[' && flag == 2) flag = 3;//开始获取单个数据
        while (ch[i] != ']' && ch[i] != '[' && flag == 3)
        {
            c = c * 10 + ((int)(ch[i]) - 48);
            i++;
            if (ch[i] == ',')
            {
                a.push_back(std::vector<int>()); // 添加一个空的一维向量
                a[row].push_back(c);
                c = 0;
                col++;
                break;
            }
        }
        if (ch[i] == ']' && flag == 3)
        {
            a.push_back(std::vector<int>()); // 添加一个空的一维向量
            a[row].push_back(c);
            flag = 2;
            c = 0;
            col = 0;
            row++;
        }
        if (ch[i] == '=' && flag == 2)
        {
            flag = 4;//开始获取目标值
            i++;
        }
        while (flag == 4 && ch[i] != ' ')
        {
            while (ch[i] != ' ' && ch[i] != '\0')
            {
                c = c * 10 + ((int)(ch[i]) - 48);
                t = c;
                i++;
            }
            if (ch[i] == '\0') flag = 5;
        }
        i++;
    }
    std::cout << (search(a, t) ? "true" : "false") << std::endl; //输出
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
