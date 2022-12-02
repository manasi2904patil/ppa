
class Multi
{
    public static void main(String arg[])
    {
        //Arr is 2 Dimenstional array which contains 3 one dimentional
        // Arr, each one dimentional array contains 4 elements
        //ecah element is of type integer
        // Allowed in c and c++
        
        // int Arr[3][4] = {{10,20,30,40},{50,60,70,80},{90,100,110,120}}

         int Arr[][] = {{10,20,30,40},{50,60,70,80},{90,100,110,120}};

         System.out.println(Arr.length);        // 3
         System.out.println(Arr[0].length);     // 4
    }
}