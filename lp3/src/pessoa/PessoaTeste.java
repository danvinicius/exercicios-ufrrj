package decomp.ic805.pessoa;

public class PessoaTeste {

	public static void main(String[] args) {
		Pessoa pessoa1 = new Pessoa();
		pessoa1.nome = "Joao";
		pessoa1.idade = 20;
		
		pessoa1.falar();
		System.out.println("O nome da pessoa eh " +
				"" + pessoa1.nome);
		System.out.println("Tem " + pessoa1.idade + " anos,");
		System.out.print("e diz " + pessoa1.falar());
		
		System.out.println();
		
		Pessoa pessoa2 = new Pessoa();
		pessoa2.nome = "Maria";
		pessoa2.idade = 21;
		
		System.out.println("\nO nome da pessoa eh " +
				"" + pessoa2.nome);
		System.out.println("Tem " + pessoa2.idade + " anos,");
		System.out.print("e diz " + pessoa2.falar());
	}

}

