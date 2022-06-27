package decomp.ic805.pontos;

public class Ponto {
	double posicaoX;
	double posicaoY;
	
	public void imprimirCoordenadas(){
		System.out.println("x = " + posicaoX + " y = " + posicaoY);
	}
	
	public double calcularDistancia(){
		double distancia = Math.sqrt(Math.pow(posicaoX, 2) + Math.pow(posicaoY, 2));
		return distancia;
	}
	
	public void deslocar (double dX, double dY){
		posicaoX = posicaoX + dX;
		posicaoY = posicaoY + dY;
	}

}
