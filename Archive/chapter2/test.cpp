#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    // 测试基本输出功能
    cout << "=== C++ 开发环境全面测试 ===" << endl;
    
    // 测试字符串操作 - 这在学习C++时经常用到
    string welcome = "欢迎来到 C++ 的世界！";
    cout << "字符串测试: " << welcome << endl;
    
    // 测试 STL 容器 - 数据结构学习的重要部分
    vector<string> concepts = {"变量", "函数", "类", "指针", "引用"};
    cout << "即将学习的概念: ";
    for (const auto& concept : concepts) {
        cout << concept << " ";
    }
    cout << endl;
    
    // 测试文件操作 - 验证系统I/O功能
    ofstream test_file("environment_test.txt");
    if (test_file.is_open()) {
        test_file << "C++ 环境测试成功！\n";
        test_file.close();
        cout << "文件写入测试: 成功" << endl;
    } else {
        cout << "文件写入测试: 失败" << endl;
    }
    
    // 测试简单的类定义 - 面向对象编程基础
    class LearningProgress {
    private:
        int chapters_completed;
    public:
        LearningProgress() : chapters_completed(0) {}
        void complete_chapter() { chapters_completed++; }
        int get_progress() const { return chapters_completed; }
    };
    
    LearningProgress my_progress;
    my_progress.complete_chapter();
    cout << "类定义测试: 已完成 " << my_progress.get_progress() << " 章" << endl;
    
    cout << "=== 所有测试完成，环境配置正确！===" << endl;
    return 0;
}