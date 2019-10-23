// ProtoDemo.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>

#include "proto/service.pb.h"
#include "proto/tnode.pb.h"

int main()
{
	{
		Tnode::ReqQueryUser req;
		req.set_canalid(5000);
		req.set_loginacc("lwstar_0000");

		std::string data = req.SerializeAsString();
		std::cout << data << std::endl;

		Tnode::ReqQueryUser req1;
		if (req1.ParseFromString(data)) {
		}
	}
}
