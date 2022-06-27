package decomp.ic805.pessoa2;

public class Pessoa2 {
	private String nome;
	private int idade;
	
	public String falar(){
		return "Oi, tudo bem?";
	}
	
	public String getNome() {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	public int getIdade() {
		return idade;
	}
	public void setIdade(int idade) {
		this.idade = idade;
	}
}
