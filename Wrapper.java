import java.io.*;

class Wrapper
{
    public static void main(String arr[])
    {
        int no = 11;

        Integer iobj = new Integer(no);   // Boxing -

        System.out.println(no);
        System.out.println(iobj);

        int x = iobj;
        System.out.println(x);
    }

}