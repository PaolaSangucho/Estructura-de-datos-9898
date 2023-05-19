import java.util.stack;
public static void main(String[] arg){
    Stack<Integer> pila = new Stack<>();

    pila.push(10);
	pila.push(20);
	pila.push(30);

	while(!pila.empty()) {
        System.out.print(pila.peek()+"");
        pila.pop();
    }
}