
class Demo
{
    public int No1;
    public int No2;

    public Demo(int a, int b)
    {
        No1 = a;
        No2 = b;
    }
}
    
class HashCodeDemo
{
    public static void main(String arr[])
    {
        Demo obj = new Demo(11,21);

        System.out.println("HashCode of obj is:"+obj.hashCode());
    }
    
}
