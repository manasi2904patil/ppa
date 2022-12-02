import java.net.*;
import java.io.*;

public class Server
{
    public static void main(String arr[]) throws Exception
    {
        System.out.println("Server Application is Running...");

        ServerSocket ss = new ServerSocket(2100);
        System.out.println("Server is Running at port number 2100 and waiting for client request");
        
        Socket s = ss.accept();   
        System.out.println("Request of Client gets accepted.");

    }
}