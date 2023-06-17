package AVL;

public class AVLTree {
	Node root;
	
	public int height(Node n) {
		if(n == null) {
			return -1;
		}
		else {
			return n.height;
		}
	}
	
	public void updateHeight(Node n) {
		n.height = 1 + Math.max(height(n.left), height(n.right));
	}
	
//	public int getBalanced() {
//		return getBalanced(root);
//	}
	
	// calculates the height of left and right to check if its balanced: balanced = n.left - n.right == 1 || -1, helping method to balance the tree
	public int getBalanced(Node n) {
		if(n == null) {
			return -1;
		}
		else {
			return height(n.right) - height(n.left);
		}
	}
	
	public Node rotateRight(Node y) {
		// storing the nodes at left of y and right of x because we will rotate them; right of y will not change, left of x will not change cuz 
		//we rotating right, opposite when rotating left 
		Node x = y.left;
		Node z = x.right;
		
		// linking the right of x to y, and the left y to z
		x.right = y;
		y.left = z;
		
		updateHeight(y);
		updateHeight(x);
		
		return x;
	}
	
	public Node rotateLeft(Node y) {
		Node x = y.right;
		Node z = x.left;
		
		x.left = y;
		y.right = z;
		
		updateHeight(y);
		updateHeight(x);
		
		return x;
	}
	
	public Node rebalance(Node n) {
		updateHeight(n);
		
		int balance = getBalanced(n);
		
		if(balance > 1) {
			if(height(n.right.right) > height(n.right.left)) {
				n = rotateLeft(n);
			}
			else {
				n.right = rotateRight(n.right);
				n = rotateLeft(n);
			}
		}
		
		else if(balance < -1) {
			if(height(n.left.left) > height(n.left.right)) {
				n = rotateRight(n);
			}
			else {
				n.left = rotateLeft(n.left);
				n = rotateRight(n);
			}
		}
		
		return n;
	}
	
	public void insert(int data) {
		root = insert(root, data);
	}
	
	public Node insert(Node n, int data) {
		if(n == null) {
			return new Node(data);
		}
		else if(data < n.data) {
			n.left = insert(n.left, data);
		}
		else {
			n.right = insert(n.right, data);
		}
		
		return rebalance(n);
	}
	
	public void inOrder() {
		inOrder(root);
	}
	
	public void inOrder(Node n) {
		if(n == null) {
			return;
		}
		else {
			inOrder(n.left);
			System.out.print(n.data + " ");
			inOrder(n.right);
		}
	}
	
	public Node search(int data) {
		return search(root, data);
	}
	
	public Node search(Node n, int data) {
		if(n == null || n.data == data) {
			return n;
		}
		
		else if(data < n.data) {
			return search(n.left, data);
		}
		else {
			return search(n.right, data);
		}
	}
	
}

