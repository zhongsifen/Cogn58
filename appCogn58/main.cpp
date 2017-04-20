//
//  main.cpp
//  appCogn58
//
//  Created by SIFEN ZHONG on 16/4/2017.
//  Copyright © 2017 ___ZHONGSIFEN___. All rights reserved.
//

#include <iostream>

char _exe[] = { "appCogn58" };
char _csv[] = { "/Users/zhongsifen/Work/Cogn58/data/orl_faces/orl.csv" };
char _img[] = { "/Users/zhongsifen/Work/Cogn58/data/p2.jpg" };
int _argc = 3;
const char *_argv[] = { _exe, _csv, _img, };

int main_demo(int argc, const char *argv[]);
int main_lbph(int argc, const char *argv[]);

int main_main(int argc, const char * argv[]) {
	main_demo(_argc, _argv);
	
	std::cout << "Hello, World! This is from Cogn58\n";
	return 0;
}
