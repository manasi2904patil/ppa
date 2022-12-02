import java.util.Scanner;

class ArrayX
{
        public int Arr[];
        public int iSize;

        public ArrayX(int No)
        {
            this.iSize = No;
            this.Arr = new int [iSize];
        }    

        public void Accept()
        {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter the Element : ");

            for(int icnt = 0; icnt < iSize; icnt++)
            {
                Arr[icnt] = sobj.nextInt();
            }
        }

        public void Display()
        {
            System.out.println("Elements of array are : ");
            for(int icnt = 0; icnt < iSize; icnt++)
            {
                System.out.println(Arr[icnt]);
            }
        }

        public int Addition()
        {
            int iSum = 0;
            for(int icnt = 0; icnt < iSize; icnt++)
            {
                iSum = iSum + Arr[icnt];
            }

            return iSum;
        }
}

class ArrayOOP
{
    public static void main(String Arg[])
    {
        ArrayX obj1 = new ArrayX(4);
        obj1.Accept();
        obj1.Display();

        int iRet = obj1.Addition();
        System.out.println("Addition is : "+iRet);
    }
}