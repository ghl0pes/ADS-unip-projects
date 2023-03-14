import java.util.Scanner;

public class NomeUsuario {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        NomeUsuario thisClass = new NomeUsuario

        String getName = scan.nextString();

        thisClass.formatarNome(getName)
    }

    public static void formatarNome(String name) {
        System.out.println(name);
        return;
    }
}