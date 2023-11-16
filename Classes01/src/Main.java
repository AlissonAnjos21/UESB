public class Main {
    public static void main(String[] args) {

        Pessoa p1 = new Pessoa("Jurandir", 21);
        System.out.println(p1.getNome() + "\n" + p1.getIdade());

        Triangulo t1 = new Triangulo(10, 10);
        System.out.println(t1.area());

        EquacaoDoSegundoGrau e1 = new EquacaoDoSegundoGrau(1, -1, -12);
        System.out.println(e1.resolver()[0] + "\n" + e1.resolver()[1]);

    }
}