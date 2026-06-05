import java.util.Scanner;
public class biteise op {
    public static void main(String[] args) {
        Scanner sc= Scanner(System.in());
        Stringbuilder s= new Stringbuilder(sc.next());
        int flag =0;
        for(char ch: s){
            flag|= (1<<(ch-'a'));

        }
        System.out.println(flag==(1<<26)? "Yes": "No");

    }
}