import java.lang.*;

class Demo
{
    public void fun()     // fun
    {
        System.out.println("Fun without parameters");
    }
    public void fun(int i)
    {
        System.out.println("Fun with one integeras a parameters");
    }
    public void fun(int i, int j)
    {
        System.out.println("Fun with two integeras a parameters");
    }
    public void fun(double i)
    {
        System.out.println("Fun with one double parameters");
    }
}
class Overloading
{
    public static void main(String arr[])
    {
        Demo obj = new Demo();
        obj.fun();
        obj.fun(11);
        obj.fun(11,21);
        obj.fun(11.21);
    }
}