// Hellowolrd.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "stdlib.h"

using namespace std;

int main()
{

	cout << "hellow world" << endl;

	int *p = new int(1);
	delete p;

	
	system("pause");
    return 0;
}

