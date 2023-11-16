public class EquacaoDoSegundoGrau {

    private float a;
    private float b;
    private float c;

    EquacaoDoSegundoGrau(float a){
        this.a = a;
        this.b = 0;
        this.c = 0;
    }

    EquacaoDoSegundoGrau(float a, float b, String parametroB){
        this.a = a;
        this.b = b;
        this.c = 0;
    }

    EquacaoDoSegundoGrau(float a, float c){
        this.a = a;
        this.b = 0;
        this.c = c;
    }

    EquacaoDoSegundoGrau(float a, float b, float c){
        this.a = a;
        this.b = b;
        this.c = c;
    }

    public float[] resolver(){
        float[] x = new float[2];
        float delta = (float) (Math.pow(this.b, 2) + (-4*this.a*this.c));
        float x1 = (float) (((-this.b) + Math.sqrt(delta))/2*this.a);
        float x2 = (float) (((-this.b) - Math.sqrt(delta))/2*this.a);
        x[0] = x1;
        x[1] = x2;
        return x;
    }

}
