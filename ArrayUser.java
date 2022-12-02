import java.util.Scanner;

class ArrayUser
{
        public static void main(String arg[])
        {
            int icnt = 0;
            int iSum = 0;
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter The size of Array : ");
            int iSize = sobj.nextInt();

            int Arr[] = new int[iSize];

            System.out.println("Number of elements in the Array are :"+Arr.length);

            System.out.println("Enter the Element of Array :");
            for(icnt = 0; icnt < Arr.length; icnt++)
            {
                Arr[icnt] = sobj.nextInt();
            }

            System.out.println("Elements of the array are :");
            for(icnt = 0; icnt < Arr.length; icnt++)
            {
                System.out.println(Arr[icnt]);
            }

            for(icnt = 0; icnt < Arr.length; icnt++)
            {
                iSum = iSum + Arr[icnt];
            }
            System.out.println("Addition is :"+iSum);
        }
}