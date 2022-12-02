import java.util.*;

class AgeInvalid extends Exception
{
    AgeInvalidException(String str)
    {
        super(str); 
    }
}
class UserDefined
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Your Age :");
        int iAge = sobj.nextInt();

    try
     {
        if(iAge < 15)
        {
            AgeInvalidException aobj = new AgeInvalidException("Your age is less than 15");
            throw aobj;
            //throw new AgeInvalid("Your Age is less than 15");

        }
        else
        {
            System.out.println("Age is valid");
        }
     } 
      catch(ArithmeticException obj)
      {
        System.out.println(obj);
      } 
    }
}