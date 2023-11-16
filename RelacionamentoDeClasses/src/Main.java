import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        Jogador j1 = new Jogador("Valmir", 21);

        ArrayList<Jogador> jogadores = new ArrayList<Jogador>();
        jogadores.add(j1);

        Time t1 = new Time("Time Campeão", jogadores);
    }
}