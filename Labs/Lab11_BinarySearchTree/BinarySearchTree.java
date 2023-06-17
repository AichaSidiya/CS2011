package BST;

public class BinarySearchTree {
	Node root;
	
	public void insert(int key) {
		root = insertRecursive(root, key);
	}
	
	public Node insertRecursive(Node n, int key) {
		if(n == null) {
			return new Node(key);
		}
		else if(key < n.data) {
			n.left = insertRecursive(n.left, key);
			return n;
		}
		else {
			n.right = insertRecursive(n.right, key);
			return n;
		}
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
	
	public int findMax() {
		Node n = findMax(root);
		return n.data;
	}
	
	public Node findMax(Node n) {
		if(n.right == null) {
			return n;
		}
		else {
			return findMax(n.right);
		}
	}
}
