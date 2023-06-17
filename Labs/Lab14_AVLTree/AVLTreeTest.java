package AVL;

public class AVLTreeTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		AVLTree avl = new AVLTree();
		
		avl.insert(13);
		avl.insert(10);
		avl.insert(5);
		avl.insert(20);
		avl.insert(15);
		avl.insert(27);
		
		System.out.println("InOrder Traversal\n" );
		avl.inOrder();
		
		Node find1 = avl.search(0);
		
		Node find2 = avl.search(5);
		
		Node arr[] = {find1, find2};
		
		for(int i = 0; i < arr.length; i++) {
			if(arr[i] == null) {
				System.out.println("\n\nNode does not exist in Tree");
			}
			else {
				System.out.println("Node Data: " + arr[i].data);
			}
		}
	}

}
