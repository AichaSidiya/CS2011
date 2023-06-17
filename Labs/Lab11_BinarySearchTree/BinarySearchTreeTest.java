package BST;

public class BinarySearchTreeTest {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		BinarySearchTree b = new BinarySearchTree();
		
		b.insert(13);
		b.insert(10);
		b.insert(5);
		b.insert(20);
		b.insert(15);
		b.insert(27);
		
		System.out.println("InOrder Traversal\n" );
		b.inOrder();
		
		System.out.println("\n\nThe maximum of this tree is: " + b.findMax());
		
	}

}
