public class Triangulo {

    private float base;
    private float altura;

    Triangulo(float base, float altura){
        this.base = base;
        this.altura = altura;
    }

    public float area(){
        return (this.base*this.altura)/2;
    }

}
