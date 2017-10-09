//EXP 7 java 
class Demo
{
    int l;
    int b;
     
   int x;
   int y;
    Demo(int l,int b)
    {
        this.l = l;
        this.b = b;
	System.out.println("Area is"+(l*b));
    }
 
    void display(int x,int y)
    {
    	this.x=x;
	this.y=y;    
        System.out.println("Area of recatangle is"+(x*y));
   }	

   public static void main(String[] args)
    {

    

        Demo object = new Demo(10,20);
        object.display(6,7);
	

   }
}
