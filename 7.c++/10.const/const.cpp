/*************************************************************************
	> File Name: const.cpp
	> Author: ldc
	> Mail: litesla
	> Created Time: 2019年02月20日 星期三 09时23分01秒
 ************************************************************************/

#include<iostream>
using namespace std;
//每次压栈的时候空间不一样
//具有完全包含关系的问题
//栈区的空间是可以自动回收的
//必须初始化，如果不初始化的话，是上一次的值
void func(int n) {
    if (n == 0) return ;
    const int i = 123;
    //修饰类型，
    //static_cast 
    //const_cast 静态
    //reinterpret_cast 
    //dynamic_cast 运行时,转换的，转换的类里面必须有虚函数
    cout << i << endl;
    //int *p = const_cast<int *>(&i);
    //*p = 456;
    //加上ｃｏｎｓｔ可以让编译器给你找ｂｕｇ
    i = 456;
    func(n - 1);
    return ;
}
//堆区
//块状链表

//我们程序能做某些事情
//一定是我们程序存储了某些必要的信息

//存储ｎ个数字，
//存储ｎ－１个数字，和一个何值
//
//数据结构会影响我们算法的效率
//
//
//前缀和数组
//全局，
//常量，
//静态，
//他已经存储在静态存储区种类了，就不用再存储在栈区了
//
//
//聪明人的做法把必要的东西留在脑子中
//为什么开始做简历，
int main() {

    return 0;
}
