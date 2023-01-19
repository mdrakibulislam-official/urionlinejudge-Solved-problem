import java.io.IOException;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) throws IOException {
        
        Scanner input = new Scanner(System.in);
        int a,b,c;
        a=input.nextInt();
        b=input.nextInt();
        c=input.nextInt();
        if(a-b == 0 || b-c==0 || a-c == 0){
            System.out.println("S");
        }
        else if((a+b)-c == 0 || (b+c)-a == 0 || (a+c)-b == 0 ){
            System.out.println("S");
        }
        else
            System.out.println("N");
        
    }
    
}
