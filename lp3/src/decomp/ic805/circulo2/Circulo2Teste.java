package decomp.ic805.circulo2;

public class Circulo2Teste {
	  /** Método main */
	  public static void main(String[] args) {
	    // Cria um círculo com raio 0.0
	    Circulo2 circulo1 = new Circulo2();
	    System.out.println("Area do circulo de raio " +
	    circulo1.getRaio() + " = "+circulo1.calcularArea());

	    // Cria um círculo com raio 25
	    Circulo2 circulo2 = new Circulo2(25.0);
	    System.out.println("Area do circulo de raio " +
	    circulo2.getRaio() + " = "+circulo2.calcularArea());

	    // Cria um círculo com raio 125.0
	    Circulo2 circulo3 = new Circulo2(125.0);
	    System.out.println("Area do circulo de raio " +
	    circulo3.getRaio() + " = "+circulo3.calcularArea());
			
	    // Muda o valor do raio do círculo
	    circulo2.setRaio(100.0);
	    System.out.println("Area do circulo de raio " +
	    circulo2.getRaio() + " = "+circulo2.calcularArea());
	  }
}
