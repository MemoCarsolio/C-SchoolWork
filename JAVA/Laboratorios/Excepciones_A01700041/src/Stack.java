
public class Stack {
	public int[] stack;
	public int top;
	public int max;
	
	public Stack(){
		
		max = 100;
		top = 0;
		stack = new int[max];
		
		for(int m = 0; m<max; m++){		
			stack[m] = 0;
		}
		
	}
	public Stack(int x){
		max = x;
		top = 0;
		stack = new int[max];
		for(int m = 0; m<max; m++){
			stack[m] = 0;
		}
	}
	
	public void Push(int x) throws FullStackException{
		if (top >= max){
			
			throw new FullStackException("Stack Overflow");
			
		}
		else{
		stack[top] = x;
		top++;
		}		
	}
	public void Pop() throws FullStackException{
		if (top == 0){
			throw new FullStackException("Stack Underflow");
		}
		else{
			stack[top] = 0;
			top--;
		}
		
	}
	public String toString(){
		String x = "Positions: " + top + " max: " + max ;
			
		
		
		return x;
	}
	
	
	
	
	
	public int[] getStack() {
		return stack;
	}
	public void setStack(int[] stack) {
		this.stack = stack;
	}
	public int getTop() {
		return top;
	}
	public void setTop(int top) {
		this.top = top;
	}
	public int getMax() {
		return max;
	}
	public void setMax(int max) {
		this.max = max;
	}
	
	
	

}
