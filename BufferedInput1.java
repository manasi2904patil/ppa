import java.io.*;

class BufferedInput1
{
    public static void main(String arr[]) throws IOException
    {
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);

       // BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        String name = null;
        int age = 0;
        float marks = 0.0f;

        System.out.println("Enter Your name :");
         name = bobj.readLine();

        System.out.println("Enter Your age :");
        age = Integer.parseInt(bobj.readLine());

        System.out.println("Enter Your marks :");
        marks = Float.parseFloat(bobj.readLine());
    
        System.out.println("Name :"+name);
        System.out.println("age :"+age);
        System.out.println("Marks :"+marks);
    }

}