
int main(){
	//观察不正确的嵌套     “/*ab/*cd*/   */” ;
	/*
	 *观察输出语句
	 */

	std::cout << "/*";
	std::cout << "*/";
	// 错误     std::cout << /*"*/"*/;
	std::cout << ;
	return 1;
}