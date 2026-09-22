import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner scin=new Scanner(System.in);

        int a=scin.nextInt();
        int b=scin.nextInt();

        int sum=0;

        if(a<b){
            for(int i=a;i<=b;i++){
                if(i%5==0){
                    sum+=i;
                    }
            }
        }
        else{
            for(int i=b;i<=a;i++){
                if(i%5==0){
                    sum+=i;
                    }
            }
        }

        System.out.print(sum);
        
    }
}