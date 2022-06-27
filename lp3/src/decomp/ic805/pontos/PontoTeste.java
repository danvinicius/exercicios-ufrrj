package decomp.ic805.pontos;

public class PontoTeste {

	public static void main(String[] args) {
		Ponto ponto1 = new Ponto();
		ponto1.imprimirCoordenadas();
		System.out.println("Distancia ao origem = " + ponto1.calcularDistancia());
		System.out.println();
		ponto1.deslocar(3.0 ,4.0);
		ponto1.imprimirCoordenadas();
		System.out.println("Distancia ao origem = " + ponto1.calcularDistancia());
		

	}

}
