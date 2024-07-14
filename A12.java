package a1;
//code to execute class inside one class
public class A12 
{
    class A
    {
    	class B
    	{
    		public void print()
    		{
    			System.out.println("print() inside class b inside class A inside main class A12");
    		}
    	}
    }
	public static void main(String[] args)
	{
		// TODO Auto-generated method stub
        A12 AB=new A12();
        A12.A A1=AB.new A();
        A12.A.B B1=A1.new B();
        B1.print();
	}

}
