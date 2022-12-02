import java.io.*;

class BufferedInput
{
    public static void main(String arr[])
    {
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);
        String name = null;
        int age = 0;
        float Marks = 0.0f;

     try
     {
        System.out.println("Enter Your name :");
         name = bobj.readLine();

        System.out.println("Enter Your age :");
        age = Integer.parseInt(bobj.readLine());

        System.out.println("Enter Your marks :");
        Marks = Float.parseFloat(bobj.readLine());
     }
     catch(IOException obj)
     {}
        System.out.println("name :"+name);
        System.out.println("age :"+age);
        System.out.println("Marks :"+Marks);
    }

}