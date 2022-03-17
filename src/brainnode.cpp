#include <iostream>
#include <sstream>
#include "brain.hpp"
BrainNode::BrainNode(){
	right_node = NULL;
	left_node = NULL;
	value = 0;
}

BrainNode::BrainNode(BrainNode* prev, const bool positive){
	right_node = positive ? NULL : prev;
	left_node = positive ? prev : NULL;
	value = 0;
}

BrainNode* BrainNode::right(){
	if(!right_node)
		right_node = new BrainNode(this, true);
	return right_node;
}

BrainNode* BrainNode::left(){
	if(!left_node)
		left_node = new BrainNode(this, false);
	return left_node;
}

void BrainNode::inc(){
	if(value == 255)
		value = 0;
	else
		++value;
}

void BrainNode::sub(){
	if(value == 0)	
		value = 255;
	else
		--value;
}

char BrainNode::get_value(){
	return value;
}

void BrainNode::read(){
	std::cin >> value;
}

void BrainNode::write(){
	putchar(value);
}

std::ostream& operator<<(std::ostream& os, const BrainNode& bn){
	return os << bn.value;
}
