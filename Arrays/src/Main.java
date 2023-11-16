public class Main {
    public static void main(String[] args) {
        int[] arrayNumeros = {1, 2, 3, 4, 5};
        float[] arrayFloat = {1, 1, 1, 1, 1};

        System.out.println(somaArray(arrayNumeros));

        System.out.println(mediaArray(arrayFloat));
    }

    public static int somaArray(int[] array){
        int soma = 0;
        for(int i: array){
            soma += i;
        }
        return soma;
    }

    public static float mediaArray(float[] array){
        float soma = 0;
        for(float i: array){
            soma += i;
        }
        return soma / array.length;
    }

}