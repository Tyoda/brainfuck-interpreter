#include <sstream>
#include "brain.hpp"

#simpler wrapper for the brainnode thingi

Brain::Brain(){
	cursor = new BrainNode();
}

void Brain::left(){
	cursor = cursor->left();
}

void Brain::right(){
	cursor = cursor->right();
}

char Brain::value(){
	return cursor->get_value();
}

void Brain::inc(){
	cursor->inc();
}

void Brain::sub(){
	cursor->sub();
}

void Brain::read(){
	cursor->read();
}

void Brain::write(){
	cursor->write();
}

std::ostream& operator<<(std::ostream& os, const Brain& b){
	return os << *(b.cursor);
}
