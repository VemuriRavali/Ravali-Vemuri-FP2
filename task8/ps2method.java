public  class Main{
    public static void doSquare(int a,int b){
        int result;
        result=(a*a)+(b*b)+(2*(a*b));
        System.out.printf("%d \n",result);
    }
    public static void main(String[] args){
       doSquare(10,20);
       doSquare(50,60);
       doSquare(30,20);
    
}
    }
