// WordCount.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include<stdio.h>
#include<string>
#include<map>
#include"stdafx.h"
using namespace std;

int main(int argc,char*argv[])
{
	string cc;
	if (argc == 1)
	{
		cc = "input.txt";
	}
	else
		cc = argv[1];
	string re = "result.txt";
	CountMeths Test(cc);
	Test.ResultFile(re);
	return 0;
}


