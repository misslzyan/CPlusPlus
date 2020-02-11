#include<iostream>
#include <thread>
#include <chrono>
//#include <syswait.h>
//#include<windows.h>//Sleep调用
using namespace std;
int main(){
 
 
 
        std::cout <<unitbuf;
	std::cout << "\n正在输出记录数据...... ";
		for( int i=0; i <= 100; i++ )      // 打印百分比 
		{
			std::cout.width(3);//i的输出为3位宽
			std::cout << i << "%";
		        
std::this_thread::sleep_for(std::chrono::milliseconds(200));
                      //	Sleep(50);
			std::cout << "\b\b\b\b";//回删三个字符，使数字在原地变化
		}
		std::cout << "\n\n";
 
 
	return 0;
}
