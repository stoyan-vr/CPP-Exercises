public class Test {
	public static void main(String[] args) {
		
    int[] list = {4, 5, 1, 2, 9, -3};
	  
    System.out.println(linearSearch(list, 9, 8));
  }

  int linearSearch(int[] list, int key, int arraySize) {

    if (arraySize == 0)
		  return -1;
	  else if (list[arraySize] == key)
		  return arraySize;
	  else
		  return linearSearch(list, key, arraySize - 1);
  }
}