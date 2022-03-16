#include <iostream>
#include "brain.hpp"
#include <iostream>
//input must be continous string of characters
//characters other than +-><[]., will be ignored

int main(int argc, char* argv[]){
	if(argc == 1){
		std::cout << "You must give a single continous string as the argument, enclosed in lil quotation marks" << std::endl;;
		return 1;
	}
	if(argc > 2){
		std::cout << "You must give a single continous string as the argument, enclosed in lil quotation marks" << std::endl;
		return 3;
	}
	Brain br;
	char* boop = argv[1];
	while(*boop){
		switch(*boop){
			case '+':{
				br.inc();
				break;
			}
			case '-':{
				br.sub();
				break;
			}
			case '>':{
				br.right();
				break;
			}
			case '<':{
				br.left();
				break;
			}
			case '.':{
				br.write();
				break;
			}
			case ',':{
				br.read();
				break;
			}
			case ']':{
				if(br.value()){ 
					int ignores = 0;
					while(*(--boop) != '[' || ignores != 0){
						if     (*boop == ']') ++ignores;
						else if(*boop == '[') --ignores;
					}
				}
				break;
			}
		}
		++boop;
	}
	std::cout << std::endl << "all done" << std::endl;
}