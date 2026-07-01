class kQueues {
	
	public:
	vector<int >front;
	vector<int>rear;
	vector<int>q;
	vector<int>next;
	int freespot;
	
	kQueues(int n, int k) {
		// Initialize your data members
		front.resize(k, -1);
		rear.resize(k, -1);
		q.resize(n);
		freespot = 0;
		next.resize(n);
		for (int i = 0 ; i < n ; i++) {
			if (i == n - 1) {
				next[i] = -1 ;
				break;
			}
			next[i] = i + 1;
		}
	}
	
	void enqueue(int x, int i) {
		// enqueue element x into queue i
		if (freespot == -1)
			return;
		if (front[i] == -1) {
			front[i] = freespot;
			rear[i] = freespot;
			q[freespot] = x;
			freespot = next[rear[i]];
			next[rear[i]] = -1;
		} else {
		    int temp = next[rear[i]];
			next[rear[i]] = freespot;
			rear[i] = freespot;
			q[freespot] = x;
			freespot = next[rear[i]];
			next[rear[i]] = -1;
		}
		
		
	}
	
	int dequeue(int i) {
		// dequeue element from queue i
		if (front[i] == -1)
			return - 1;
		// freepot exist kar rha hoga , nya jab create hoga isko or nye value ko
		// link karna ha
		int temp = freespot;
		int data = q[front[i]];
		freespot = front[i];
		front[i] = next[front[i]];
		next[freespot] = temp;
		
		// kese detect kare ki queu khatam ho chuki hai ??
		if (front[i] == -1){
		    rear[i] = -1;
		}
		return data;
	}
	
	bool isEmpty(int i) {
		// check if queue i is empty
	    return front[i] ==-1;
	}
	
	bool isFull() {
		// check if array is full
		return freespot==-1;
	}
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna