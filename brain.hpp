class BrainNode{
	public:
		BrainNode();
		BrainNode(BrainNode* prev, const bool positive);
		
		BrainNode* left_node;
		char value;
		BrainNode* right_node;
		
		void inc();
		void sub();
		BrainNode* left();
		BrainNode* right();
		
		char get_value();

		void read();
		void write();
        friend std::ostream& operator<<(std::ostream& os, const BrainNode& c);
};

class Brain{
	public:
		Brain();
		BrainNode* cursor;
		void left();
		void right();
		
		void inc();
		void sub();

		char value();

		void read();
		void write();
        friend std::ostream& operator<<(std::ostream& os, const Brain& c);
};