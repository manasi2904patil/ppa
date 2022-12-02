
class Loops
{
    public static void main(String Arg[])
    {
        int Arr[] = {10,20,30,40};
        int icnt = 0;

        System.out.println("Traversal of Array using for loop :");
        for(icnt = 0; icnt < Arr.length; icnt++)
        {
            System.out.println(Arr[icnt]);
        }

        System.out.println("Traversal of Array using while loop :");
        icnt = 0;
        while(icnt < Arr.length)
        {
            System.out.println(Arr[icnt]);
            icnt++;
        }

        System.out.println("Traversal of Array using do while loop :");
        icnt = 0;
        do
        {
            System.out.println(Arr[icnt]);
            icnt++;
        }while(icnt < Arr.length);

        System.out.println("Traversal of Array using for-each loop :");
        for(int iNo : Arr)
        {
            System.out.println(iNo);
        }

    }
}