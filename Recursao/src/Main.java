public class Main {
    public static void main(String[] args) {

        System.out.println(fatorial(5));

        System.out.println(fibonacci(8));

        System.out.println(inversaoDeString("VinteEUm"));

    }

    private static int fatorial(int num) {
        if(num == 0){
            return 1;
        }else {
            return num * (fatorial(num-1));
        }
    }

    private static int fibonacci(int num){
        if(num == 1 || num == 2){
            return 1;
        }else{
            return fibonacci(num - 1) + fibonacci(num - 2);
        }

    }

    private static String inversaoDeString(String str){
        if(str.length() == 0){
            return "";
        }else{
            return str.charAt(str.length() - 1) + inversaoDeString(str.substring(0, str.length() - 1));
        }

    }

}