视觉第一次考核

**数学建模**
[[阿尔法-贝塔滤波器]](https://blog.csdn.net/qq_42046837/article/details/130395840?ops_request_misc=%257B%2522request%255Fid%2522%253A%2522240E1DA1-CBE6-4F38-8523-80C669D43131%2522%252C%2522scm%2522%253A%252220140713.130102334..%2522%257D&request_id=240E1DA1-CBE6-4F38-8523-80C669D43131&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~baidu_landing_v2~default-5-130395840-null-null.142^v100^pc_search_result_base1&utm_term=%E9%98%BF%E5%B0%94%E6%B3%95-%E8%B4%9D%E5%A1%94%E6%BB%A4%E6%B3%A2%E5%99%A8&spm=1018.2226.3001.4187)


![微信图片_20241006173744.png](resources/fd5fd9b3f4a24fad9537350b6ca7d09e.png)



**类与对象**
*因为本人只学过python和C语言，所以以下回答基于相关联想与网络搜索*
- C++中struct中成员变量可以被外部访问，class中成员变量和成员函数不能被外部访问。struct继承默认访问权限是public，class中是private。struct中对象的大小等于所有成员变量的大小之和，class中还要考虑虚函数表（用于存储虚函数指针）的大小。struct中自动默认生成构造函数与析构函数，class中只会自动默认生成构造函数。
- 公共权限public、保护权限protected、私有权限private。
- 局部对象：从创建到开始调用析构函数
静态对象：从创建到结束调用析构函数
全局对象：从程序开始到程序结束
动态对象：从new创建开始到delete释放结束

**搜索二维矩阵**
[search matrix.rar](resources/8f05f29082544805b27214d2a31a6239.rar)



